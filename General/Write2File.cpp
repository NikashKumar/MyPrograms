#include <iostream>
#include <stdio.h>
//#include <conio.h>
#include <curses.h>
using namespace std;
int main()
{
	FILE *fp; 
	char ch;
	fp = fopen("Nikast.txt","w");
	cout << "Hello world\n";
	cout << "Hit ESC to exit \n";
	while(ch != 27)
	{
		ch = getch();
		if(ch == 27)
		{
			putc(' ',fp);
		}
		else 
		{
			putc(ch,fp);
		}
		
		if(ch ==13)
		{
			cout <<"\n";
			putc('\n',fp);
		}
	}
	
fclose(fp);			
return 0;
}
