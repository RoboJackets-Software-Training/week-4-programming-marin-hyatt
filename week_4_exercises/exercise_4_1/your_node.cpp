#include <ros/ros.h>

// -= (EXERCISE 1) add the include for the string message! =-
#include <std_msgs/String.h>

// -========================================================-

// -= (EXERCISE 1) your callback function should be defined here! =-
void callback_function (std_msgs::String std_msg) {
	ROS_INFO_STREAM(std_msg.data);
}

// -===============================================================-

int main(int argc, char** argv){
    ros::init(argc, argv, "your_node");
    ros::NodeHandle p_nh = ros::NodeHandle("~");

    // -= (EXERCISE 1) create the ros subscriber here, and have it use your callback function! =-
    ros::Subscriber subscriber = p.nh.subscribe("/string.topic", 1, &callback_function);

    // -========================================================================================-

    ros::spin();
    return 0;
}