//Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write 
//getters and setters for all the data members. Also add the display function. Create the object of this 
//class in main method and invoke all the methods in that class. 
#include<iostream>
using namespace std;

class point
{
    private:
    int x,y;
    public:
    point()
    {
        x=0;
        y=0;
    }
    point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }

    int getx()
    {
        return this->x=x;
    }

    int gety()
    {
        return this->y=y;
    }

    void setx(int x)
    {
        this->x=x;
    }

    void sety(int y)
    {
        this->y=y;
    }

    void display()
    {
        cout<<"Points created x="<<x<<" y="<<y<<endl;
    }

};

int main()
{
    point p1;
    p1.display();
    cout<<"---------------------------------------"<<endl;

    point p2(4,6);
    p2.display();
    cout<<"---------------------------------------"<<endl;

    point p3(8,9);
    p3.display();
    cout<<"After changing p3="<<endl;
    p3.setx(3);
    p3.sety(4);
    p3.display();
    cout<<"---------------------------------------"<<endl;

    cout<<"Get point p2 data  x="<<p2.getx()<<" y="<<p2.gety()<<endl;

    return 0;
}