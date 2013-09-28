//
//  CallObject.cpp
//  Lab2_Deliverable
//
//  Created by Aakrit Prasad on 5/9/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#include "CallObject.h"

using namespace std;

CallObject::CallObject(int const& i, int const& j)
{
    val1 = i;
    val2 = j;
}

CallObject::CallObject(int const& z)
{
    stringret =z;
    //std::cout << "Creating Call Object" << std::endl;
}

CallObject::CallObject(string const& s)
{
    conv = s;
    //std::cout << "Creating Call Object" << std::endl;
}
