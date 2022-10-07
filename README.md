# ros_study
my first ros study

https://github.com/juchajam/ros_study

### 2022년 9월 27일 시작
- topic_tutorial 패키지 생성
- my_publisher, my_subscriber 노드 생성
- 빌드
- 실행

### 2022년 9월 28일
- topic_tutorial 패키지에 python scripts 추가
- py_publisher.py, py_subscriber.py 노드 생성
- 빌드
- 실행

- topic_second 패키지 생성
- second_pub, second_sub, py_second_pub.py, py_second_sub.py 노드 생성
- 빌드
- 실행

- [과제 1](./topic_test/)

### 2022년 9월 29일
- [msg_tutorial](./msg_tutorial)
    - msg_tutorial 패키지 생성
    - msg 디렉토리에 Mymsg.msg 생성
    - msg_publisher, msg_subscriber, py_msg_pub.py, py_msg_sub.py 노드 생성
    - 빌드
    - 실행
- [service_tutorial](./service_tutorial)
    -service_tutorial 패키지 형성
    -srv 디렉토리에 AddTwoInts.srv 생성
    -my_server, my_client, py_server.py, py_client.py 노드 생성
    - 빌드
    - 실행
### 2022년 10월 6일
### [yh_turtle](./yh_turtle)
- yh_turtle 패키지 생성
- turtle_patrol, turtle_keyboard, turtle_clear 등 노드 생성
- [teleop_twist_keyboard 패키지 설치]
- 빌드
- 실행

### [roslaunch](#roslaunch)

### 2022년 10월 7일
### [yh_turtle](./yh_turtle)
- yh_turtle_circle.py, turtle_circle.cpp 노드 생성
- 빌드
- 실행

## ROS 명령어
### roscore
- ROS Master를 실행한다.
- 노드를 켜기 전에 가장 먼저 실행
'''bash
    roscore
'''
### rosrun
- 노드를 실행한다.
- rosrun 패키지이름 노드이름
'''bash
    rosrun <패키지이름> <노드이름>
'''
### catkin_create_pkg
- 현재 위치한 작업 공간에 패키지를 생성한다.
- catkin_create_pkg 패키지이름 의존성
'''bash
    catkin_create_pkg <패키지이름> <의존성1> <의존성2> ....
'''
## msg 만드는 법
1. 패키지 안에 msg 디렉토리를 만든다.
2. .msg 확장자의 파일을 만든다.
3. 안에 내용을 작성한다.
4. CMakelists.txt에서 설정한다.
5. 빌드시 생성된다.

### teleop_twist_keyboard 패키지
- 키보드 입력을 /cmd_vel 토픽의 geometry_msgs/Twist
메시지로 publish 하는 노드
'''bash
$ sudo apt install ros-melodic-teleop-twist-keyboard
'''
- 실행
'''bash
$ rosrun teleop_twist_keyboard teleop_twist_keyboard.py

### roslaunch
- roscore와 launch 파일에 있는 노드들을 실행시키는 명령
- launch 파일은 '패키지 디렉토리/launch'에 만든다.
- roslaunch 실행
'''bash
$ roslaunch <패키지 이름> <런치파일 이름>
'''
- launch 파일은 <launch></launch> 태그 사이에 내용을 입력한다.
- node 태그는 패키지 이름, 노드 타입, 노드 이름을 입력한다.
- param 태그는 파라미터 이름, 값 타입을 입력한다.