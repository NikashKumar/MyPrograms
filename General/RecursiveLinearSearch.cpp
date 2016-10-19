#include <iostream>
using namespace std;
int RLS(int a[],int size,int key){
		size = size - 1;
		if(size < 0)
			return -1;
		else if(a[size] == key)
			return size;
		else
		return	RLS(a, size, key);
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
        result = RLS(a, size, key);
        if(result == -1){
                cout << "Element not found" << endl;
                }
        else {
                cout << "Element found at " << result+1 << endl;
                }
        return 0;
}
