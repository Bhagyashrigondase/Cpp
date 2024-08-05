#include<iostream>
using namespace std;
int main()
{
    char ch;
    int n,i=1;
    cout<<"Enter the character=";
    cin>>ch;

    cout<<"\nEnter the integer=";
    cin>>n;
    while(i<=n)
    {
        ch=ch+1;
        if(ch=='z'||ch=='Z')
        {
          cout<<"n";
          i=n;
        }
        else
        cout<<" "<<ch;
        i++;

    }
}