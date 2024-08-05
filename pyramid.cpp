#include<iostream>
using namespace std;
int main()
{
    int row,col,space;
    for(row=1;row<4;row++)
    {
        //for space we have to write one more for loop
        for(space=1;space<=(4-row);space++)
        {
            cout<<" ";
        }
        for(col=1;col<=((2*row)-1);col++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}