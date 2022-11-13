//
// Created by jjasan2 on 11/12/2022.
//

#ifndef PROJECT3_STRING_H
#define PROJECT3_STRING_H


class String {
    int size_;
    char* chars_;
public:
    String(char* chars);

public:
    // Getters & setters
    int getSize() const;
    char *getChars() const;
    void setChars(char *chars);
};


#endif //PROJECT3_STRING_H
