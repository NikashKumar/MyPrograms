#include <iostream>
using namespace std;
int main()
{
	int num, reverse = 0;;
	cout << "Enter the number" << endl;
	cin >> num;
	for(int i = 0; num!=0;i++)
	{
		reverse = reverse * 10;
		reverse = reverse + num % 10;
		num = num / 10;
	}
	cout << "Reversed number is = " << reverse << endl; 
        return 0;
}

