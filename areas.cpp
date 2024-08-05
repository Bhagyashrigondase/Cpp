#include<iostream>
using namespace std;
int main()
{
    int ch;
    double r,l,b,h,area;
    cout<<"1.Area of circle 2.Area of rectangle 3.Area of triangle"<<endl;
    do{
        cout<<"\nEnter your choice=";
        cin>>ch;
        switch (ch)
        {
        case 1:cout<<"---Circle---"<<endl;
        cout<<"\nEnter radius=";
        cin>>r;
        area=3.14*r*r;
        cout<<"\nArea of circle="<<area<<endl;;
        break;

        case 2:cout<<"---Rectangle---"<<endl;
        cout<<"\nEnter length and breadth=";
        cin>>l>>b;
        area=l*b;
        cout<<"\nArea of rectangle="<<area<<endl;
        break;

        case 3:cout<<"---Triangle---"<<endl;
        cout<<"\nEnter length and height=";
        cin>>l>>h;
        area=0.5*l*h;
        cout<<"Area of triangle="<<area;
        break;
        default:cout<<"INVALID CHOICE"<<endl;
            break;
        }
    }while(ch!=0);
}
