#include<iostream>
using namespace std;
int main()
{
	int num = 6, first = 0, second = 1, next;
	cout << "fibo series is " << first << " and  " << second << " ";
	for (int i = 0; i<num; i++)
	{
		next = first + second ;
		first = second ; 
		second = next;
		cout << next << " " ;
	}
		
}
