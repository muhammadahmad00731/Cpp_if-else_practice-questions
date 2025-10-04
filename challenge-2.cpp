#include<iostream>
using namespace std;
int main(){
	int salary = 10000;
	int laptop_price = 50000;
	int  required_month,half_a_month_salary;
	float sum, half_six_month_salary;
	half_a_month_salary=salary*0.5;
	half_six_month_salary = (salary * 6) * 0.5+salary;
//	sum = salary + half_six_month_salary;
	cout<<"Salary: "<<salary;
	cout<<"\nLaptop Price: "<<laptop_price;
	cout<<"\nAdvance  50% six month salry is: "<<half_six_month_salary;
	if((half_six_month_salary ) >=  laptop_price)
	{
	cout<<"\nYou are eligible to buy the laptop.";
	}
	else
	{
	required_month = (laptop_price- half_six_month_salary)/ half_a_month_salary;
	cout<<"\nYou need to have the salary of minimun "<<required_month <<" months";
	}
	
}
