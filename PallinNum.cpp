#include<iostream>
using namespace std;
int main()
{
	int num,rev=0,digit,num1;
	cout << "Enter the number" << endl ;
	cin >> num;
	num1 = num;
	while(num !=0)
	{
		digit = num % 10;
		rev = (rev *10) + digit;
		num = num / 10;
	}
	cout << "Rev is " << rev << endl;
	if (num1 == rev)
	{
		cout << "Palindrome" << endl;
	}
	else
	{
		cout << "not a Palindrome" << endl;
	}
	return 0;
}
