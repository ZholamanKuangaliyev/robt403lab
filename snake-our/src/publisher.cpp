#include "ros/ros.h" 
#include "std_msgs/Float64.h" 
#include "dynamixel_msgs/JointState.h" 
#include <sstream> 
 
 
double currVal = 0; 
double tarVal = 0; 
 
void currposCallback(const dynamixel_msgs::JointState& msg){ 
  currVal = msg.current_pos; 
} 
 
 
void desirposCallback(const std_msgs::Float64::ConstPtr& msg){ 
  tarVal = msg->data; 
} 
 
 
int main(int argc, char **argv){ 
 
  ros::init(argc, argv, "talker"); 
 
  ros::NodeHandle n; 
  ros::Subscriber sub31 = n.subscribe("/end/state", 100, currposCallback); 
  ros::Subscriber sub32 = n.subscribe("number2", 100, desirposCallback); 
  ros::Publisher pub3 = n.advertise<std_msgs::Float64>("/end/command", 100); 
 
 
  ros::Rate loop_rate(10); 
  ros::Time startTime = ros::Time::now(); 
 
  
  while (ros::ok()){ 
    ros::spinOnce(); 
 
    if(currVal > tarVal){ 
  tarVal = currVal; 
 } 
 std_msgs::Float64 msg; 
 msg.data = tarVal;  
 pub3.publish(msg); 
 
    //ROS_INFO("IsMoving to sub3 pos"); 
 
 
    loop_rate.sleep(); 
 
  } 
 
 
  return 0; 
}