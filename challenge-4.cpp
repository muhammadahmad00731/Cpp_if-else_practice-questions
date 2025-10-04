#include<iostream>
using namespace std;
int main(){
	char ch;
	int ascii = ch;
	cout<<"Enter any character: ";
	cin>>ch;
	if (ch>='0' && ch <= '9')
	{
		cout<<"you entered a number";
	}

	else if((ch>='A'&&ch<='Z')||(ch>='a'&& ch<='z'))
	{
		
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ||ch == 'u' ||ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U')
	{
	
		cout<<"\nYou entered a vowel word.";
		
	}
	else {
		cout<<"you entered a consonent";
	}
	}

}
