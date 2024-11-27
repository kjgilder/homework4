#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "homework4";

// For Block homework4/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_homework4_std_msgs_Float64> Sub_homework4_53;

// For Block homework4/Subscribe1
SimulinkSubscriber<std_msgs::Float64, SL_Bus_homework4_std_msgs_Float64> Sub_homework4_54;

// For Block homework4/Subscribe2
SimulinkSubscriber<std_msgs::Float64, SL_Bus_homework4_std_msgs_Float64> Sub_homework4_55;

// For Block homework4/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_homework4_std_msgs_Float64> Pub_homework4_20;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

