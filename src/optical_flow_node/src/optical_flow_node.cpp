OpticalFlowNode() : Node("optical_flow_node")
{
    // ...parameters...

    image_sub_ = create_subscription<sensor_msgs::msg::Image>(
      "/camera/image_rect", rclcpp::SensorDataQoS(),
      std::bind(&OpticalFlowNode::imageCallback, this, std::placeholders::_1));

    camera_info_sub_ = create_subscription<sensor_msgs::msg::CameraInfo>(
      "/camera/camera_info", 1,
      [this](const sensor_msgs::msg::CameraInfo::SharedPtr msg) {
        if (!focal_calibrated_) {
          focal_x_ = msg->k[0];
          focal_calibrated_ = true;
        }
      });

    flow_pub_ = create_publisher<optical_flow_msgs::msg::OpticalFlowRaw>(
      "/optical_flow/integrated", rclcpp::SensorDataQoS());
}