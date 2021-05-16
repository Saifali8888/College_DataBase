#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include<limits>

#include "Enter_details.h"
#include "File_function.h"

using namespace std;

bool Enter_details::getuser_input (Enter_details &dept)
{

    cout<<"Please Enter the details "<<endl;
    cout<<"Enter the Department "<<endl;
    cin.ignore(1000, '\n');
    getline(cin,dept.deptname);

    cout<<"Please enter name "<<endl;
    getline(cin,dept.name);

    cout<<"Please enter Age "<<endl;
    cin>>dept.age;

    cout<<"Please enter subject "<<endl;
    cin.ignore(1000, '\n');
    getline(cin,dept.subject);

    cout<<"Please enter Experience "<<endl;
    cin>>dept.experience;

    cout<<"Please enter post "<<endl;
    cin.ignore(1000, '\n');
    getline(cin,dept.post);

    cout<<"Please enter Salary "<<endl;
    cin>>dept.salary;

    if(Filehandle::writeFile(dept))
    {
        cout<<"Record Updated" <<endl;
        return true;
    }
    return false;

}

bool Enter_details::readuser_details(Enter_details &rdetails)
{
    if(Filehandle::readFile(rdetails))
    {
        cout<< "Name: "<<rdetails.name<<endl;
        cout<< "Age: "<<rdetails.age<<endl;
        cout<< "Subject: "<<rdetails.subject<<endl;
        cout<< "No. of Years of Experience: "<<rdetails.experience<<endl;
        cout<< "Post: "<< rdetails.post<<endl;
        cout<< "Salary: "<< rdetails.salary<<endl; 
        return true;
    }
    else
    {
        cout<< "Failed to read the details "<<endl;
        return false;
    }
    
}