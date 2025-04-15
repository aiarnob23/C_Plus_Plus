#include<iostream>
using namespace std;

int main(){
    char str[10];//array of characters
    cout<<"Enter your first name"<<endl;

    //stores char until recieving a space
    cin>>str;
    cout<<str<<endl;

    //changing letter by picking up an index
    str[0]='X';
    cout<<str<<endl;

    //then.....string approach will be like.....
    string ss;
    cin.ignore();//ignore the whitespace
    getline(cin,ss);//get the full line with spaces
    cout<<ss<<endl;
    ss[0]='X';
    cout<<ss<<endl;
}