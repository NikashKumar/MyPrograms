#include <iostream>
#include<curses.h>
#include<conio.h>
using namespace std;
int main()
{
	char key_press;
	int ascii_value;
	cout << "Enter the key or ESC to quit\n\n";
	while(1)
	{
		key_press=getch();
		ascii_value = key_press;
		if(ascii_value == 27) // if it is Esc key
		{
			break;
		}
		cout  << "Key pressed is \t " << key_press << " and its ascii value is " << ascii_value << "\t";
	}
 
        return 0;
}
