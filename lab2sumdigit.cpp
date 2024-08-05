//Write a program to Accept a number and display its sum of digits.
//:ex 568    5+6+8
#include<iostream>
using namespace std;

int main()
{
     int n,sum=0,digit;
     cout<<"Enter the number=";
     cin>>n;
     while(n>0)
     {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
     }
     cout<<"Sum of number="<<sum;

     return 0;

}