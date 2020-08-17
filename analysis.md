# Class Scheduling Algorithm Analysis

## Introduction

The algorithms used for the assignment are FCFS, SJF and Priority scheduling. 

FCFS algorithm works on first-come first-serve basis. The arrival time is the important factor in this scheduling algorithm. It is non-preemptive and hence suitable for the class scheduling problem.

SJF algorithm schedules the processes based on their burst time. The process with the least burst time gets executed first and then the next least and then the next and so on. This algorithm is also non-preemptive.

Priority scheduling uses a priority number to schedule the processes with higher priority first. The algorithm comes in both preemptive and non-preemptive form. The one used in this assignment is the non-preemptive version.

## Consideration

There are certain characteristics associated with class scheduling that needs to be considered before choosing a scheduling algorithm. Firstly, classes cannot be interrupted and hence works similar to a non-preemptive process. This means that algorithms that are preemptive cannot be used to create the class schedule. Secondly, classes can have the same duration or priority, so using the duration or priority alone as a factor to determine the scheduling isn't sufficient. This is why arrival time is used as a tie-breaker when such scenarios arise.

## Analysis

### Inputs
The following inputs were given to each of the above algorithms:

    {{2302,3,2,1}, {2401,2,3,2}, {2706, 1,1,3}, {2201,3,4,4}, {2052,1,7,5}, {3401,2,5,6}, {2602,3,8,7}, {2706,1,6,8}, {2104,2,9,9}}

### Output
The algorithms produced the following output:

 - **FCFS**
	 - Order: 2302, 2401, 2706, 2201, 2052, 3401, 2602, 2052, 2104
	 - Average waiting time: 8.44
	 - Average turn around time: 10.44

        ![FCFS Scheduling](https://i.imgur.com/s1joMvE.png)

        The FCFS algorithm has the highest waiting and turnaround time among the three algorithms used here. This is because it doesn't take into account the duration of the classes and schedules solely based upon the arrival time.

 - **SJF**
	 - Order: 2706, 2052, 2052, 2401, 3401, 2104, 2302, 2201, 2602
	 - Average waiting time: 6
	 - Average turn around time: 8

        ![SJF Scheduling](https://i.imgur.com/BLEIjjT.png)

        SJF algorithm provides the lowest waiting and turnaround time for the given inputs. This can be explained by the fact that this scheduling algorithm is based on duration of the classes.
	
 - **Priority**
	 - Order: 2104, 2602, 2052, 2052, 3401, 2201, 2401, 2302, 2706
	 - Average waiting time: 8
	 - Average turn around time: 10
     
        ![Priority Scheduling](https://i.imgur.com/IQUqzYr.png)

        The Priority scheduling algorithm has a slightly better waiting and turnaround time than FCFS, but nonetheless, it is still significantly worse than the SJF algorithm. Since, it is based on priority, it neglects other factors that are important for optimal scheduling of classes.

From the above, we can conclude that SJF algorithm provides the best scheduling solution for a class scheduling problem.