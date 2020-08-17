#include<iostream>
#include<algorithm>
#include "header.h"

using namespace std;

bool compareBt(Process a, Process b){
    if(a.duration != b.duration)
        return a.duration < b.duration;
    else
        return a.arrival_time < b.arrival_time;
}

void findOrderSJF(Process proc[], int n){
    //sort burst times in  ascending
    sort(proc, proc+n, compareBt);
    
    //display output
    display(proc, n);
}