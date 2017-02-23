//
// Created by Elizabeth on 2/23/2017.
//

#include "StringWrapper.h"

StringWrapper::StringWrapper(string v = 0) : value(v){};

void StringWrapper::printValue(){
    cout << value;
}
string StringWrapper::getValue() const{
    return value;
}
void StringWrapper::setValue(int val){
    value = val;
}