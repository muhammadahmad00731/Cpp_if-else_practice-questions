#include<iostream>
using namespace std;
int main()
{
	string my_password, user_enter;
	my_password = "Pass@123!";
	cout<<"Enter the passsword: ";
	cin>>user_enter;
	if(user_enter == my_password)	{
		cout<<"Wow ! You have cracked the code!";
	}
	else{
		cout<<"It is not that simple, Try Again";
	}
}
