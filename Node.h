//
// Created by jjasan2 on 11/12/2022.
//

#ifndef PROJECT3_NODE_H
#define PROJECT3_NODE_H


#include "String.h"

class Node {
    String value;
    Node* left;
    Node* right;

public:
    Node(String value);

    // Getter & setters
    const String &getValue() const;
    void setValue(const String &value);
    Node *getLeft() const;
    void setLeft(Node *left);
    Node *getRight() const;
    void setRight(Node *right);
};


#endif //PROJECT3_NODE_H
