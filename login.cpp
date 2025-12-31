#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream> // access all the file operations

using namespace std;

void mainmenu();

int choice;
bool cinfall;
int confirmation;
string username, password, password2;

void writetofile(string uername)
{
    ofstream writefile;
    string file = username+".txt";
    writefile.open(file.c_str());
    writefile << password;
    writefile.close();
    mainmenu();
}

void login()
{
    cout<< "Your are being logged in!";
}

void registerpassword()
{
    cout << "Please Enter Your Password : ";
    cin >> password;
    cout << "Please Re-Enter Your Password : ";
    cin >> password2;
    if(password == password2)
    {
        cin.clear();
        cin.ignore(10000, '\n');
        writetofile(username);
        exit(1);
    }
    else;{
        cout<< "Sorry Invalid Password" << endl;
        registerpassword();
    }
}
void registerme()
{
    cout << "Please Enter Your Username : " << endl;
    getline(cin, username);
    cout << "\nUsername - \""<< username <<"\"\n Confirm? \n\n[1] Yes\n [2] No" << endl;
    cin >> confirmation;
    if(confirmation == 1)
    {
        registerpassword();
    }
    else; {
        cout << "Sorry Invalid Input, Please Try Again " << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        registerme();
    }
}

void exit(){
    exit(0);
}

void mainmenu()
{
    cout << "Hello, Would You Like To login or Register\n [1] Login\n [2] Register\n [3] Exit" << endl;
    cin >> choice;
    do{
        cinfall = cin.fail();
        cin.clear();
        cin.ignore(10000, '\n');

    }
    while (cinfall == true);
    {
        switch(choice)
        {
            case 1:
                login();
                break;
            case 2:
                registerme();
                break;
            case 3:
                exit();

        }
    }
}
main()
{
    cout<<"\n";
    cout<<"WELCOME --- TO --- LOGIN --- REGISTRATION --- PAGE" << endl;
    cout<<"\n";
    mainmenu();

    return 0;
}