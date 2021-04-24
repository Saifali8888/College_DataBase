#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>

#include "Enter_details.h"

using namespace std;

bool Enter_details::getuser_input (Enter_details &dept)
{

    cout<<"Please Enter the details "<<endl;
    cout<<"Enter the Department "<<endl;
    cin>>dept.deptname;

    cout<<"Please enter name "<<endl;
    cin>>dept.name;

    cout<<"Please enter Age "<<endl;
    cin>>dept.age;

    cout<<"Please enter subject "<<endl;
    cin>>dept.subject;

    cout<<"Please enter Experience "<<endl;
    cin>>dept.experience;

    cout<<"Please enter post "<<endl;
    cin>>dept.post;

    cout<<"Please enter Salary "<<endl;
    cin>>dept.salary;

    fstream filedata;
    filedata.open(dept.deptname.c_str(), ios::app);
    filedata<<dept.name.c_str()<<endl;
    filedata<<dept.age<<endl;
    filedata<<dept.subject.c_str()<<endl;
    filedata<<dept.experience<<endl;
    filedata<<dept.post.c_str()<<endl;
    filedata<<dept.salary<<endl;
    
    return true;
}