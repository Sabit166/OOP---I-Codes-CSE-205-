#include <bits/stdc++.h>
using namespace std;

class Book
{
    string Title;
    string Author;
    int Year;
    public:
    void setTitle(string title)
    {
        Title=title;
    }
    void setAuthor(string author)
    {
        Author=author;
    }
    void setyear(int year)
    {
        Year=year;
    }
    
    string getTitle()
    {
        return Title;
    }
    string getAuthor()
    {
        return Author;
    }
    int getyear()
    {
        return Year;
    }
};

Book findBookByTitle(Book book[],string title)
{
    for(int i=0;i<5;i++)
    {
        if(book[i].getTitle()==title) return book[i];
    }
    Book notFound;
    notFound.setTitle("Not Found");
    return notFound;
}

int main()
{
    Book book[5];

    string title;
    string author;
    int year;

    for(int i=0;i<5;i++)
    {
        cout << "\nEnter title of book " << i+1 << ": ";
        cin >> title;
        book[i].setTitle(title);

        cout << "\nEnter author of book " << i+1 << ": ";
        cin >> author;
        book[i].setAuthor(author);

        cout << "\nEnter year of publication of book " << i+1 << ": ";
        cin >> year;
        book[i].setyear(year);
    }

    for(int i=0;i<5;i++)
    {
        cout << "Details of book " << i+1 << ":\n";
        cout << "Name of book: " << book[i].getTitle() << endl;
        cout << "Name of author: " << book[i].getAuthor() << endl;
        cout << "Year of Publication: " << book[i].getyear() << endl;
    }

    cout << "Enter the name of the book you want to search: ";
    string search_title;
    cin >> search_title;
    Book in=findBookByTitle(book,search_title);
    if(in.getTitle()=="Not Found") cout << "Book not found";
    else cout << "The given book is found ";

}