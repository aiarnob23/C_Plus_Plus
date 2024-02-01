#include <iostream>
#include <cstring>
using namespace std;

// struct
struct employee
{
    char name[10];
    string div; // string allowed
    int age;
};

// union
union data
{
    int age;
    char s[10]; // string is not allowed
};

// enum
enum status
{
    married,
    unmarried,
    divorced
};

// variable declaration
employee e1;
data d1;
status s1;

// main function
int main()
{
    strcpy(e1.name, "aminul"); // string in charArray
    cout << e1.name << endl;
    e1.div = "barisal";
    cout << e1.div << endl;

    d1.age = 22;
    cout << d1.age << endl;
    strcpy(d1.s, "arnob");
    cout << d1.s << endl;

    s1 = married;
    cout << s1 << endl;
}
