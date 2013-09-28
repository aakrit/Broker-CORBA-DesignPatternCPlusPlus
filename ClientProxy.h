//
//  ClientProxy.h
//  Lab2_Deliverable
//
//  Created by Aakrit Prasad on 5/9/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#ifndef __Lab2_Deliverable__ClientProxy__
#define __Lab2_Deliverable__ClientProxy__

#include <iostream>
#include <vector>
class Broker;
class CallObject;

class ClientProxy
{
    //I would ideally store the object reference information in a container, like hash map but it wasn't specified in the scope of the assignemnt, it would be to hard to implement but for the sake of simplicity i left it out here
    Broker* clientBroker;
    
public:
    int addIntegers(int const&, int const&);
    int getLength(std::string const&);
    void register_b(Broker*);
    
};

//create a callobject to convert the client function parameters into common IDL type format






#endif /* defined(__Lab2_Deliverable__ClientProxy__) */
