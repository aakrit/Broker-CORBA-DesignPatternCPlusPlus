//  Servant.cpp
//  Lab2_Deliverable
//
//  Created by Aakrit Prasad on 5/15/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#include "Servant.h"

using namespace std;

int Servant::addIntegers(int const& val1, int const& val2)
{
    //client object passes the function to the ClientProxy expecting an int returned
    int a = val1 + val2;
    return a;
    
}

