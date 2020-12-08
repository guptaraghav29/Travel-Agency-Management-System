#include "Client.hpp"

int main()
{
    Client* client = new Client();
    client->run();
    delete client;
}