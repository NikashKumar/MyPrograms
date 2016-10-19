#include<iostream>
using namespace std;
int main()
{
	int num, sum = 0;
	cin>>num;
	cout << "number entered is" << num << endl;
	for (int j = 1; j<num; j++)
		{
			//rem = num % j;
			if((num % j) == 0)
			{
				sum = sum + j;
			}
			if(sum == num)
			{
				cout << "Perfect number is" << num;
				break;
			}
		}
	
}
