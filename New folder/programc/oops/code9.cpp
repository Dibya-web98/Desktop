#include<iostream>
using namespace std;
// int main(){
//     int fourth[5]={2,3,4,5,6};
//      int n=10;
     
//     cout<<"value at 2 index:"<<fourth[2] <<endl;
//     cout<<"printing the array:"<<endl;
    
// for(int i=0; i<n; i++)
// cout<<fourth[i]<<" "<<endl;
class vehical{
    public:
    vehical( ){
        cout<<"This is vehical"<<endl;
    }
};
class car: public vehical {
    public:
    car(){
        cout << "This vehical is car"<<endl;
    }
};
class bus: public vehical
{
    public:
    bus(){
        cout <<"This is vehical is a bus"<<endl;
    }
};
int main(){
    car obj1;
    vehical obj2;
    bus obj3;
    return 0;

}