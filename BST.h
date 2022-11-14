//
// Created by jjasan2 on 11/12/2022.
//

#ifndef PROJECT3_BST_H
#define PROJECT3_BST_H


#include <string>
#include "Node.h"

class BST {
    Node* root = nullptr;
    int noOfElements;

//    void setRoot(Node *root);
    // Method to recursively print nodes
    std::string displayNode(Node* node, std::string &output);
    // Recuresively check the childs of a node is subset of this BST
    bool isSubsetCheck(Node* node);
    // Recursively add the common nodes to the new bst
    void intersectionOf(BST* bst, Node* node);

public:
    // Constructor
    BST();
    // Copy Constructor
    BST(BST &bst);

    virtual ~BST();

    // Getters & setters
    Node *getRoot() const;
    int getNoOfElements() const;


    // To compare a & b.
    // 1 - a greater than b, 0 - a equal to b, -1 - a less than b
    int compareStrings(std::string a, std::string b);

    // Check whether a string is present in the nodes
    bool contains(String value);

    // To insert a string to the BST
    bool insert(String value);

    // To display the elements of BST
    void display();

    // To get a new deep copy of the node passed
    Node* getCopy(Node* Node);

    // To deep copy from another BST
//    void deepCopy(BST bst);

    // Check weather a bst is a proper subset of this BST
    bool isSubset(BST &bst);

    // create the union uning the root node passed
    void unionOf(Node* node);

    // Replace the current BST with the intersection of values from the parameter bst
    void intersection(BST &bst);

};


#endif //PROJECT3_BST_H
