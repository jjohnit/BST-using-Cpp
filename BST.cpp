//
// Created by jjasan2 on 11/12/2022.
//

#include <iostream>
#include "BST.h"

BST::BST(){

}

BST::~BST() {
    delete root;
}

BST::BST(BST &bst) {
    Node *bstRoot = bst.getRoot();
    root = new Node();
    if(bstRoot != nullptr){
        root->setValue(bstRoot->getValue());
        root = getCopy(bstRoot);
    }
}

Node *BST::getRoot() const {
    return root;
}

int BST::compareStrings(std::string a, std::string b) {
    if (a < b)
        return -1;
    else if (a > b)
        return 1;
    else
        return 0;
}

Node* BST::insert(String value){
    Node *newNode = new Node(value);
    // If root is empty, add new string as root
    if (root == nullptr){
        root = newNode;
    }
    else {
        Node *currentNode = root;
        Node *previousNode;
        while (currentNode != nullptr){
            previousNode = currentNode;
            // If there is an existing node with same value, do nothing
            if (BST::compareStrings(currentNode->getValue().getChars(), value.getChars()) == 0){
                return root;
            } else if (BST::compareStrings(currentNode->getValue().getChars(), value.getChars()) > 0){
                currentNode = currentNode->getLeft();
            } else{
                currentNode = currentNode->getRight();
            }
        }
        // Add the new node to the correct side
        if(BST::compareStrings(previousNode->getValue().getChars(), value.getChars()) > 0){
            previousNode->setLeft(newNode);
        } else if (BST::compareStrings(previousNode->getValue().getChars(), value.getChars()) < 0){
            previousNode->setRight(newNode);
        }
        return root;
    }
}

void BST::display() {
    if(root == nullptr){
        std::cout << "BST is empty";
        return;
    }
    std::string output;
    std::cout << displayNode(root, output);
}

std::string BST::displayNode(Node* node, std::string &output) {
    if (node != nullptr){
        displayNode(node->getLeft(), output);
        output += std::string(node->getValue().getChars()) + " ";
        displayNode(node->getRight(), output);
        return output;
    } else
        return "";
}

Node* BST::getCopy(Node* node){
    if(node != nullptr){
        Node* newNode = new Node();
        newNode->setValue(node->getValue());
        newNode->setLeft(getCopy(node->getLeft()));
        newNode->setRight(getCopy(node->getRight()));
        return newNode;
    }
}

void BST::deepCopy(BST bst){
    root = getCopy(bst.getRoot());
}
