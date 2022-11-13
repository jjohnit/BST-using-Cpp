#include <iostream>
#include "String.h"

int main() {
    char command;
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
            std::cout << 'i';
        }
        else if (command == 'q'){
            std::cout << 'q';
            break;
        }
    }
    return 0;
}
