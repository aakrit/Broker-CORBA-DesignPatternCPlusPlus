//
//  ServerProxy.h
//  Lab2_Deliverable
//
//  Created by Aakrit Prasad on 5/9/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#ifndef __Lab2_Deliverable__ServerProxy__
#define __Lab2_Deliverable__ServerProxy__

#include <iostream>
#include <vector>
class Server;
class Broker;
class CallObject;

class ServerProxy
{
  
    
public:
    static CallObject* addIntergers(CallObject*, Server*);
    static CallObject* getLength(CallObject*, Server*);

    
    
};


#endif /* defined(__Lab2_Deliverable__ServerProxy__) */
