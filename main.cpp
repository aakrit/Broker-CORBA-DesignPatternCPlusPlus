//
//  main.cpp
//  Lab2_Deliverable
//
//  Created by Aakrit Prasad on 5/9/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#include <iostream>
#include "Client.h"
#include "ClientProxy.h"
#include "Server.h"
#include "BrokerServer.h"
#include "Broker.h"

using namespace std;

int main(int argc, const char * argv[])
{

    //before user input, we need to do the registration process
    //1st create client proxy
    ClientProxy *cp = new ClientProxy();
    //we will create(startup) and register a server broker (named lab2 server broker) to our client broker (called class Broker). This way the client broker will know which server broker to call for executing the requested commands
    BrokerServer *bs = new BrokerServer("Lab 2 Server Broker");
    Broker *cb = new Broker();
    //register the client broker to the client proxy so its knows where to send the call object
    cp->register_b(cb);
    //register the server broker named "lab 2 server broker" to the client broker so it knows to send the addint and getlen fucntions to this server broker
    cb->registerServerBroker(bs);
    
    //Next we will register our server with the server broker so the server broker knows which server to call for the function execution passes that to the server proxy to call that server
    Server *s = new Server();
    bs->registerServer(s);
    
    //now we create a client for the user to use
    unique_ptr<Client> c(new Client(cp));
    
    cout << "Welcome to the Broker Pattern Program!" << endl;
    while(1)
    {
        int n = 0;
        cout << endl << "To add two integers press type \"1\", to get the lenght of a string type \"2\", and \"3\" to quit: " << endl;
        cout << "Input: ";
        cin >> n;
        if (!cin)
        {
            cout << "ERROR: Input must be a number! Exiting..." << endl;
            break;
        }
        if (n == 1)
        {
            cout << "Please enter the 1st integer: ";
            int i = 0;
            int j = 0;
            if(!(cin >> i))
            {
                cout << "Error, only numbers can be entered!" << endl;
                break;
            }
            cout << "Please enter the 2nd integer: ";
            if(!(cin >> j))
            {
                cout << "Error, only numbers can be entered!" << endl;
                break;
            }
            cout << "The sum of " << i << " and " << j << " is: " << c->addIntegers(i, j) << endl << endl;
            cout << "Unit Testing Result: ";
            int test = i + j;
            cout << test << endl;
        }
        else if (n == 2)
        {
            cout << "Please enter the string wiht no spaces: ";
            //note only something recognized as string is something part of the C++ string std: ie: (1*&^%$#@!_-++=)
            string s;
            cin >> s;
            cout << "The lenght of \"" << s << "\" is: " << c->getLength(s) << endl;
            cout << "Unit Testing Result: ";
            double test = s.length();
            cout << test << endl;
            
        }
        else if (n == 3)
        {
            cout << "Exiting...." << endl;
            break;
        }
        else
        {
            cout << "Invalid number entered, please try again!" << endl;
            continue;
        }
    }
    cout << "Thank you for using this program!" << endl;
    
    //unregister the server, not really necessary though
    bs->un_registerServer(s);
    delete s;
    delete cp;
    delete bs;
    delete cb;
    
    return 0;
}

//need to add unit testing

