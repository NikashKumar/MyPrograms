#include<iostream>
using namespace std;
void binary(int num)
{
	int rem ;
//	cout << num ;
	if(num <= 1)
	{
		cout << num ;
		return;
	}
	rem = num % 2;
	binary(num / 2 );
	cout << rem ;
}
int main()
{
	int dec, bin;
	cout << "Enter the dec number" << endl;
	cin >> dec ;
//	cout << "The Binary from of the number is" << binary(dec) << endl;
	cout << "The binary form of " << dec << " is ";
        binary(dec);
	cout << endl;
	return 0 ;
}
