//
// Created by Elizabeth on 2/22/2017.
//

#include "IntWrapper.h"

IntWrapper::IntWrapper(int v = 0) : value(v){};

void IntWrapper::printValue(){
    cout << value;
}
int IntWrapper::getValue() const{
    return value;
}
void IntWrapper::setValue(int val){
    value = val;
}
