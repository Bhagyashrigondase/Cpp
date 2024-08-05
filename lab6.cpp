#include<iostream>
using namespace std;

class employee
{
    private:
    int empid,deptno;
    string name;
    protected:
    double salary;
    public:
    employee()
    {
        empid=0;
        deptno=0;
        name="xyz";
        salary=0;
    }

    employee(int empid,int deptid,string name,double salary)
    {
        this->empid=empid;
        this->deptno=deptid;
        this->name=name;
        this->salary=salary;
    }

    void display()
    {
        cout<<"Empid="<<empid<<" Dept id="<<deptno<<" Name="<<name<<" Salary="<<salary<<endl;
    }

    virtual double computeNetsalary()
    {
       cout<<"Salary=";
       return salary;
    }

};

class manager:public employee
{
    private:
    double perfBonus;
    string deptname;

    public:
    manager(){
        perfBonus=0;
        deptname="abc";
    }
    manager(int empid,int deptid,string name,double salary,int perfBonus,string deptname):employee(empid,deptid,name,salary)
    {
        this->perfBonus=perfBonus;
        this->deptname=deptname;
    }
    void display()
    {
        employee::display();
        cout<<"perfBonus="<<perfBonus<<" Dept name="<<deptname;
    }
    double computNetsalary()
    {
        cout<<"Manager's salary=";
        return salary+perfBonus;
    }
};

class worker:public employee{
    private:
    int hourswork,hourRate;
    public:
    worker()
    {
       hourswork=hourRate=0;
    }
    worker(int empid,int deptid,string name,double salary,int hourswork,int hourrate):employee(empid,deptid,name,salary)
     {
        this->hourswork=hourswork;
        this->hourRate=hourRate;
     }
     double computeNetsalary()
     {
        cout<<"Salary=";
        return salary+(hourswork*hourRate);
     }
     void display()
     {
        employee::display();
        cout<<"Hours work="<<hourswork<<endl;
     }
     int gethrlyRate()
     {
        return hourRate;
     }
};
int main()
{
    employee* emp[4];
    manager m1(101,111,"Ram",50000,5000,"IT");
    manager m2(102,222,"Sita",60000,5000,"Sales");
    worker w1(103,333,"Laxman",80000,5,10000);
    worker w2(104,444,"Bharat",50000,10,2000);
    emp[0]=&m1;
    emp[1]=&m2;
    emp[2]=&w1;
    emp[3]=&w2;

    for(int i=0;i<4;i++)
    {
       emp[i]->display();
       emp[i]->computeNetsalary();
       cout<<"\n-------------\n"<<endl;
    }

    return 0;
}