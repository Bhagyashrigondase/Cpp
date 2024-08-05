//Create a class ComplexNumber with data members real, imaginary. Create Default and 
//Parameterized constructors. Write getters and setters for all the data members. 
//Also add the display function.Create the object of this class in main method and invoke all 
//the methods in that class.
#include<iostream>
using namespace std;

class complex 
{
    private:
    int real;
    int img;

    public:
    complex()
    {
        real=0;
        img=0;
    }

    complex(int real,int img)
    {
        this->real=real;
        this->img=img;
    }
    int getreal()
    {
        return this->real;
    }
    int getimg()
    {
        return this->img;
    }

    void setreal(int real)
    {
        this->real=real;
    }

    void setimg(int img)
    {
        this->img=img;
    }

    void display()
    {
        cout<<"complex number ="<<real<<" + "<<img<<"i"<<endl;
    }

};

int main()
{
    complex c1;
    c1.display();
    cout<<"-----------------------------------"<<endl;

    complex c2(4,7);
    c2.display();
    cout<<"-----------------------------------"<<endl;
    c2.setreal(9);
    c2.setimg(2);
    c2.display();

    cout<<"-----------------------------------"<<endl;
    complex c3(5,6);
    cout<<"Get c3 complex number="<<c3.getreal()<<" + "<<c3.getimg()<<"i"<<endl;

    return 0;
}