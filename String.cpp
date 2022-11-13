//
// Created by jjasan2 on 11/12/2022.
//

#include <cstring>
#include <string>
#include "String.h"
#include "typeinfo"

String::String() {}

String::String(char* value) {
    chars_ = new char[15];
    strcpy(chars_, value);
    size_ = strlen(chars_);
}

// COpy constructor
String::String(String &string) {
    chars_ = new char[15];
    strcpy(chars_, string.getChars());
    size_ = string.getSize();
}

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

String::~String() {
    delete chars_;
}

// To check whether 2 string are equal
bool String::operator==(String &newString) {
    if(typeid(*this) != typeid(newString))
        return false;
    if (size_ == newString.getSize() && strcmp(chars_, newString.getChars()) == 0) {
        return true;
    }
    return false;
}
