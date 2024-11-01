#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from custom_interfaces1.msg import LedStateArray
from custom_interfaces1.srv import SetLed

class LedPanel(Node):

    def __init__(self):
        super().__init__("led_panel")
        self.led_states_ = [0, 0, 0]
        self.led_states_publisher_ = self.create_publisher(LedStateArray, "led_states", 10)
        self.timer_ = self.create_timer(4, self.publish_led_state)
        self.set_led_service_ = self.create_service(SetLed, "set_led", self.callback_set_led)
        self.get_logger().info("Led States publisher has been started.")

    def callback_set_led(self, request, response):
        led_number = request.led_number
        states = request.states  
        self.led_states_[led_number - 1] = states
        response.success = True
        self.publish_led_state()
        return response

    def publish_led_state(self):
        msg = LedStateArray()
        msg.led_states = self.led_states_
        self.led_states_publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = LedPanel()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
