#include<iostream>
using namespace std;
long ConvertBinary2Decimal(unsigned long num);
int main()

{
    unsigned long binary_num, decimal = 0;
    cout <<"\n\tEnter a binary number to get Equivalent Decimal : ";
    cin >> binary_num;
    decimal=ConvertBinary2Decimal(binary_num);
    cout <<"\n\tDecimal Value Of " <<binary_num << " is = " << decimal << endl;
    return 0;

}

long ConvertBinary2Decimal(unsigned long bin_num)
{
    unsigned long decimal = 0;
    int remainder=0, base = 1;


    while (bin_num > 0)

    {
        remainder = bin_num % 10;
        decimal = decimal + remainder * base;
        bin_num = bin_num / 10;
        base = base * 2;
    }

return decimal;

}
