#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int start,end,count = 0,found= 0;
	cout << "Enter the numbers" << endl;
	cin >> start >> end ;
	for(int i=start;i<=end;i++)
	{
		for (int j=2;j<=sqrt(i);j++)
		{
			if((i%j)==0)
			{
				count++;
			}
		}
			if(count ==0 && i!=1)
			{
				found++;
				cout << "The prime number is" << i <<endl;
				count = 0;
			}
			count = 0;
	
	}
	cout << "The number of prime number is" << found << endl;
	return 0;
}
