//
// Created by Elizabeth on 2/22/2017.
//
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#ifndef ASSIGNMENT2_TEMPLATES_INTWRAPPER_H
#define ASSIGNMENT2_TEMPLATES_INTWRAPPER_H


class IntWrapper {
public:
    IntWrapper(int v); // = 0): value(v){}
    void printValue();
    int getValue() const;
    void setValue(int val);
    // void print(ostream &out = cout) const;
private:
    int value;
};

#endif //ASSIGNMENT2_TEMPLATES_INTWRAPPER_H
