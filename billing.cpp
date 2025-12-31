#include <iostream>

using namespace std;

int main()
{
    int returnTotalBill(void);
    int totalBill = returnTotalBill();
    cout << "Your Total Bill Amount is : " << totalBill << endl;
    cout << "Thank You For Ordering " << endl;
}

int returnTotalBill()
{
    char c;
    char item;
    char vegItem;
    char nonvegItem;
    int billAMount;
    char selectAgain;
    cout << "--------Welcome to Online Food Order---------" << endl;
    cout << "-------------- Please Follow Below Instruction -----------" << endl;
    cout << "1. Please Press 'S' to Start Your Order " << endl;
    cout << "2. You can Order both Veg and Non Veg Food " << endl;
    cout << "3. Press 'A' to Select Veg Items " << endl;
    cout << "4. Press 'B' to Select Non Veg Items " << endl;
    cout << "5. You Will get your Final Bill after Placing Your Order " << endl;

    start:
    cout << "Enter S to Start " << endl;
    cin >> c;

    if(c == 's' || c == 'S')
    {
        items:
        cout << "Please Select Your Choice " << endl;
        cout << "(a) Veg Items         (b) Non Veg Items" << endl;
        cin >> item;
        if(item == 'a' || item == 'A')
        {
            vegItemsList:
            cout << "Please Select as per Your Choice 1,2,3,4,5 " << endl;
            cout << "1. Panner : Rs-250 "<< endl;
            cout << "2. Burger : Rs-50 "<< endl;
            cout << "3. Veg Roll : Rs-40 "<< endl;
            cout << "4. Veg Chowmein : 50 "<< endl;
            cout << "5. Pizza : Rs-90 "<< endl;
            cin >> vegItem;

            if(vegItem == '1')
            {
                billAMount += 250;
            }
            else if(vegItem == '2')
            {
                billAMount += 50;
            }
            else if(vegItem == '3')
            {
                billAMount += 40;
            }
            else if(vegItem == '4')
            {
                billAMount += 50;
            }
            else if(vegItem == '5')
            {
                billAMount += 90;
            }
            else
            {
                cout << "You Have Entered Wrong Option  " << endl;
                goto vegItemsList;
            }
            cout << "Do You Want To Add More Items? Y or N" << endl;
            cin >> selectAgain;

            if(selectAgain == 'y' || selectAgain == 'Y')
            {
                goto items;
            }
            else
            {
                return billAMount;
            }
        }
        else if(item == 'b' || item == 'B')
        {
            nonvegItemsList:
            cout << "Please Select as per Your Choice 1,2,3,4,5 " << endl;
            cout << "1. Chicken : Rs-300 "<< endl;
            cout << "2. Burger : Rs-100 "<< endl;
            cout << "3. Chicken Roll : Rs-70 "<< endl;
            cout << "4. Chicken Chowmein : Rs-90 "<< endl;
            cout << "5. Chicken Pizza : Rs-115 "<< endl;
            cin >> nonvegItem;

            if(nonvegItem == '1')
            {
                billAMount += 300;
            }
            else if(nonvegItem == '2')
            {
                billAMount += 100;
            }
            else if(nonvegItem == '3')
            {
                billAMount += 70;
            }
            else if(nonvegItem == '4')
            {
                billAMount += 90;
            }
            else if(nonvegItem == '5')
            {
                billAMount += 115;
            }
            else
            {
                cout << "You Have Entered Wrong Option  " << endl;
                goto nonvegItemsList;
            }
            cout << "Do You Want To Add More Items? Y or N" << endl;
            cin >> selectAgain;

            if(selectAgain == 'y' || selectAgain == 'Y')
            {
                goto items;
            }
            else
            {
                return billAMount;
            }
        }
        else
        {
            cout << "You Have Entered Wrong Value" << endl;
            goto items;
        }

    }
    else
    {
        cout << "You Have Entered Wrong Character, Please Enter 'S' " << endl;
        goto start;
    }
        return billAMount;
}