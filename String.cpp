//
// Created by jjasan2 on 11/12/2022.
//

#include "String.h"

int String::getSize() const {
    return size_;
}

void String::setSize(int size) {
    size_ = size;
}

char *String::getChars() const {
    return chars;
}

void String::setChars(char *chars) {
    String::chars = chars;
}
