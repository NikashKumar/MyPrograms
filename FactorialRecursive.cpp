#include <iostream>
using namespace std;
int FACT(int num)
{
	if(num ==1 )
	//	cout << "Fact is = " << num << endl;
		return 1;
	else 
		return num = num * FACT(num - 1);
} 
	
int main()
{
	int num ;
	cout << "enter the number" << endl ;
	cin >> num ;
	int res = FACT(num);
	cout << "Fact is = " << res << endl;
        return 0;
}
