#include <bits/stdc++.h>
using namespace std;

struct Process {
    int id;
    int burstTime;
    int waitingTime;
};

void calculateWaitingTime(vector<Process>& processes) {
    processes[0].waitingTime = 0;

    for (size_t i = 1; i < processes.size(); i++) {
        processes[i].waitingTime = processes[i - 1].waitingTime + processes[i - 1].burstTime;
    }
}

bool compare(Process a, Process b) {
    return a.burstTime < b.burstTime;
}

void sjfScheduling(vector<Process>& processes) {
    sort(processes.begin(), processes.end(), compare);
    calculateWaitingTime(processes);

    cout << "Process ID\tBurst Time\tWaiting Time\n";
    for (int i = 0; i < processes.size(); i++) {
        cout << processes[i].id << "\t\t" << processes[i].burstTime << "\t\t" << processes[i].waitingTime << "\n";
    }

    // Improved Gantt chart representation
    cout << "\nGantt Chart:\n";
    cout << "----------------------------------\n";
    for (const auto& process : processes) {
        cout << "|  P" << process.id << "   ";
    }
    cout << "|\n";
    cout << "----------------------------------\n";

    int currentTime = 0;
    cout << currentTime;
    for (const auto& process : processes) {
        currentTime += process.burstTime;
        cout << "\t" << currentTime;
    }
    cout << "\n";
}

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);

    for (int i = 0; i < n; i++) {
        processes[i].id = i + 1;
        cout << "Enter burst time for process " << i + 1 << ": ";
        cin >> processes[i].burstTime;
    }

    sjfScheduling(processes);
    return 0;
}
