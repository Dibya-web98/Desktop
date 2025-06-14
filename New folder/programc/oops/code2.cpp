// #include<iostream>
// using namespace std;
// // int main(){
// //    int n=5;
// //    int sum=0;
// //    for(int i=1;i<=n;i++){
// //     sum=sum+i;
// //    }
// //    cout<<"sum = "<< sum;
// // class Arithmetic
// // {
// //     public :
// //     int a,b;
// //     Arithmetic (int x,int y){
// //         a=x;
// //         b=y;
// //     }
// //     void calculate (){
// //         cout << "Addition:" << a+b;
// //     }
// // };
// // int main (){
// //     Arithmetic obj(5,10);
// //     obj. calculate ();

// //     return 0;
// // }
// #include<iostream>
// using namespace std;

// // HOLD
// void printArray(int arr[], int size) {

//     cout<< " printing the array " << endl;
//     //print the array
//     for(int i =0; i<size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout<< " printing DONE " << endl;
// }

// int main() {

//     //declare
//     int number[15];

//     //accessing an array
//     cout << "Value at 14 index " << number[14] << endl;

//     //cout << "Value at 20 index " << number[20] << endl;

//     //initialising an array 
//     int second[3] = {5, 7, 11};

//     //accesing an element
//     cout << "Value at 2 index " << second[2] << endl;

//     int third[15] = {2,7};

//     int n = 15;
//     //printArray(third, 15);
//     int thirdSize = sizeof(third)/sizeof(int);
//     cout<<" Size of Third is " << thirdSize <<endl;

//     //initialising all locations with 0
//     int fourth[10] = {0};

//     n = 10;
//     //printArray(fourth, 10);

//     //initialising all locations with 1 [not possible with below line]
//     int fifth[10] = {1};

//     n = 10;
//     //printArray(fifth, 10);

//     int fifthSize = sizeof(fifth)/sizeof(int);
//     cout<<" Size of Fifth is " << fifthSize <<endl;
    

//     char ch[5] = {'a', 'b', 'c', 'r', 'p'}; 
//     cout << ch[3] << endl;

//     cout<< " printing the array " << endl;
//     //print the array
//     for(int i =0; i<5; i++) {
//         cout << ch[i] << " ";
//     }
//     cout<< " printing DONE " << endl;
//     double firstDouble[5];
//     float firstFloat[6];
//     bool firstBool[9];


//     cout << endl << " Everything is Fine " << endl << endl;

//     return 0;
// }
// #include<iostream>
// using namespace std;
// class arithmatic
// {
//     public:
//     int a,b;
//     arithmatic(int x,int y){
//         a=x;
//         b=y;
//     }
//     void calculate(){
//         cout<<"Sum of a and b is "<<a+b<<endl;
    
//     }
// };
// int main(){
//     arithmatic obj(5,6);
//     obj.calculate();
//     return 0;
// }
#include<iostream>
using namespace std;
class add
{
    private:
    int a, b;
    public:
    add(){
        cout <<"a"<<"b"<<endl;
        cin>> a >> b;
        cout<<"sum"<<a+b<<endl;
    }
};
int main()
{
    add obj;
    return 0;
}
