//
//  BrokerServer.h
//  Lab2_Deliverable
//
//  Created by Aakrit Prasad on 5/11/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#ifndef __Lab2_Deliverable__BrokerServer__
#define __Lab2_Deliverable__BrokerServer__

#include <iostream>


//This class is the Server Broker, it takes inputs from the Client Broker to send to the Server Proxy and return the value from the Server Proxy back to the Client Broker

class CallObject;
class ClientProxy;
class ServerProxy;
class Broker;
class Server;

class BrokerServer
{
    //storing the location of server to execute function call
    //I would ideally store the object reference information in a container, like hash map but it wasn't specified in the scope of the assignemnt, it would be to hard to implement but for the sake of simplicity i left it out here
    Server *sv;

public:
    std::string name;
    
    BrokerServer(std::string const&);
    std::string addIntegers(std::string);
    std::string getLength(std::string);
    void registerServer(Server*);
    void un_registerServer(Server*);
    

};




#endif /* defined(__Lab2_Deliverable__BrokerServer__) */
