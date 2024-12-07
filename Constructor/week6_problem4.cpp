#include <bits/stdc++.h>
using namespace std;

class Book
{
    string Author,Title;
    float Price;
    int Amount;
    public:

    Book()
    {
        cout << "Default Condtructor\n";
    }

    Book(string auth,string title,float price,int amount)
    {
        cout << "Parameterized Constructor\n";
        Author=auth;
        Title=title;
        Price=price;
        Amount=amount;
    }

    void display()
    {
        cout << "\nAuthor: " << Author;
        cout << "\nTitle: " << Title;
        cout << "\nPrice: " << Price;
        cout << "\nAmount: " << Amount;
        cout << "\n\n";
    }

    void search(string title,Book b[])
    {
        for(int i=0;i<3;i++)
        {
            if(title==b[i].Title)
            {
                cout << "Book found.\n";
                returnam();
                return;
            }
        }
        cout << "Book not found!\n";
    }

    void returnam()
    {
        cout << "Author: " << Author << endl;
        cout << "Price: " << Price << endl;
        checkam();

    }

    void checkam()
    {
        cout << "Enter amount of books required: ";
        float amount;
        cin >> amount;
        if(amount<=Amount)
        {
            cout << "\nCopies available\n";
            cout << "Total cost: " << amount*Price << endl;
        }
        else cout << "\nCopies unavailable\n";
    }


    ~Book()
    {
        cout << "Book deleted: " << Title << endl;
    } 
};

int main()
{
    Book b[3];

    for(int i=0;i<3;i++)
    {
        string auth,title;
        float price;
        int amount;
        cout << "Enter book details: \n";
        cout << "\nAuthor: ";
        cin >> auth;
        cout << "\nTitle: ";
        cin >> title;
        cout << "\nPrice: ";
        cin >> price;
        cout << "\nAmount: ";
        cin >> amount;
        b[i]=Book(auth,title,price,amount);
    }

    cout << "\n\n\n";

    for(int i=0;i<3;i++) b[i].display();

    cout << "\n\n\n";

    string t;
    cout << "\nEnter  the book you want to search: ";
    cin >> t;
    b[0].search(t,b);
}