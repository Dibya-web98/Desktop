

//  #include<iostream>
// using namespace std;
//  class student
//  {
//    public:
//     char name [5];
//     int age;
//     void getData ();
//     void display();
//  };
//  void student :: getData ()
//  {
//    cout<<"Enter name:";
//    cin>>name;
//    cout<<"Enter age";
//    cin>>age;
//  }
//  void student :: display ()
// {
// cout<<name;
// cout<<age;}
// int main()
// {
//    student Math;
//    Math.getData ();
//    Math.display();
//    return 0;
// }
// #include<iostream>
// using namespace std;
// void addition(){
//   int a, b,sum;
//   cout<<"enter two numner for addition=";
//   cin>>a>>b;
//   sum=a+b;
//   cout<<"Addition="<<sum;
// }
// int main(){
//   addition();
//   return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//   int n;

//   cout<<"Enter num:";
//   cin>>n;
//   int col;
//   int row=1;
//   while(row<=n){
//     int(col<=row);
//       cout<<"*";
//       col=col+1;
    
//     cout<<endl;
//     row=row++;
//   }
//   return 0;
// }
#include<iostream>
using namespace std;
// class personal {
//   public:
//   void student (string name ){
//     cout<<"name:"<<name<<endl;
//   }
//   void student(string branch){
//     cout<<"branch:"<<branch<<endl;
//   }
// };
// int main(){
//   personal obj;
//   obj .student("dibya");
//   obj .studentbranch("cse");
class Animal{
  public:
  int age;
  int weight;
  public:
  void speak(){
    cout<<"speaking"<<endl;
  }
};
class Dog : public Animal{

};
class germanshepherd:public Dog{
public:
germanshepherd(){
cout<<"this is car";
}
};
int main(){
  germanshepherd g;

  return 0;
}