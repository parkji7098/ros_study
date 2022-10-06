#include "ros/ros.h"
#include "yh_difference/YhDifference.h" // 서비스 헤더 파일
                                        // 빌드시 생성

// 서비스 요청이 있을 경우 실행되는 함수
// 서비스 요청은 req, 서비스 응답은 res로 설정
bool minus(yh_difference::YhDifference::Request& req,
        yh_difference::YhDifference::Response& res)
{
    res.result = req.a - req.b;
    ROS_INFO("request: a=%d, b=%d", req.a, req.b);
    ROS_INFO("response: result=%d", res.result);
    return true;
}               

int main(int argc, char** argv)
{
    ros::init(argc, argv, "yh_difference_server");
    ros::NodeHandle nh;

    // 서비스 서버(yh_difference_server)를 선언한다.
    // 서비스 이름은 (yh_difference_service)이고, 요청이 왔을 때 콜백함수(minus)를 실행한다.
    // (yh_difference) 패키지의 (YhDifference) 서비스 파일을 이용한다.
    ros::ServiceServer yh_difference_server = nh.advertiseService("yh_difference_service", minus);

    ROS_INFO("Service Server Ready.");
    ros::spin();
    return 0;
}
