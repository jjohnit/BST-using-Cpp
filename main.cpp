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
        }
        // Switches s1 & s2
        else if (command == 's'){
            BST* temp = new BST(s1);
            s1 = s2;
            s2 = *temp;
        }
        // Check weather s2 is a proper subset of s1
        else if (command == 'b'){
            // S1 should have atleast one element which is not in S2, for S2 to be a proper subset
            if(s1.getNoOfElements() <= s2.getNoOfElements()) {
                std::cout << "S2 is not a proper subset of S1";
                break;
            }

        }
        // Deep copy S1 to S2
        else if (command == 'c'){
            s2.deepCopy(s1);
        }
        // Displays s1 and s2
        else if (command == 'l'){
            std::cout << "S1 : ";
            s1.display();
            std::cout << "S2 : ";
            s2.display();
        }
        else if (command == 'a'){
            std::cout << 'a';
        }
        else if (command == 'u'){
            std::cout << 'u';
        }
        else if (command == 'i'){
            std::string value;
            std::cout << "Enter the string to insert into S1 : ";
            std::cin >> value;
            String string1(value.data());
            s1.insert(string1);
            s1.display();
        }
        else if (command == 'q'){
            std::cout << 'q';
            break;
        }
    }
    return 0;
}
