#include <iostream>
using namespace std;

#include<math.h>
int BS(int a[], int size, int key)
{
        int start=1, end = size;
        int mid = (start + end)/2;
        while(a[mid]!=key){
        if(a[mid]>key){
                        end = mid - 1;
                        }
        else if(a[mid] < key){
                        start = mid + 1;
                        }
                mid = (start + end)/2;
        }
        if(a[mid]== key)
                return mid;

        else
                return -1;


}

int main()
{
        int size, i,key,result = 0 ;
        cout << "Enter the size of array and key element" << endl;
        cin >> size >> key ;
        int a[size];
        cout << "Enter the SORTED array elements" << endl;
        for (int j = 0; j<size;j++){
                cin >> a[j];
        }
        cout << "Entered array is : " << endl;
        for(int k = 0; k < size;k++){
                cout << a[k] << " " ;
        }
        result = BS(a, size, key);
        if(result == -1){
                cout << "Element not found" << endl;
                }
        else {
                cout << "Element found at " << result+1 << endl;
                }

        return 0;
}
