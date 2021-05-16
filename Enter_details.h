#ifndef ENTER_DETAILS_H
#define ENTER_DETAILS_H
#include <iostream>
#include <stdio.h>
using namespace std;

class Enter_details
{
public:
    string deptname;
    string name;
    int age;
    string subject;
    int experience;
    string post;
    float salary;
    Enter_details(){};
    ~Enter_details(){};
    bool getuser_input(Enter_details &dept);
    bool readuser_details(Enter_details &rdetails);

};
#endif

