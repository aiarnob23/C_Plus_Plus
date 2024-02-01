#include<iostream>
using namespace std;
int main(){

     int age1=32;
     int age2(33);
     int age3{34};

    // For fast declaration:
    //
    //int age1(32), age2(33), age3(34);
    //int age1{32}, age2{33}, age3{34};
    //

    cout<<age1<<" "<<age2<<" "<<age3<<endl;
}