#include <iostream>
using namespace std;

int main()
{
	int H, W, p;
	cout << "Enter the Height and weight" << endl;
	cin >> H >> W;
	cout << "area = " << H*W << endl;
	p = 2*(H + W);
	cout << "Perimeter  = " << p << endl;
	
	
        return 0;
}
