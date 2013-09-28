//
//  Server.h
//  Lab2_Deliverable
//
//  Created by Aakrit Prasad on 5/9/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#ifndef __Lab2_Deliverable__Server__
#define __Lab2_Deliverable__Server__

#include <iostream>
#include <vector>

class Stock;
class Servant;
class Servant2;

//The server proxy convert the callobject to its regular language format, java/ or c++ and passes that informaition to the server. The server will then pass the information to one of its servants to do the computation
class Server
{
    //std::string name = NULL;
    
public:
    int addIntegers(int const&, int const&);
    int getLength(std::string const&);
    
    
};


#endif /* defined(__Lab2_Deliverable__Server__) */
