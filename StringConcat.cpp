#include <iostream>
using namespace std;
int main()
{
	int index = 0, index2 = 0;
	const int size  = 10;
	char fs[size], ss[size], cs[50]={'0'};
	cout << "Enter the first string\n";
	cin >> fs;
	cout << "Enter the second string\n";
        cin >> ss;
	while(fs[index] != '\0')
	{
		cs[index] = fs[index];
		index++;
	}
	
	while(ss[index2] != '\0')
        {
		index++;
                cs[index] = ss[index2];
                index2++;
        }
	
	cout<<"\n\n\nConcatenated String: ";
            for(int j=0;j<size+size;j++)
                cout<<cs[j];
         cout<<"\n\n\n";
        return 0;
}
