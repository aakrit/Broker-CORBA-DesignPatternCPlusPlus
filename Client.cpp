//
//  Client.cpp
//  Lab2_Deliverable
//
//  Created by Aakrit Prasad on 5/9/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//
#include "Client.h"
#include "ClientProxy.h"


using namespace std;

Client::Client(ClientProxy* cp)
{
    //std::cout << "Creating Client" << std::endl;
    cpused = cp;
}

int Client::addIntegers(int const& val1, int const& val2) const
{
    //client object passes the function to the ClientProxy expecting an int returned
    int a = cpused->addIntegers(val1, val2);
    return a;
}

int Client::getLength(string const& s)
{
    int a = cpused->getLength(s);
    return a;
}

//vector<Stock*> Client::getStockList() const
//{
//    vector<Stock*> vs = cpused
//}


Client::~Client()
{
    //std::cout << "Destroying Client Ending Program" << std::endl;
}
Client::Client()
{
    //std::cout << "Creating Client" << std::endl;
}