#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    cout<<"printing the array"<<endl;

for(int i=0; i<size; i++){
    cout << arr[i] <<" ";
}
cout<< "printing done" << endl;
}
 int main(){
    int number [15];
    cout <<"value at 14 index"<< number[14] <<endl;
    return 0;
 }