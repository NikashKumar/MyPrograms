#include <iostream>
using namespace std;
int main()
{
	int hours, min,sec;
	cout << "Enter details" << endl;
	cin >> hours >> min >> sec ;
	if(hours > 24)
	{
		cout << "Invalid entry" << endl;
	}
	else
	{
	
		{
			cout << "24 hour format" << endl;
			cout << "Hours:Min:Sec=" << hours << " : "<< min << " : " << sec << endl;
		}
	if(hours > 12)
	{
		hours = hours-12;
		cout << "12 hour format" << endl;
                        cout << "Hours:Min:Sec=" << hours << " : "
<< min << " : " << sec << endl;
        }
	else
	{
		cout << "12 hour format" << endl;
                        cout << "Hours:Min:Sec=" << hours << " : "
<< min << " : " << sec << endl;
	}	
	}
        return 0;
}

		
