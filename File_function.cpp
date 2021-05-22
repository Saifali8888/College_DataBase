#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdio>
#include <sstream>
#include <algorithm>
#include <strings.h>
#include <bits/stdc++.h>

#include "File_function.h"

#define SPACECHARACTER " "
using namespace std;

bool Filehandle::writeFile(Enter_details &edetails)
{
    fstream filedata;
    filedata.open(edetails.deptname.c_str(), ios::app);
    StringReplace_space(edetails.name);
    StringReplace_space(edetails.subject);
    StringReplace_space(edetails.post);

    filedata << edetails.name.c_str() << SPACECHARACTER << edetails.age << SPACECHARACTER << edetails.subject.c_str() << SPACECHARACTER << edetails.experience << SPACECHARACTER << edetails.post.c_str() << SPACECHARACTER << edetails.salary << endl;
    return true;
}

bool Filehandle::readFile(Enter_details &rdetails)
{
    ifstream filedata(rdetails.deptname.c_str());
    string myText, raw;
    std::istringstream iss;

    vector<std::string> words;
    while (getline(filedata, myText))
    {
        std::istringstream iss(myText);
        iss >> raw;
        StringReplace_underscore(raw);
        if (!strcasecmp(raw.c_str(), rdetails.name.c_str()))
        {
            for (int i = 2; i <= 6; i++)
            {
                iss >> raw;
                switch (i)
                {
                case 2:
                    rdetails.age = atoi(raw.c_str());
                    break;

                case 3:
                    rdetails.subject = raw;
                    StringReplace_underscore(rdetails.subject);
                    break;

                case 4:
                    rdetails.experience = atoi(raw.c_str());
                    break;

                case 5:
                    rdetails.post = raw;
                    StringReplace_underscore(rdetails.post);
                    break;

                case 6:
                    rdetails.salary = atof(raw.c_str());
                    break;

                default:
                    break;
                }
            }
            return true;
        }
        else
        {
            continue;
        }
    }
    return false;
}

bool Filehandle::deleteFile(Enter_details &ddetails)
{
    ifstream filedata(ddetails.deptname.c_str());
    string myText;

    ofstream tempdata;
    tempdata.open("temp", ios::out);

    while (getline(filedata, myText))
    {
        StringReplace_space(ddetails.name);
        //transform(myText.begin(), myText.end(), myText.begin(), ::tolower);
        //transform(ddetails.begin(), ddetails.end(), ddetails.begin(), ::tolower);
        if (myText.find(ddetails.name) != std::string::npos)
        {
            continue;
        }
        else
        {
            tempdata << myText << endl;
        }
    }
    filedata.close();
    tempdata.close();

    remove(ddetails.deptname.c_str());
    cout << "defect " << rename("temp", ddetails.deptname.c_str());
    return true;
}

bool Filehandle::modifyFile(Enter_details &mdetails)
{
    readFile(mdetails);
    deleteFile(mdetails);

    system("clear");
    int select;
    cout << "Please Select\n"
         << "1. Name \n"
         << "2. Age \n"
         << "3. Subject \n"
         << "4. Experience \n"
         << "5. Post \n"
         << "6. Salary" << endl;
    cin >> select;

    cin.ignore(1000, '\n');
    switch (select)
    {
    case 1:
        system("clear");
        cout << "Please Enter Name " << endl;
        getline(cin, mdetails.name);
        break;
    case 2:
        system("clear");
        cout << "Please Enter Age " << endl;
        cin >> mdetails.age;
        break;
    case 3:
        system("clear");
        cout << "Please Enter Subject " << endl;
        getline(cin, mdetails.subject);
        break;
    case 4:
        system("clear");
        cout << "Please Enter Experience " << endl;
        cin >> mdetails.experience;
        break;
    case 5:
        system("clear");
        cout << "Please Enter Post " << endl;
        getline(cin, mdetails.post);
        break;
    case 6:
        system("clear");
        cout << "Please Enter Salary " << endl;
        cin >> mdetails.salary;
        break;
    default:
        break;
    }
    writeFile(mdetails);
    return true;
}

void Filehandle::StringReplace_space(string &Replace)
{
    std::replace(Replace.begin(), Replace.end(), ' ', '_');
}

void Filehandle::StringReplace_underscore(string &Replace)
{
    std::replace(Replace.begin(), Replace.end(), '_', ' ');
}
