#include <iostream>
#include "String.h"
#include "BST.h"

int main() {
    char command;
    BST s1;
    BST s2;
    while (true){
        std::cout << "\nEnter a command\n(e, s, b, c, l, a, u, i, q)" << std::endl;
        std::cin >> command;
        // Erase s1
        if (command == 'e'){
            s1 = BST();
            std::cout << "\nS1 is deleted";
        }
        // Switches s1 & s2
        else if (command == 's'){
            BST* temp = new BST(s1);
            s1 = s2;
            s2 = *temp;
            std::cout << "\nS1 & S2 is swapped";
        }
        // Check weather s2 is a proper subset of s1
        else if (command == 'b'){
            // S1 should have atleast one element which is not in S2, for S2 to be a proper subset
            if(s1.getNoOfElements() <= s2.getNoOfElements()) {
                std::cout << "\nS2 is not a proper subset of S1";
            } else{
                if(s1.isSubset(s2) == true)
                    std::cout << "\nS2 is a proper subset of S1";
                else
                    std::cout << "\nS2 is not a proper subset of S1";
            }
        }
        // Deep copy S1 to S2
        else if (command == 'c'){
//            s2.deepCopy(s1);
//            delete &s2;
            s2 = *new BST(s1);
            std::cout << "\nS1 is copied into S2";
        }
        // Displays s1 and s2
        else if (command == 'l'){
            std::cout << "\nS1 : ";
            s1.display();
            std::cout << "\nS2 : ";
            s2.display();
        }
        // Add a new element to S1
        else if (command == 'a'){
            std::string value;
            std::cout << "Enter the string to insert into S1 :\n";
            std::cin >> value;
            String string1(value.data());
            s1.insert(string1);
//            s1.display();
        }
        // Union of S1 & S2 is saved in S1
        else if (command == 'u'){
            s1.unionOf(s2.getRoot());
        }
        else if (command == 'i'){

        }
        else if (command == 'q'){
            std::cout << 'q';
            break;
        }
    }
    return 0;
}
