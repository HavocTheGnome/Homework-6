#include "NodeHW6.hpp"
#include <iostream>

Node::Node(int payload)
{
    this->payload = payload;
}

int Node::getPayload()
{
    return this->payload;
}

Node* Node::getNextNode()
{
    return this->nextNode;
}

void Node::setNextNode(Node* n)
{
    this->nextNode = n;
}