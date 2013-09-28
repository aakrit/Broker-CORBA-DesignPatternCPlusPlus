//
//  BrokerServer.cpp
//  Lab2_Deliverable
//
//  Created by Aakrit Prasad on 5/11/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#include "CallObject.h"
#include "ClientProxy.h"
#include "ServerProxy.h"
#include "BrokerServer.h"
#include "Broker.h"
#include "Server.h"
#include <string>
#include <sstream>


//Server broker takes the string from client broker, converts it to the call object and passes the call object to the server proxy
BrokerServer::BrokerServer(std::string const& s)
{
    name = s;
    std::cout << std::endl << "Launching Server Broker \"" << name << "\"" << std::endl << std::endl;
}
void BrokerServer::registerServer(Server *s)
{
    sv = s;
}
void BrokerServer::un_registerServer(Server *s)
{
    sv = NULL;
}

std::string BrokerServer::addIntegers(std::string s)
{
    //Broker passes the callobject pointer to the serverproxy
    //lets use a string tokenizer to convert the data from the string to a call object
    //copy the string so its a char* not a const char* as the std::string provides
    char *newstring = new char[s.length() + 1];
    strcpy(newstring, s.c_str());
    //tokenize the strings
    char *val1 = strtok(newstring," ,.");
    char *val2 = strtok(NULL," ,.");
    int i = atoi(val1);
    int j = atoi(val2);
    CallObject *co = new CallObject(i, j);
    CallObject *z = ServerProxy::addIntergers(co, sv);
    //Server Broker get a callobject, converts it to a string and sends it back to the Client Broker
    std::string a = std::to_string(z->stringret);
    delete []newstring;
    delete co;
    return a;
}

std::string BrokerServer::getLength(std::string s)
{
    //Broker passes the callobject pointer to the serverproxy
    CallObject *co = new CallObject(s);
    CallObject *z = ServerProxy::getLength(co, sv);
    //Server Broker get a callobject, converts it to a string and sends it back to the Client Broker
    std::string a = std::to_string(z->stringret);
    delete co;
    return a;
}




