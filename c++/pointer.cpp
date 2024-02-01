#include<iostream>
using namespace std;

void checkPointer(int *p){
    cout<<"from func: "<<p<<endl;
    cout<<"from func: "<<*p<<endl;
    (*p)++;
    cout<<"from func: "<<*p<<endl;
   

}
int main(){
 int n = 10;
 cout<<"address of (n=10) &n : "<<&n<<endl;
 int *x = &n;
 cout<<"pointer x (*x=&n) : "<<x<<endl;
 cout<<"value of *x : "<<*x<<endl; 
 int temp = 10;
 checkPointer(&temp);
}