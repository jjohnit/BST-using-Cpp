//
// Created by jjasan2 on 11/12/2022.
//

#include "Node.h"

Node::Node() {}

Node::Node(String value) : value(value) {
    right = nullptr;
    left = nullptr;
}

String &Node::getValue() {
    return value;
}

void Node::setValue(const String &value) {
    Node::value = value;
}

Node *Node::getLeft() const {
    return left;
}

void Node::setLeft(Node *left) {
    Node::left = left;
}

Node *Node::getRight() const {
    return right;
}

void Node::setRight(Node *right) {
    Node::right = right;
}
