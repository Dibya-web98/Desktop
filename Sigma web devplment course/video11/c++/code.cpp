//#include <Iostream>
//using namespace std;
//int main(){
    // cout <<"Dibya kumari" <<"dibu" <<endl;
    // cout <<"hello world\n form my name\n";
    // int age =25;
    // cout <<age<< endl;
    // char grade ='a';
    // cout <<grade << endl;
    // float PI =3.14f;
    // cout << PI << endl; 
    // bool isSafe =true;
    // cout <<isSafe << endl;// true->1 & false -> 0
    
// double price=100.99;
// int newprice=(int)price;
// cout<<newprice<<endl;

// int age;
// cout<<"enter the age:";
// cin>>age;

// cout <<"you age is:"<< age << endl;

// int a=10, b=5;
// cout << "sum="<<(a+b)<<endl;
// cout << "difference="<<(a-b)<<endl;
// cout << "product"<<(a*b)<<endl;
// cout << "division="<<(a/b)<<endl;
// cout << "modulo="<<(a%b)<<endl;

// int a,b;
// cout << "enter a";
// cin>> a;

// cout << "enter b";
// cin>>b;

// int sum = a+b;
// cout << "sum=" << sum << endl;

// 
// int age;
// cout <<"enter age:";
// cin >> age;

// if (age >=18){
//     cout <<"you can vote\n";
// } else{
//     cout <<"you can not vote\n";
// }
// int marks;
// cout<< "enter marks:";
// cin >> marks;

// if(marks>=90){
//     cout<<"A\n";
// }else if (marks>=80 && marks < 90){
//     cout << "B\n";
// }else{
//     cout << "c\n";
// }
// char ch;
// cout <<"enter char:";
// cin>> ch;

// // if(ch>='a' && ch <='z'){
// //     cout << "lowercase\n";
// // } else {
// //     cout <<"upercase\n";
// // }

// if(ch>=65 && ch <=90){
//     cout << "uprcase\n";
// } else {
//     cout <<"lowercase\n";
// }


// int n=-45;

// cout <<(n>=0 ? "positive" : "negative") << endl;

// int count =1;

//   while (count <=5){
//       cout << count<< " ";
//        count++;
// }
// cout << endl;

// int n=100;
// int count =1;
// while(count<=n){
//     cout << count << " " ;
//     count++;
// }
// cout << endl;

// int n =10;

// for(int i=1; i<=n; i++){
//     cout << i << " ";
// }
// cout << endl;
// int n=5;
// int sum=0;

//   for (int i=1; i<=n; i++){
//       sum += i;
       
// }
// cout <<  "sum=" << sum<< endl;
//     return 0;
// }


//int n=18;
//int div=0;
 

//return 0;
//}
// #include<iostream>
// using namespace std;
//  class student
//  {
//     char name [20];
//     int age;
//     void getdata ();
//     void display();
//  };
//  void student :: getdata ()
//  {
//    cout<<"Enter name:";
//    cin>>name;
//    cout<<"Enter age";
//    cin>>age;
//  }
//  void student :: display ()
// {
// cout<<name;
// cout<<age;
// }
// int main(){
//     student s;
    
//     return 0;
// }
#include<iostream>
using namespace std;
// class Employee
// {
// private:
//   int a,b,c;
// public:
//   int d,e;
// void setData(int a1, int b1, int c1);
// void getData(){
//   cout<<"The value of a is "<<a<<endl;
//   cout<<"The value of b is "<<b<<endl;
//  cout<<"The value of c is "<<c<<endl;
//  cout<<"The value of d is "<<d<<endl;
// cout<<"The value of e is "<<e<<endl;
//    }
// };

// void Employee :: setData(int a1, int b1, int c1){
//   int a=a1;
//  int b=b1;
//   int c=c1;
// }
// int main(){
//   Employee Harry;
//   Harry.d=34;
//   Harry.e=89;
//   Harry.setData(1,2,4);
//   Harry.getData();
//   return 0;
// }
class student
 {
   public:
    char name [5];
    int age ;
    void getData ();
    void display();
 };
 void student :: getData ()
 {
   cout<<"Enter name:";
   cin>>name;
   cout<<"Enter age:";
   cin>>age;
 }
 void student :: display ()
{
cout<<name;
cout<<age;
}
int main()
{
   student s;
   s.getData ();
   s.display();
   return 0;
}

