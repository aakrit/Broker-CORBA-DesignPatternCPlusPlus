//
//  Client.h
//  Lab2_Deliverable
//
//  Created by Aakrit Prasad on 5/9/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#ifndef __Lab2_Deliverable__Client__
#define __Lab2_Deliverable__Client__

#include <iostream>
#include <vector>

class ClientProxy;

class Client
{
    //std::string name = NULL;
    //I would ideally store the object reference information in a container, like hash map but it wasn't specified in the scope of the assignemnt, it would be to hard to implement but for the sake of simplicity i left it out here
    ClientProxy* cpused;
    
public:
    Client(ClientProxy*);
    Client();
    ~Client();
    int addIntegers(int const&, int const&) const;
    int getLength(std::string const&);
    
    
};





#endif /* defined(__Lab2_Deliverable__Client__) */
