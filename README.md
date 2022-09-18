### robt403 lab 3 ###
for robt403 lab
##Task 1##
The aim of this task was to create a rosnode that will take “std_msgs/Float64” values and publish them to a particular joint of the planar robot. The node should send the command to the joint only if the previous value is lower than the new value.  
1) We have connected a planar joint and PC, by creating a workspace with packages of the planar joint and connected the robot to the source supply at 12 V. 
2) We have created a python file with a code that implements the aim of the task, by creating an additional node that will listen to the values and publish them to the particular joint in case conditions are verified. 
3) By creating an executable file and running the code by rosrun “our package our executable” command we have accomplished the task.  
The following video describes the code and shows the performance of the planar joint.

https://drive.google.com/file/d/1xsdBsy-vcHS4XzQWCHfUyQKTtoY7fc1R/view?usp=sharing

##Task 2##
In the task we were assigned to do the step response of the base joint (a) and end-effector joint (b). To solve this problem we used rqt and sent signals to the joints one by one. Also, on the graph we showed the desired position and current position of the joint. After sending the signal to move to some point, we stopped the autoscroll and focused on the graph. The results of the experiment are presented:

![task2_end](https://user-images.githubusercontent.com/112862577/190898389-7e91fff6-5d8a-4666-91c8-53c1aed9ef45.jpg)
![task2_base](https://user-images.githubusercontent.com/112862577/190898391-2d702368-6f21-47c6-9e4d-ec3fc0b98c93.jpg)

https://drive.google.com/file/d/1vOXCRlm0DqAsgeFdgSkcB2LvGibDfFTU/view?usp=sharing

##Task 3##
Through rqt we then proceeded with sending to topics values of a sine-wave function and getting appropriate response from the desired joints.
1. In order to control the state of the base joint, we send values of 0.7sin(0.5*i) (std_msgs/Float64) at the rate of 1 Hz to the topic /motorom2m/command from rqt window. In the MatPlot window of rqt,
we track two topics of the base joint such as /motortom2m/state/current_pos and 
/motortom2m/state/goal_pos. Output from the MatPlot window is shown below. As you can see, we have a good sinusoidal response.
2. For the control of the last joint, rqt published values of sin(i) (std_msgs/Float64) to the relevant topic called /end/command with the same rate as above. MatPlot tracked two topics to observe state /end/state/current_pos  and /end/state/goal_pos. Results shown below indicate that motors had a proper sinusoidal response.

![task3_end](https://user-images.githubusercontent.com/112862577/190898433-a522e340-f43a-400a-8932-b42971128d79.jpg)
![task3_base](https://user-images.githubusercontent.com/112862577/190898443-77da5617-9b22-4b36-be5a-49803aec459b.jpg)

https://drive.google.com/file/d/1SmolIBzZkZ7uaS9IRR5pQ_KSTtKQmOJ9/view?usp=sharing

P.S. We could not upload the video due to the large size of the file, so we uploaded the links to our google folder.



