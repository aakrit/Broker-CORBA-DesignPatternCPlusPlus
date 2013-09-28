//
//  Servant2.cpp
//  Lab2_Deliverable
//
//  Created by Aakrit Prasad on 5/15/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#include "Servant2.h"




int Servant2::getLength(std::string const& s)
{
    //client object passes the function to the ClientProxy expecting an int returned
    int a = static_cast<int>(s.size());
    return a;
}