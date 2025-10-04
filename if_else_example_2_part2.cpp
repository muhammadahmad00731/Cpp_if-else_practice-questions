#include<iostream>
using namespace std;
int main(){
char going;
cout<<"Are you friends going? (Press Y for yes N for no): ";
cin>>going;
if(going == 'y'){
	cout<<"You are also going!";
}
else{
	cout<<"You are not going!";
}
}
