//
//  ClientProxy.cpp
//  Lab2_Deliverable
//
//  Created by Aakrit Prasad on 5/9/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#include "ClientProxy.h"
#include "Broker.h"
#include "CallObject.h"

using namespace std;

void ClientProxy::register_b(Broker* b)
{
    clientBroker = b;
}

int ClientProxy::addIntegers(int const& i, int const& j)
{
    //ClientProxy converts client fucntion to a call object (some IDL) type and passes it to the broker
    //create new callobject with informaiton stored
    
    CallObject *co = new CallObject(i, j);
    
    //pass the call object to the broker
    CallObject* z = clientBroker->addIntegers(co);
    //convert the callobject back to what the client asked for and pass it
    int g = z->stringret;
    delete co;
    return g;
    
}

int ClientProxy::getLength(string const& s)
{
    //convert client fucntion to call object (some IDL) type and call Broker static function on that call object
    
    CallObject *co = new CallObject(s);
    //client proxy passes a callobject to the Client Broker and expect a call object returned
    CallObject *z = clientBroker->getLength(co);
    //convert the callobject back to what the client asked for and pass it
    int g = z->stringret;
    delete co;
    return g;
    
}


