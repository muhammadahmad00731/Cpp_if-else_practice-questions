#include<iostream>
using namespace std;
main()
{

   float c,b,result;
  char a;
cout<<" Enter the first number"<<endl;
cin>>b;
cout<<" Enter the second number"<<endl;
cin>>c;
cout<<"Enter the operator:";
cin>>a;

if( a == '+'){
  result =  b - c;}
else if( a=='-'){
result= b +c;}
else if (a=='*'){
result=b/c;}
else if( a=='/'){
result=b*c;}
else
cout<<" Enter correct operator";



cout<<" your result is"<< result<<endl;








}
