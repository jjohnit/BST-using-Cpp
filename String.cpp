//
// Created by jjasan2 on 11/12/2022.
//

#include <cstring>
#include <string>
#include "String.h"

int String::getSize() const {
    return size_;
}

char *String::getChars() const {
    return chars_;
}

void String::setChars(char *chars) {
    String::chars_ = chars;
    size_ = strlen(chars_);
}

String::String(char* value) {
    chars_ = new char[15];
    strcpy(chars_, value);
    size_ = strlen(chars_);
}
