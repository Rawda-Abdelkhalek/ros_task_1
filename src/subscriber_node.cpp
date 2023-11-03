#include "ros/ros.h"
#include "std_msgs/Float64.h"

void subscriberCallback(const std_msgs::Float64::ConstPtr& msg)
{
    ROS_INFO("Received heading_angle = %f" , msg->data);
}

int main(int argc, char* argv[])
{
    ros::init(argc, argv, "subscriber_cpp_node");   // Initialise the node
    ros::NodeHandle nh;

    ros::Subscriber subscriber = nh.subscribe("heading_angle", 1, subscriberCallback);    //  queue_size = 1;


    ros::spin();

    return 0;
}

