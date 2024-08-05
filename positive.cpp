#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter n=";
    cin>>n;
    while(n>0){
        sum=sum+n;
        cin>>n;    
    }
    cout<<"Total sum="<<sum;
    return 0;
}
