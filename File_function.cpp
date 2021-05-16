#include <iostream>
#include <stdio.h>

#include "File_function.h"
using namespace std;

bool Filehandle::writeFile(Enter_details& edetails)
{
    fstream filedata;
    filedata.open(edetails.deptname.c_str(), ios::app);

    filedata<<edetails.name.c_str()<<endl;
    filedata<<edetails.age<<endl;
    filedata<<edetails.subject.c_str()<<endl;
    filedata<<edetails.experience<<endl;
    filedata<<edetails.post.c_str()<<endl;
    filedata<<edetails.salary<<endl;
    return true;
}

bool Filehandle::readFile(Enter_details& rdetails)
{
    ifstream filedata(rdetails.deptname.c_str());
    string myText;

    while (getline (filedata, myText))
    {
        if(myText==rdetails.name)
        {
            break;
        }
    }

    if(myText==rdetails.name)
    {
    if(getline (filedata, myText))
        rdetails.age = atoi(myText.c_str());

    if(getline (filedata, myText))
        rdetails.subject = myText;

    if(getline (filedata, myText))
        rdetails.experience = atoi(myText.c_str());
    
    if(getline (filedata, myText))
        rdetails.post = myText;

    if(getline (filedata, myText))
        rdetails.salary = atof(myText.c_str());

        return true;
    }
    else
    {
        return false;
    }

}



