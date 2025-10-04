#include<iostream>
using namespace std;
int main(){
	int price;
	float discount , price1 ;
	cout<<"Enter the amount of product: ";n
	cin>> price;
	if(price <= 5000){
	discount = (price * 5) / 100;
	price1 = price - discount;
	cout<<"The amount of product after discount: "<<price1;	
	}
	else{
	discount = price * 0.1;
	price1 = price - discount;
	cout<<"The amount of product after discount: "<<price1;
	}
}
