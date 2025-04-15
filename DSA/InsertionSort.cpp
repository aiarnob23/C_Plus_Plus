#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n){
    for(int i=1; i<n; i++){
        int j=i-1;
        int temp = a[i];
        while(j>=0 && temp < a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;      
    }
     for(int i=0; i<n; i++){
            cout<<a[i]<<endl;
        }
}

int main(){
    int n=7;
    int a[7]={56,3,89,4,57,7,69};
    insertionSort(a,n);
}