#include<iostream>
#include<algorithm>
#include "header.h"

using namespace std;

bool comparePr(Process a, Process b){
    if(a.priority != b.priority)
        return a.priority > b.priority;
    else
        return a.arrival_time < b.arrival_time;
}

void findOrderPRTY(Process proc[], int n){
    //sort according to priority in descending order (higher number means greater priority)
    sort(proc, proc+n, comparePr);

    //display output
    display(proc, n);
}