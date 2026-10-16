#include <iostream>
#include <string>
using namespace std;

class LibraryItem
{
public:
    virtual void display() = 0;
};

class Book : public LibraryItem
{
public:
    string title, author;
    int pages;

    Book(string t = "", string a = "", int p = 0)
    {
        title = t;
        author = a;
        pages = p;
    }

    void display()
    {
        cout << "Book: " << title << ", Author: " << author
            << ", Pages: " << pages << endl;
    }
};

class Newspaper : public LibraryItem
{
public:
    string name, date, edition;

    Newspaper(string n = "", string d = "", string e = "")
    {
        name = n;
        date = d;
        edition = e;
    }

    void display()
    {
        cout << "Newspaper: " << name << ", Date: " << date
            << ", Edition: " << edition << endl;
    }
};

template <typename T>
int linearSearch(T arr[], int size, T key)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == key)
            return i;

    return -1;
}

template <typename T>
int binarySearch(T arr[], int size, T key)
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

class Library
{
public:
    Book books[10];
    Newspaper newspapers[10];
    int bookCount = 0, newspaperCount = 0;

    void addBook(Book b)
    {
        books[bookCount++] = b;
    }

    void addNewspaper(Newspaper n)
    {
        newspapers[newspaperCount++] = n;
    }

    void displayCollection()
    {
        for (int i = 0; i < bookCount; i++)
            books[i].display();

        for (int i = 0; i < newspaperCount; i++)
            newspapers[i].display();
    }

    void sortBooksByPages()
    {
        for (int i = 0; i < bookCount; i++)
            for (int j = i + 1; j < bookCount; j++)
                if (books[i].pages > books[j].pages)
                {
                    Book temp = books[i];
                    books[i] = books[j];
                    books[j] = temp;
                }
    }

    void sortNewspapersByEdition()
    {
        for (int i = 0; i < newspaperCount; i++)
            for (int j = i + 1; j < newspaperCount; j++)
                if (newspapers[i].edition > newspapers[j].edition)
                {
                    Newspaper temp = newspapers[i];
                    newspapers[i] = newspapers[j];
                    newspapers[j] = temp;
                }
    }

    Book* searchBookByTitle(string title)
    {
        string titles[10];

        for (int i = 0; i < bookCount; i++)
            titles[i] = books[i].title;

        int index = linearSearch(titles, bookCount, title);

        if (index != -1)
            return &books[index];

        return nullptr;
    }

    Newspaper* searchNewspaperByName(string name)
    {
        string names[10];
        int positions[10];

        for (int i = 0; i < newspaperCount; i++)
        {
            names[i] = newspapers[i].name;
            positions[i] = i;
        }

        for (int i = 0; i < newspaperCount; i++)
            for (int j = i + 1; j < newspaperCount; j++)
                if (names[i] > names[j])
                {
                    string temp = names[i];
                    names[i] = names[j];
                    names[j] = temp;

                    int p = positions[i];
                    positions[i] = positions[j];
                    positions[j] = p;
                }

        int index = binarySearch(names, newspaperCount, name);

        if (index != -1)
            return &newspapers[positions[index]];

        return nullptr;
    }
};

int main()
{
    Book book1("The Catcher in the Rye", "J.D. Salinger", 277);
    Book book2("To Kill a Mockingbird", "Harper Lee", 324);

    Newspaper newspaper1("Washington Post", "2024-10-13", "Morning Edition");
    Newspaper newspaper2("The Times", "2024-10-12", "Weekend Edition");

    Library library;

    library.addBook(book1);
    library.addBook(book2);
    library.addNewspaper(newspaper1);
    library.addNewspaper(newspaper2);

    cout << "Before Sorting:\n";
    library.displayCollection();

    library.sortBooksByPages();
    library.sortNewspapersByEdition();

    cout << "\nAfter Sorting:\n";
    library.displayCollection();

    Book* foundBook = library.searchBookByTitle("The Catcher in the Rye");

    if (foundBook)
    {
        cout << "\nFound Book:\n";
        foundBook->display();
    }
    else
        cout << "\nBook not found.\n";

    Newspaper* foundNewspaper = library.searchNewspaperByName("The Times");

    if (foundNewspaper)
    {
        cout << "\nFound Newspaper:\n";
        foundNewspaper->display();
    }
    else
        cout << "\nNewspaper not found.\n";

    return 0;
}