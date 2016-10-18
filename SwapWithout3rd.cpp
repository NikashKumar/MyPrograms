#include<iostream>
using namespace std;

int main()
{
	int a = 10 , b= 20 ;
	cout << " values of a and b before swap" << a << " and  " << b << endl;
	a = a + b ;
	b = a - b ;
	a = a - b ;
	cout << " values of a and b AFTER swap" << a << " and  " << b << endl;
	return 0;
}
