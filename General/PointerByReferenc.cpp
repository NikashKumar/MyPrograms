#include <iostream>
using namespace std;
void PassByReference(int *iptr)
{
	*iptr = *iptr * *iptr;

}
int main()
{
	int num;
	cout << "Enter num to square \t \n";
	cin>>num;
	PassByReference(&num);
	cout<<"\t\tResult: "<<num<<endl;
        return 0;
}
