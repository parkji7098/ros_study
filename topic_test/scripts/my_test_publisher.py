#!/usr/bin/python
# -*- coding: utf-8 -*-
import rospy
from std_msgs.msg import Int64

def counter():
    rospy.init_node("my_test_publisher")
    pub = rospy.Publisher("count", Int64, queue_size=100)

    loop_rate = rospy.Rate(4)

    msg = Int64()
    msg.data = 0

    while not rospy.is_shutdown():
        pub.publish(msg)
        loop_rate.sleep()
        msg.data += 1
        if msg.data == 101:
            msg.data = 0

if __name__=="__main__":
    try:
        counter()
    except rospy.ROSInitException:
        pass 