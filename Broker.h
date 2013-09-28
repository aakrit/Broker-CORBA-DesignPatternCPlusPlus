//
//  Broker.h
//  Lab2_Deliverable
//
//  Created by Aakrit Prasad on 5/9/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#ifndef __Lab2_Deliverable__Broker__
#define __Lab2_Deliverable__Broker__

#include <iostream>
#include <unordered_map>

//this is the broker for the client proxy

class BrokerServer;
class CallObject;
class ServerProxy;
class ClientProxy;

class Broker
{
    //I am storing information in the container but don't use it since i only have one server broker here that i know i will be calling and thus i am also saving its identity as a reference within the Client Broker class
    BrokerServer* lab2serverbroker;
    std::string lab2server;
    std::unordered_map<std::string, BrokerServer*> serverBrokers;
    
public:
    CallObject* addIntegers(CallObject*);
    CallObject* getLength(CallObject*);
    void registerServerBroker(BrokerServer*);
    
    
};


#endif /* defined(__Lab2_Deliverable__Broker__) */
