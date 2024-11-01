#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
from rclpy.qos import QoSProfile

class NumberCounterNode(Node):

    def __init__(self):
        super().__init__("number_counter")
        
        # QoS profili tanımla
        qos_profile = QoSProfile(depth=10)
        
        # Aboneliği QoS profili ile oluştur
        self.subscriber = self.create_subscription(
            Int64,
            "number",
            self.callback_number_count,
            qos_profile
        )
        
        self.get_logger().info("Number counter has been started.")

    def callback_number_count(self, msg):
        self.get_logger().info(f"Received number: {msg.data}")

def main(args=None):
    rclpy.init(args=args)
    node = NumberCounterNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
