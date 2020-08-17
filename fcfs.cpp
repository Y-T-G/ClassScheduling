/* Simple C++ program for implementation 
of FCFS scheduling */

#include<iostream>
#include<algorithm>
#include "header.h"

using namespace std;

bool compareAt(Process a, Process b){
    return a.arrival_time < b.arrival_time;
}

void findOrderFCFS(Process proc[], int n){
    //sort according to arrival time
    sort(proc, proc+n, compareAt);

    //display output
    display(proc, n);
}