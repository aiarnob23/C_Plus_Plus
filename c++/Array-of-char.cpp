#include<iostream>
using namespace std;

int main(){
    char str[10];//array of characters
    cout<<"Enter your first name"<<endl;

    //stores char until recieve a space
    cin>>str;
    cout<<str<<endl;

    //changing letter by picking up an index
    str[0]='X';
    cout<<str;
}