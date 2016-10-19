#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
const int size=50;
// array with size of 50
int array[size];
// for random numbers
srand(time(0));
    for(int i=0;i<size;i++){
    // Initializing Array number is less than 100
    array[i]=rand()%100;
    // Displaying array value
    cout<<array[i]<<endl;
    }
            // initializing max, min
                int max=array[0];
                int min=array[0];
/* scanning array to find
   minimum and maximum
   number  */
for(int i=0;i<size;i++){
    // finding minimum number in array
      if(min>array[i]){
         min=array[i];
      }
      //finding maximum number in array
      if(max<array[i]){
      max=array[i];
      }
}
       // displaying output
        cout<<"Maximum Number is :"<<max<<endl;
        cout<<"Minimum Number  is:"<<min<<endl;

return 0;
}
