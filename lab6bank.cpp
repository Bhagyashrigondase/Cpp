#include<iostream>
using namespace std;

class bank{
    private:
    int accno;
    string custname;
    double balance;

    public:
    bank()
    {
        accno=00;
        custname="XYZ";
        balance=0;
    }
    bank(int accno,string custname,double balance)
    {
        this->accno=accno;
        this->custname=custname;
        this->balance=balance;
    }
    void withdraw(double amt)
    {
        balance=balance-amt;
    }
    void deposit(double amt)
    {
        if(balance>amt)
        {
           cout<<"After deposit,balance="<<balance+amt;
        }
        else{
            cout<<"Insufficiant balance"<<endl;
        } 
    }
    void display()
    {
        cout<<"Account no="<<accno<<"\nCustomer Name="<<custname<<"\nBalance="<<balance<<endl;
    }
};

int main()
{
    bank c1;
    c1.display();
    cout<<"\n---------------------------------------------------------------\n";

    bank c2(101,"Bhagyashri",50000);
    c2.deposit(60000);
    c2.display();
     cout<<"\n---------------------------------------------------------------\n";

    bank c3(201,"Shilpa",60000);
    c3.withdraw(10000);
    c3.display();

}