#include <iostream>
#include <stdio.h>
#include <string>

#include"Enter_details.h"

using namespace std;
int main()
{
    char choice;
    int select;
    string name;
    Enter_details enter_details;
    Enter_details read_details;

    do
    {
        
    cout<< "Please select the options \n" << "1. Enter details \n" << "2. Read details \n" <<endl;
    cin>>select;

    switch (select)
    {
    case 1:
        enter_details.getuser_input(enter_details);
        break;
    
    case 2:
        cout<<"Please Enter the Dept" <<endl;
        cin>>read_details.deptname;
        cout<< "Please insert the name"<<endl;
        cin.ignore(1000, '\n');
        getline(cin,read_details.name);
        read_details.readuser_details(read_details);
        break;
    
    default:
        break;
    }
    cout<<"Please enter 'Y' to re-enter"<<endl;
    cin>>choice; 
    } while (choice=='y' || choice=='Y');

    return 1;
}
