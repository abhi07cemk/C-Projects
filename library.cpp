#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class Library
{
public:
    int id;
    char name[100];
    char author[100];
    char student[100];
    int price;
    int pages;
};

int main()
{
    Library lib[20];
    int input = 0;
    int count = 0;

    while (true)
    {
        cout << "\n1. Input Book Details";
        cout << "\n2. Display Book Details";
        cout << "\n3. Quit\n";
        cin >> input;

        if (input == 1)
        {
            if (count >= 20)
            {
                cout << "Library Full";
                continue;
            }

            cout << "Enter Book ID: ";
            cin >> lib[count].id;

            cin.ignore();
            cout << "Enter Book Name: ";
            cin.getline(lib[count].name, 100);

            cout << "Enter Author Name: ";
            cin.getline(lib[count].author, 100);

            cout << "Enter Student Name: ";
            cin.getline(lib[count].student, 100);

            cout << "Enter Book Price: ";
            cin >> lib[count].price;

            cout << "Enter Book Pages: ";
            cin >> lib[count].pages;

            count++;
        }
        else if (input == 2)
        {
            if (count == 0)
            {
                cout << "No Records Found";
                continue;
            }

            for (int i = 0; i < count; i++)
            {
                cout << "\nBook ID: " << lib[i].id;
                cout << "\nBook Name: " << lib[i].name;
                cout << "\nAuthor Name: " << lib[i].author;
                cout << "\nStudent Name: " << lib[i].student;
                cout << "\nPages: " << lib[i].pages;
                cout << "\nPrice: " << lib[i].price;
                cout << "\n----------------------";
            }
        }
        else if (input == 3)
        {
            exit(0);
        }
        else
        {
            cout << "Invalid Choice";
        }
    }
}