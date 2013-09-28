//
//  ServerProxy.cpp
//  Lab2_Deliverable
//
//  Created by Aakrit Prasad on 5/9/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#include "ServerProxy.h"
#include "Server.h"
#include "Broker.h"
#include "CallObject.h"

using namespace std;
//The server proxy takes a callobject from the broker server and calls on a server function
//ServerProxy gets an int from the Server and converts it to the call object and passes it back to the Server Broker
CallObject* ServerProxy::addIntergers(CallObject *c, Server *sv)
{
    //when server proxy recieves the signal it fires up(starts/creates/links to) a server to execute the transaction
//    Server *s = new Server();
    int z = sv->addIntegers(c->val1, c->val2);
    
    CallObject *a = new CallObject(z);
    return a;
}



CallObject* ServerProxy::getLength(CallObject *c, Server *sv)
{
//    Server *g = new Server();
    int z = sv->getLength(c->conv);
 
    CallObject *a = new CallObject(z);
//    delete g;
    return a;
}

