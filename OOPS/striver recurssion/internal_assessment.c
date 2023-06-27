#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}
void roundRobin(int processes[], int n, int burstTime[], int quantum) {
    int remainingTime[n];
    for (int i = 0; i < n; i++) {
        remainingTime[i] = burstTime[i];
    }

    int t = 0; 
    while (1) {
        int done = 1; 

        for (int i = 0; i < n; i++) {
            if (remainingTime[i] > 0) {
                done = 0;

            
                int executeTime = min(quantum, remainingTime[i]);
                remainingTime[i] -= executeTime;
                t += executeTime;

                printf("Process %d executes for %d units. Remaining Burst Time: %d\n", processes[i], executeTime, remainingTime[i]);

                if (remainingTime[i] == 0) {
                    printf("Process %d completed.\n", processes[i]);
                }
            }
        }

        if (done == 1) 
            break;
    }
}

int main() {
    int n; 
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int processes[n]; 
    int burstTime[n]; 

    printf("Enter the process IDs and burst times:\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &processes[i]);
        printf("Burst Time: ");
        scanf("%d", &burstTime[i]);
    }

    int quantum; 
    printf("Enter the time quantum: ");
    scanf("%d", &quantum);

    roundRobin(processes, n, burstTime, quantum);

    return 0;
}
