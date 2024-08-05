//Create a class Book with data members as bname,id,author,price. Write getters and setters for all the 
//data members. Also add the display function. Create Default and Parameterized constructors. Create 
//the object of this class in main method and invoke all the methods in that class. 
#include<iostream>
using namespace std;

class book
{
    private:
    int id,price;
    string bname;
    string author;
    public:
    book()
    {
        id=0;
        price=0;
        bname="abc";
        author="xyz";
    }
    book(int id,int price,string bname,string author)
    {
        this->id=id;
        this->price=price;
        this->bname=bname;
        this->author=author;
    }
    int getid()
    {
        return this->id;
    }
    int getprice()
    {
        return this->price;
    }
    string getbname()
    {
        return this->bname;
    }
    string getauthor()
    {
        return this->author;
    }

    void setid(int id)
    {
        this->id=id;
    }
     void setprice(int price)
    {
        this->price=price;
    }
     void setname(string bname)
    {
        this->bname=bname;
    }
     void setauthor(string author)
    {
        this->author=author;
    }

    void display()
    {
        cout<<"Book id="<<id<<" Book price="<<price<<" Book name="<<bname<<" Book author="<<author<<endl;
    }
};

int main()
{
    book b1;
    b1.display();
    cout<<"----------------------------------"<<endl;

    book b2(101,500,"Physics","RD");
    b2.display();
    cout<<"----------------------------------"<<endl;

    book b3(102,400,"Chemistry","BG");
    b3.display();
    cout<<"----------------------------------"<<endl;
    b3.setid(201);
    b3.setprice(700);
    b3.setname("Biology");
    b3.setauthor("SD");
    b3.display();
    cout<<"----------------------------------"<<endl;
    cout<<"Book details="<<b2.getid()<<" "<<b2.getprice()<<" "<<b2.getbname()<<" "<<b2.getauthor()<<endl;
    return 0;

}