//
//  Broker.cpp
//  Lab2_Deliverable
//
//  Created by Aakrit Prasad on 5/9/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//
#include "CallObject.h"
#include "ClientProxy.h"
#include "ServerProxy.h"
#include "Broker.h"
#include "BrokerServer.h"
#include "string.h"
#include <sstream>

using namespace std;

//Client Broker converts callobject pointer to string and passes the information to the server broker

void Broker::registerServerBroker(BrokerServer* bs)
{
    //store memeory of server broker object
    lab2server = bs->name;
    lab2serverbroker = bs;
    pair<string,BrokerServer*> server (bs->name,bs);
    serverBrokers.insert(server);
}

CallObject* Broker::addIntegers(CallObject* c)
{
    //The client broker check to see if the Broker 'Remote' Server is registered and passes it the information to compute
    BrokerServer *b = NULL;
    try
    {
        for (auto& a : serverBrokers)
        {
            if (a.first != lab2server) {
                continue;
            }else
            {
                b = a.second;
            }
        }
    } catch (exception e)
    {
        cout << e.what() << endl;
    }
    if (b == NULL)
    {
        cout << "Unable to locate Server Broker" << endl;
    }
    string s = to_string(c->val1)+","+to_string(c->val2);
    //BrokerServer *bs = new BrokerServer(Broker::serverBroker2);
    string z = lab2serverbroker->addIntegers(s);

    //The ClientBroker gets a string back from the BrokerServer and converts it to a call object and passes it to the client proxy to demarshall
    int d = std::stoi(z);
    CallObject *a = new CallObject(d);
    //delete bs;
    return a;
}

CallObject* Broker::getLength(CallObject* c)
{
    //The client broker locates the Broker 'Remote' Server and passes it the information to compute
    //BrokerServer *bs = new BrokerServer(Broker::serverBroker2);
    string t = c->conv;
    string z = lab2serverbroker->getLength(t);

    //The ClientBroker gets a string back from the BrokerServer and converts it to a call object and passes it to the client proxy to demarshall
    int d = std::stoi(z);
    CallObject *a = new CallObject(d);
    //delete bs;
    return a;
}


