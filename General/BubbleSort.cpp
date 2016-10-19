#include <iostream>
using namespace std;
void BS(int a[],int size)
{
	int i, j , temp = 0;
	for(i = 0; i < size; i++){
		for (j=0;j<size -1;j++){
			if(a[j] > a[j+1])
				{
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;		
				}
		}
	}
}
		 		
int main()
{
	int n ;
	cout << "Enter the size of the array";
	cin >> n ;
	int arr[n];
	cout << "Input array elements \n";
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	BS(arr, n);
	cout << "Sorted Array : " << endl;
	for (int i = 0; i < n; ++i){
	
    			cout << arr[i] << " ";
		}
        return 0;
}
