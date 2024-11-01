#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from custom_interfaces1.msg import TargetCoordinates
from geometry_msgs.msg import Point

class TargetCoordinatesPublisher(Node):

    def __init__(self):
        super().__init__("target_coordinates_publisher")
        self.coordinates_publisher_ = self.create_publisher(TargetCoordinates, "target_coordinates", 10)
        self.timer_ = self.create_timer(1.0, self.publish_target_coordinates)
        self.get_logger().info("Coordinates publisher has been started.")

    def publish_target_coordinates(self):
        msg = TargetCoordinates()
        msg.name = "Robot"
        point = Point()
        point.x = 1.0  
        point.y = 2.0  
        point.z = 3.0  
        msg.coordinates = point
        self.coordinates_publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = TargetCoordinatesPublisher()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
