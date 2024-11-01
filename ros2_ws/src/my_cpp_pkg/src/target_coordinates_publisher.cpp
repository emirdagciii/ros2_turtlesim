#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces1/msg/TargetCoordinates.hpp"

class TargetCoordinatesPublisher : public rclcpp::Node 
{
public:
    TargetCoordinatesPublisher() : Node("robot_news_station")
    {
        publisher_ = this->create_publisher<example_interfaces::msg::String>("target_coordinates",10);
        timer_ = this->create_wall_timer(std::chrono::milliseconds(500), std::bind(&TargetCoordinatesPublisher::publishTargetCoordinates, this));
        RCLCPP_INFO(this->get_logger(), "Robot Targer Coordinates has been started.");
    }

private:
    void publishTargetCoordinates()
    {
        auto msg = custom_interfaces1::msg::TargetCoordinates();
        msg.name = "robottt"
            
        geometry_msgs::Point point;
        point.x = 1.0;
        point.y = 2.0;
        point.z = 3.0;

    
        ROS_INFO("Point: x = %f, y = %f, z = %f", point.x, point.y, point.z);
             publisher_->publish(msg);
          }

    std::string robot_name_;
    rclcpp::Publisher<custom_interfaces1::msg::TargetCoordinates>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<TargetCoordinatesPublisher>(); 
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
