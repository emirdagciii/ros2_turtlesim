from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    ld = LaunchDescription()
    turtlesim_node = Node(
        package="turtlesim",
        executable="turtlesim_node"
    
    )
    
    turtle_spawner_node = Node(
        package="turtlesim_catch_them_all",
        executable="turtlesim_spawner"
    )
    
    
    turtle_controller_node = Node(
        package="turtlesim_catch_them_all",
        executable="turtlesim_controller"
    )
    
    ld.add_action(turtle_controller_node)
    ld.add_action(turtlesim_node)
    ld.add_action(turtle_spawner_node)
    return ld