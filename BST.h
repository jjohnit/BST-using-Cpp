//
// Created by jjasan2 on 11/12/2022.
//

#ifndef PROJECT3_BST_H
#define PROJECT3_BST_H


#include <string>
#include "Node.h"

class BST {
    Node* root = nullptr;

    void setRoot(Node *root);
    // Method to recursively print nodes
    std::string displayNode(Node* node, std::string &output);

public:
    // Constructor
    BST();
    // Copy Constructor
    BST(BST &bst);

    virtual ~BST();

    // Getters & setters
    Node *getRoot() const;


    // To compare a & b.
    // 1 - a greater than b, 0 - a equal to b, -1 - a less than b
    int compareStrings(std::string a, std::string b);

    // To insert a string to the BST
    Node* insert(String value);

    // To display the elements of BST
    void display();

    // To get a new deep copy of the node passed
    Node* getCopy(Node* Node);

    // To deep copy from another BST
    void deepCopy(BST bst);
};


#endif //PROJECT3_BST_H
