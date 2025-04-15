#include<bits/stdc++.h>

using namespace std;

struct Process {
    int pid;        // Process ID
    int arrivalTime; // Arrival time
    int burstTime;   // Burst time
    int waitingTime; // Waiting time
    int turnAroundTime; // Turnaround time
};

void calculateTimes(vector<Process>& processes) {
    int n = processes.size();
    int currentTime = 0;
    
    for (int i = 0; i < n; i++) {
        if (currentTime < processes[i].arrivalTime) {
            currentTime = processes[i].arrivalTime;
        }

        processes[i].waitingTime = currentTime - processes[i].arrivalTime;
        processes[i].turnAroundTime = processes[i].waitingTime + processes[i].burstTime;

        currentTime += processes[i].burstTime;
    }
}

void displayProcesses(const vector<Process>& processes) {
    cout << setw(10) << "PID"
         << setw(15) << "Arrival Time"
         << setw(15) << "Burst Time"
         << setw(15) << "Waiting Time"
         << setw(20) << "Turnaround Time" << endl;

    for (const auto& process : processes) {
        cout << setw(10) << process.pid
             << setw(15) << process.arrivalTime
             << setw(15) << process.burstTime
             << setw(15) << process.waitingTime
             << setw(20) << process.turnAroundTime << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);

    for (int i = 0; i < n; i++) {
        processes[i].pid = i + 1;
        cout << "Enter arrival time and burst time for process " << processes[i].pid << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime;
    }

    // Sort processes by arrival time
    sort(processes.begin(), processes.end(), [](const Process& a, const Process& b) {
        return a.arrivalTime < b.arrivalTime;
    });

    calculateTimes(processes);
    displayProcesses(processes);

    return 0;
}
