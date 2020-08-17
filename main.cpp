#include<iostream>
#include "header.h"

using namespace std;

int main() {
    Process proc[] = {{2302,3,2,1}, {2401,2,3,2}, {2706, 1,1,3}, {2201,3,4,4}, {2052,1,7,5}, {3401,2,5,6}, {2602,3,8,7}, {2301,1,6,8}, {2104,2,9,9}};
    int n = 9;
    cout << "FCFS Scheduling:" << endl;
    findOrderFCFS(proc, n);
    cout << endl;
    cout << "SJF Scheduling:" << endl;
    findOrderSJF(proc, n);
    cout << endl;
    cout << "Priority Scheduling:" << endl;
    findOrderPRTY(proc, n);
    system("pause");
}