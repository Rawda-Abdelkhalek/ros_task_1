# # ROS Package: `ros_task_1`

This package contains two nodes:

1. **`publisher_node.cpp`**
    - Description: This node publishes float msg over the `heading angle` topic with an increment of 0.1 radians every one second.
    - File: `publisher_node.cpp`

2. **`subscribe_node.cpp`**
    - Description: This node subscribes to the `heading angle` topic.
    - File: `subscribe_node.cpp`

To run this ROS package, use the following command:

```bash
roslaunch ros_task_1 task_6.launch 
```
##  urdf file :
1- model consist of only a rectangle with dimentions 10 (length) cm x 10 (width) cm x5 (height) cm

2- semisphere on top of the rectangle in the middle with  a radius of 2.5 cm
