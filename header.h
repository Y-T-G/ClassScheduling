struct Process
{
   int ccode;     // course code
   int duration;      // class duration
   int priority;  //priority
   int arrival_time;   //prefered arrival time
};

void findOrderFCFS(Process[], int);
void findOrderSJF(Process[], int);
void findOrderPRTY(Process[], int);
void findAverageTime(int[], int, int[]);
void display(Process[], int);