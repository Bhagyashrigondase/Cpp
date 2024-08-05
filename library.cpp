#include<iostream>
using namespace std;

class library{
    private:
    string title;
    string author;
    public:
    library()
    {
        title="aaa";
        author="xyz";
    }
    library(string title,string author)
    {
        this->title=title;
        this->author=author;
    }
    void display()
    {
        cout<<"Book Title="<<title<<"\nAuthor name="<<author<<endl;
    }
};

class book:public library
{
    private:
    string booktype;
    int pages;
    public:
    book(string title,string author,string booktype,int pages):library(title,author)
    {
        this->booktype=booktype;
        this->pages=pages;
    }

    void display()
    {
        library::display();
        cout<<"Book Type="<<booktype<<"\nNumber of pages="<<pages<<endl;
    }
};

class journal:public library{
    private:
    int volNo;
    string publication;

    public:
    journal(string title,string author,string publication,int volNo):library(title,author)
    {
        this->volNo=volNo;
      this->publication=publication;
    }
    void display()
    {
        library::display();
        cout<<"Publication="<<publication<<"\nVolume No="<<volNo;
    }
    
};

int main()
{
    book b1("Animal","Bhagyashri","Biology",350);
    b1.display();
    cout<<"\n--------------------------------------------\n";
    journal j1("Report","Shilpa","Atos publication",5);
    j1.display();

}
