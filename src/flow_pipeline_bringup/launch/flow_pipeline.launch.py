from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([

        # ── camera_ros (libcamera, MIPI-CSI2) ────────────────────────────────
       Node(
        package='v4l2_camera',
        executable='v4l2_camera_node',
        name='camera',
        parameters=[{
            'video_device': '/dev/video0',
            'image_size':   [640, 480],
            'pixel_format': 'GREY',    # mono8 equivalent for USB
            }],
            remappings=[
                ('image_raw',   '/camera/image_raw'),
                ('camera_info', '/camera/camera_info'),
            ]
        ),

        # ── PLACEHOLDER: undistortion node ───────────────────────────────────
        # Replace package/executable once you confirm what is installed.
        # Verify with: ros2 pkg executables image_proc
        # Node(
        #     package='image_proc',
        #     executable='rectify_node',
        #     name='rectify',
        #     remappings=[
        #         ('image',       '/camera/image_raw'),
        #         ('camera_info', '/camera/camera_info'),
        #         ('image_rect',  '/camera/image_rect'),
        #     ]
        # ),

        # ── optical_flow_node (calcOpticalFlowPyrLK) ─────────────────────────
        # Subscribes to:  /camera/image_rect, /camera/camera_info
        # Publishes to:   /optical_flow/integrated
        Node(
            package='optical_flow_node',
            executable='optical_flow_node',
            name='optical_flow',
            parameters=[{
                'focal_length_x': 277.0,
                'max_features':   100,
                'min_features':   20,
                'win_size':       15,
                'pyr_levels':     2,
            }]
        ),

        # ── PLACEHOLDER: IMU fusion node ─────────────────────────────────────
        # Subscribes to: /optical_flow/integrated, /mavros/imu/data
        # Publishes to:  /mavros/optical_flow/optical_flow_rad

        # ── PLACEHOLDER: MAVROS node ─────────────────────────────────────────
        # Subscribes to: /mavros/optical_flow/optical_flow_rad
        # Publishes to:  FC over UART serial (OPTICAL_FLOW_RAD MAVLink msg)

    ])