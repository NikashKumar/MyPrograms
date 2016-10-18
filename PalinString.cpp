#include <iostream>
using namespace std;
int main()
{
	char str[20];
	cout << "enter string" << endl;
	cin >> str;
	int flag = 0;
	int len = strlen(str);
	cout << "length of the string is " << len << endl;
	for(int i = 0; i < len; i++)
	{
		if(str[i] != str[len-1-i])
		{
			flag = 1;
			break;
		}
	}
	if(flag)
	{
		cout << "NOt a palindrome" << endl;
	}
	else
	{
		cout << " a palindrome" << endl;
	}


        return 0;
}
