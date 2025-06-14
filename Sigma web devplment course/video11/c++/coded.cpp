#include<iostream>
using namespace std;
int main(){
    int n, i,count=0;
    cout<<"enter a number";
    cin>>n;
    for(int i=1; i<=n; i++){
        
        if(n%i==0){
count++;
        }
    }
    if(count==2){
        cout<<"prime";
    }
    else {
        cout <<"not prime";
    }
    // int sum =0;
    // for(int i=2; i<=n; i+=2){
    //     if(n%2==0){
    //         sum = sum + i;
    //     }
    // }
    // cout<<"sum of even numbers is " <<sum;
    return 0;
}
   