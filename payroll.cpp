#include<iostream>
using namespace std;

class employee
{
    protected:
    int empid;
    string name;
    double salary;
    public:
    employee(){
        empid=0;
        name="xyz";
        salary=0;

    }
    employee(int empid,string name,double salary)
    {
       this->empid=empid;
       this->name=name;
       this->salary=salary;

    }
    virtual void cal_salary()=0;
     virtual void display()=0;
     
};
class hourlyemployee:public employee{
    private:
    int hours;
    int hourrate;
    public:
    hourlyemployee()
    {
        hours=0;
        hourrate=0;
    }
    hourlyemployee(int empid,string name,int hours,int hourrate):employee(empid,name,salary)
    {
        this->hours=hours;
        this->hourrate=hourrate;
    }

    void cal_salary()
    {
        salary=hours*hourrate;
    }
    void display()
    {
        cout<<"Empid="<<empid<<"\nName="<<name<<"\nHours worked="<<hours<<"\nHour rate="<<hourrate<<"\n Salary="<<salary<<endl;
    }
};

class salariedemployee:public employee
{
    private:
    double monthlySalary;
    public:
    salariedemployee()
    {
        monthlySalary=0;
    }
    salariedemployee(int empid,string name,double monthlySalary):employee(empid,name,salary)
    {
        this->monthlySalary=monthlySalary;
    }
    void cal_salary()
    {
        salary=monthlySalary;
    }

    void display()
    {
        cout<<"Empid="<<empid<<"\nName="<<name<<"\nSalary="<<salary<<endl;
    }
};

int main()
{

    cout<<"\n------Hourly Employee------\n";
    hourlyemployee e2(101,"Vansh",10,500);
    e2.cal_salary();
    e2.display();

    hourlyemployee e1(100,"Shilpa",24,1000);
    e1.cal_salary();
    e1.display();


    cout<<"\n-------Salaried Employee------\n";
    salariedemployee e3(102,"Aardhya",40000);
    e3.cal_salary();
    e3.display();

    salariedemployee e4(103,"Bhagyashri",80000);
    e4.cal_salary();
    e4.display();

    employee* emp[4];
    emp[0]=&e1;
    emp[1]=&e2;
    emp[2]=&e3;
    emp[3]=&e4;
     cout<<"------EMPLOYEE COLLECTION------"<<endl;
    for(int i=0;i<4;i++)
    {
        emp[i]->cal_salary();
        emp[i]->display();
        cout<<"\n-------------------"<<endl;
    }
}
