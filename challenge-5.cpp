#include<iostream>
using namespace std;
int main(){
	string name1, name2, name3;
	int age1, age2, age3;
	cout<<"Enter the name of 1st brother: ";
	cin>>name1;
	cout<<"\nEnter the name of 2nd brother: ";
	cin>>name2;
	cout<<"\nEnter the name of 3rd brother: ";
	cin>>name3;
	cout<<"\nEnter the age of 1st brother: ";
	cin>>age1;
	cout<<"\nEnter the age of 2nd brother: ";
	cin>>age2;
	cout<<"\nEnter the age of 3rd brother: ";
	cin>>age3;
	if(age1 < age2 && age1 < age3)
	{
		cout<<"\nThe name of younger brother is:"<<name1;
	}
	else if(age2<age1 && age2<3){
		cout<<"\nThe name of younger brother is:"<<name2;
	}
	else{
		cout<<"\nThe name of younger brother is:"<<name3;
	}
}
