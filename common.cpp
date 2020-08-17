//Common functions

#include<iostream>
#include "header.h"

using namespace std;

// function to find the waiting time for all processes
void findWaitingTime(int processes[], int n, int bt[], int wt[])
{
    // waiting time for first process will be 0
    wt[0] = 0;
 
    // calculating waiting time
    for (int i = 1; i < n ; i++)
    {
        wt[i] =  bt[i-1] + wt[i-1];
    }
}
 
// function to calculate turn around time
void findTurnAroundTime( int processes[], int n, int bt[], int wt[], int tat[])
{
    // calculating turnaround time by adding
    // bt[i] + wt[i]
    for (int i = 0; i < n ; i++)
    {
        tat[i] = bt[i] + wt[i];
    }
}
 
// function to calculate average time
void findAverageTime( int processes[], int n, int bt[])
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
 
    // function to find waiting time of all processes
    findWaitingTime(processes, n, bt, wt);
 
    // function to find turn around time for all processes
    findTurnAroundTime(processes, n, bt, wt, tat);
 
    // display processes along with all details
    cout << "Processes  "<< " Burst time  "<< " Waiting time  " << " Turn around time\n";
 
    // calculate total waiting time and total turn around time
    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << "   " << processes[i] << "\t\t" << bt[i] <<"\t    "<< wt[i] <<"\t\t  " << tat[i] <<endl;
    }
 
    cout << "Average waiting time = "<< (float)total_wt / (float)n;
    cout << "\nAverage turn around time = "<< (float)total_tat / (float)n << endl;
}

void display(Process proc[], int n){
     int processes[n], bt[n];

    //get processes
    for(int i = 0; i<n; i++){
        processes[i] = proc[i].ccode;
        bt[i] = proc[i].duration;
    }
    
    //print order
    cout << "Order of process: ";
    for (int i = 0; i < n; i++)
        cout << proc[i].ccode << " ";

    cout << endl;
    
    //print average time
    findAverageTime(processes, n, bt);
}