#include <ros/ros.h>
#include <std_msgs/Float64.h>

int main(int argc, char** argv) {
ros::init(argc, argv, "publisher_cpp_nod");   // Initiate a Node 'publisher_cpp_nod'

ros::NodeHandle nh;                    //Publisher object
ros::Publisher pub = nh.advertise<std_msgs::Float64>("heading_angle", 1000);

ros::Rate rateHandler = ros::Rate(1);  // Set a publish rate of 1 Hz */
std_msgs::Float64 pubMsg; 
       pubMsg.data = 0.0;
while (ros::ok())
     {
         pubMsg.data += 0.1;
       pub.publish(pubMsg); 
             ROS_INFO(" publish heading_angle =%f \n" ,float (pubMsg.data));
       ros::spinOnce();
       rateHandler.sleep(); // Make sure the publish rate maintains at 1 Hz
      }
     return 0;
}

