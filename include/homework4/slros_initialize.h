#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "homework4_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block homework4/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_homework4_std_msgs_Float64> Sub_homework4_53;

// For Block homework4/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_homework4_std_msgs_Float64> Sub_homework4_54;

// For Block homework4/Subscribe2
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_homework4_std_msgs_Float64> Sub_homework4_55;

// For Block homework4/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_homework4_std_msgs_Float64> Pub_homework4_20;

void slros_node_init(int argc, char** argv);

#endif
