#include <iostream>
using namespace std;

int addition      (int num1, int num2);
int subtraction   (int num1, int num2);
int division      (int num1, int num2);
int multiplication(int num1, int num2);



int main()
{
    char option;
    int num1, num2, result;

    cout<<"\n\t\t\tSimple calculator"<<endl;
    do
    {

    cout<<"Enter + for Addtion\nEnter - for Subtraction\n Enter / for Division\nEnter * for Multiplication\n Enter E to EXIT\n";
    cout<<"\n\t\t\tEnter Option: ";
    cin>>option;

     if(option!='e'&&option!='E')
     {
     cout<<"\n\t\t\tEnter First Number: ";
     cin>>num1;
     cout<<"\n\t\t\tEnter Second Number: ";
     cin>>num2;
     }

    if(option!='+'&&option!='-'&&option!='/'
      &&option!='*'&&option!='e'&&option!='E')
    {
       cout<<"\n\t\t\tSELECT the VALID OPTION\n";
    }
    else if(option=='+')
    {
       result=addition(num1,num2);
       cout<<"\n\t\t\t"<<num1<<" + "<<num2<<" = "<<result<<endl;
    }
    else if(option=='-')
    {
       result=subtraction(num1,num2);
       cout<<"\n\t\t\t"<<num1<<" - "<<num2<<" = "<<result<<endl;
    }
    else if(option=='/')
    {
       result=division(num1,num2);
       cout<<"\n\t\t\t"<<num1<<" / "<<num2<<" = "<<result<<endl;

    }
    else if(option=='*')
    {
          result=multiplication(num1,num2);
       cout<<"\n\t\t\t"<<num1<<" X "<<num2<<" = "<<result<<endl;

    }



    }while(option!='e'&&option!='E');


 cout<<"\n\t\t\tProgram EXIT Successfully.......\n\t\t\t";
    return 0;
}
int addition(int num1, int num2)
{
    return (num1+num2);
}

int subtraction(int num1, int num2)
{

    return (num1-num2);
}

int division(int num1, int num2)
{
      if(num2==0)
      {
          cout<<"\n\t\t\tDivide by ZERO not allowed :"<<endl;
          return 0;
      }
    return (num1/num2);
}

int multiplication(int num1, int num2)
{
    return (num1*num2);
}
