#include<iostream>
using namespace std;
int main()
{
	int count =0, b4Num , num ;
	cout << "Enter the number " ;
	cin >> num ;
	for (int i = 0;i<num ;i++)
	{
		if(num % i ==0)
		{
			count++;
		}
	}
	if(count == 0 )
	{
		cout << 
