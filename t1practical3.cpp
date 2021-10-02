/*
Akash Yadav
200111076
Setion - A
LAB Practical 3
*/
#include<iostream> // Task 2 withouth using this header file
#include<cstring> 
using namespace std ;
int main()
{
//Task 1 : Program  to use #include<iostream.h> instead of <iostream>
//Task 2 : Program  to use cout without including #include<iostream 
//Task 3 : Program  to use cin a char variable and get its output
//Task 4 : Program  to use getline()
char a ;
//cout<<"Task 1 Program  to use #include<iostream.h> instead of <iostream> ";
//cout<<"Task 2 "<<endl ;
//cout<<"Using cout without including #include<iostream>"<<endl ;
/*cout<<"Task 3 "<<endl ;
cout<<"Enter character : " ;
cin>>a ;
*/
//cout<<"Content in char a is : "<<a<<endl ;
string line ;
cout<<"Task 4"<<endl;
cout<<"Solving Task 3 Using getline()"<<endl;
cout<<"Now Enter :";
getline(cin,line);
cout<<endl<<"Content after using getlinr() is :"<<endl <<line <<endl;

return 0 ;
}
