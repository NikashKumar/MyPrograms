#include <iostream>
using namespace std;
int main()
{
	int num, result = 0, arms=0,check;
	cout << "Enter the number" << endl;
	cin >> num ;
	check = num ;
	for (int i = 1;num!=0;i++)
	{
		arms = num % 10;
		num = num / 10;
		arms = arms*arms*arms;
		result = result + arms;
	}
	cout << result << endl;
	if(result == check)
	{
		cout<<check<< " Is a armstrong" << endl;
	}
	else
	{
                cout<<check<< " Is NOT a armstrong" << endl;
        }	
        return 0;
}

