#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>

#include <windows.h>

#include "Enter_details.h"

using namespace std;
int main()
{
    char choice;
    int select;
    string name;
    Enter_details enter_details;
    Enter_details read_details;
    Enter_details modify_details;
    Enter_details deletes_details;
    system("CLS");
    do
    {

        cout << "Please select the options \n"
             << "1. Enter details \n"
             << "2. Read details \n"
             << "3. Modify details \n"
             << "4. Delete details " << endl;
        cin >> select;

        switch (select)
        {
        case 1:
            enter_details.getuser_input(enter_details);
            break;

        case 2:
            system("CLS");
            cin.ignore(1000, '\n');
            cout << "Please Enter the Dept" << endl;
            getline(cin, read_details.deptname);
            cout << "Please insert the name" << endl;
            getline(cin, read_details.name);
            read_details.readuser_details(read_details);
            break;

        case 3:
            system("CLS");
            cin.ignore(1000, '\n');
            cout << "Please Enter the Dept" << endl;
            getline(cin, modify_details.deptname);
            cout << "Please insert the name" << endl;
            getline(cin, modify_details.name);
            modify_details.modify_details(modify_details);
            break;

        case 4:
            system("CLS");
            cin.ignore(1000, '\n');
            cout << "Please Enter the Dept" << endl;
            getline(cin, deletes_details.deptname);
            cout << "Please insert the name" << endl;
            getline(cin, deletes_details.name);
            deletes_details.delete_details(deletes_details);
            break;

        default:
            break;
        }
        system("CLS");
        cout << "Press 'Y' to re-enter \t" << " Press N to Terminate "<< endl;
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 1;
}
