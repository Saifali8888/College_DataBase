#ifndef FILE_FUNCTION_H
#define FILE_FUNCTION_H
#include <iostream>
#include <stdio.h>
#include <fstream>

#include "Enter_details.h"

namespace Filehandle
{

    bool writeFile(Enter_details &edetails);
    bool readFile(Enter_details &rdetails);
    bool deleteFile(Enter_details &ddeatils);
    bool modifyFile(Enter_details &mdetails);

};

#endif