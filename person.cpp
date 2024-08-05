#include<iostream>
using namespace std;

class person
{
    private:
    int age;
    string name;
    public:
    person()
    {
        age=0;
        name="abc";
    }
    person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    void display()
    {
        cout<<"Name="<<name<<" Age="<<age;
    }
};

class student:public person
{
    int ID;
    float GPA;
    public:
    student()
    {
        ID=0;
        GPA=0;
    }
    student(string name,int age,int ID,float GPA):person(name,age)
    {
        this->ID=ID;
        this->GPA=GPA;
    }
    void display()
    {
        person::display();
        cout<<" ID="<<ID<<" GPA="<<GPA<<endl;
    }
};

int main()
{
    person p1("Ram",26);
    p1.display();
    cout<<"\n----------------------------\n";

    student s1("Sita",24,201,8.9);
    s1.display();
}