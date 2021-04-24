#include <iostream>
#include <stdio.h>
#include <string>

#include"Enter_details.h"

using namespace std;
int main()
{
    char choice;
    do
    {
        Enter_details enter_details;
        enter_details.getuser_input(enter_details);
        cout<<"Please enter 'Y' to re-enter"<<endl;
        cin>>choice; 
    } while (choice=='y' || choice=='Y');
    return 1;
}
