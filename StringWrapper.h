//
// Created by Elizabeth on 2/23/2017.
//
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
#ifndef ASSIGNMENT2_TEMPLATES_STRINGWRAPPER_H
#define ASSIGNMENT2_TEMPLATES_STRINGWRAPPER_H


class StringWrapper {
    public:
        StringWrapper(string v); // = 0): value(v){}
        void printValue();
        string getValue() const;
        void setValue(int val);
        // void print(ostream &out = cout) const;
    private:
        string value;


};


#endif //ASSIGNMENT2_TEMPLATES_STRINGWRAPPER_H
