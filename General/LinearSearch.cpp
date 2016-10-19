#include <iostream>
using namespace std;
int LS(int a[], int size, int key)
{
	for(int i = 0;i<size;i++){
	if(a[i] == key){
		return i;
	}
	}
return -1;
}
int main()
{
	int size, i,key,result = 0 ;
	cout << "Enter the size of array and key element" << endl;
	cin >> size >> key ; 
	int a[size];
	cout << "Enter the array elements" << endl;
	for (int j = 0; j<size;j++){
		cin >> a[j];
	}	
	cout << "Entered array is : " << endl;
	for(int k = 0; k < size;k++){
		cout << a[k] << " " ;
	}
	result = LS(a, size, key);
	if(result == -1){
		cout << "Element not found" << endl;
		}
	else {
		cout << "Element found at " << result+1 << endl;
		}
        return 0;
}
