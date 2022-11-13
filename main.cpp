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
        if (command == 'e'){
            std::cout << 'e';
        }
        else if (command == 's'){
            std::cout << 's';
        }
        else if (command == 'b'){
            std::cout << 'b';
        }
        else if (command == 'c'){
            std::cout << 'c';
        }
        else if (command == 'l'){
            std::cout << 'l';
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
