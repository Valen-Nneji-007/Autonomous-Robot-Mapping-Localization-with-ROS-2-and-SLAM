#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry, Path
from geometry_msgs.msg import PoseStamped


class PracticingNode(Node):
    def __init__(self):
        super().__init__("practicing_node")
        self.declare_parameter("moving_path", "navbot_controller/odom")
        moving_path = self.get_parameter("moving_path")

        self.odom_sub = self.create_subscription(Odometry, "navbot_controller/odom", self.odomCallback, 10)
        self.path_pub = self.create_publisher(Path, "navbot/trac", 10)
        self.path = Path()

        self.get_logger().info("We gonna start now")

    def odomCallback(self, msg: Odometry):
        self.path.header.frame_id = msg.header.frame_id
        current_pose = PoseStamped()
        current_pose.header.frame_id = msg.header.frame_id
        current_pose.header.stamp = msg.header.stamp
        current_pose.pose = msg.pose.pose
        self.path.poses.append(current_pose)

        self.path_pub.publish(self.path)

def main():
    rclpy.init()
    node = PracticingNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()


