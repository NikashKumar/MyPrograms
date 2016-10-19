#include <iostream>
using namespace std;
int main()
{
	int one,two,three;
	cout << "Input the numbers" << endl;
	cin >> one >> two >> three;
	if(one > two && one > three)
	{
		cout << "First is the greatest = " << one <<endl ;
	}
	else if(two > one && two > three)
		{
			cout << "second is the greatest = " << two <<endl ;
		}
	else
	{
	cout << "Third is the greatest = " << three <<endl ;  
	}
      
return 0;
}
