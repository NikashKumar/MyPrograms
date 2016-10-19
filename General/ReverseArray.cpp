#include <iostream>
using namespace std;
void ReverseArr(int array[],int size)
{
	int temp ;
	size--; 
	for(int i = 0 ; i <=size ; size--,i++)
	{
		temp = array[i];
		array[i] =  array[size ];
		array[size] = temp ;	
	}
	temp = 0;
		
}
int main()
{
	cout<<"Enter The Size Of Array:   ";
    int size;
    cin>>size;
    int array[size], key,i;

    // Taking Input In Array
    for(int j=0;j<size;j++){
    cout<<"Enter "<<j<<" Element : ";
    cin>>array[j];
    }
    //Your Entered Array Is
    for(int a=0;a<size;a++){
       cout<<"array[ "<<a<<" ]  =  ";
       cout<<array[a]<<endl;
    }
	cout << "The reverse array is : \n" ;
	ReverseArr(array, size);
	for(int a=0;a<size;a++){
       cout<<"array[ "<<a<<" ]  =  ";
       cout<<array[a]<<endl;
    }
        return 0;
}
