#include<iostream>
using namespace std;
class student
{
    public:
    void detail(string name,string branch)
    {
        cout<<"Name:";
    }
};
int main()      
{
    student s1;
    cout<<"Enter your name:";
    string name;
    cin>> name;
    cout<<"Enter your branch:";
    string branch;
    cin>>branch;
    return 0;
}