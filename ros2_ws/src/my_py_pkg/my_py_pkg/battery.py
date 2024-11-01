#!/usr/bin/env python3

import rclpy 
from rclpy.node import Node


class BatteryNode(Node):

    def __init__(self):
        super().__init__("battery")
        self.battery_state_="full"
        self.battery_timer_=self.create_timer(0.1,self.check_battery_state)

    def check_battery_state(self):
        pass

def main(args=None):
    rclpy.init(args=args)
    node = BatteryNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
