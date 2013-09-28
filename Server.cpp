//
//  Server.cpp
//  Lab2_Deliverable
//
//  Created by Aakrit Prasad on 5/9/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#include "Server.h"
#include "Servant.h"
#include "Servant2.h"

using namespace std;
//The Server gets an int from the Servant and returns it to the ServerProxy

int Server::addIntegers(int const& val1, int const& val2)
{
    //upon recieving a signal for addition, the server wakes up (or methphorically creates) its servant to perform the task requested
    
    Servant *add = new Servant();
    
    int a = add->addIntegers(val1, val2);
    
    delete add;
    return a;
}

int Server::getLength(std::string const& s)
{
    Servant2 *getLength = new Servant2();

    int a = getLength->getLength(s);
    
    delete getLength;
    return a;
}
