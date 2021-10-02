/*
Akash Yadav
200111076
Setion - A
LAB Practical 4
*/
#include<iostream>  
using namespace std ;
namespace first 
{
 int add(int a , int b)
 {
  return a+b ;
 }
}
namespace second
{
 float add(float a , float b)
 {
  return a+b ;
 }
}
//using namespace first ;  //using both namespaces
//using namespace second ; //using both namespaces
int main()
{
//Task 1 : Program  to use namespaces  using Scope Resolution Operator
//Task 2 : Program  to use namespace by using 'using namespace'  
//Task 3 : Program  to use both namespace and see how compiler react to it 
//Task 4 : Program  to use mixed values 
/*
cout<<"Task 1 "<<endl ;
cout<<second::add(10,20) <<endl;
cout<<second::add(10.67,20)<<endl ;
cout<<"Task 2 "<<endl ;
cout<<add(10,20) <<endl;
cout<<add(10.67,20)<<endl;
cout<<"Task 3 "<<endl ;
cout<<add(10,20) <<endl;
cout<<add(10.67,20)<<endl;
*/
cout<<"Task 4 "<<endl ;
cout<<"Using int , int  in first namespace   :"<<second::add(10,20) <<endl;
cout<<"Using int , float in second namespace :"<<second::add(10.67,20)<<endl ;
cout<<"Using int , int  in second namespace  :"<<second::add(10,20) <<endl;
cout<<"Using int , float in second namespace :"<<second::add(10.67,20)<<endl ;
cout<<"Using int , float in first namespace  :"<<first::add(20,50.87)<<endl ;
cout<<"Using float, float in first namespace :"<<first::add(40.77,70.65)<<endl ;
return 0 ;
}
