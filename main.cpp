#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include "IntWrapper.h"
#include "StringWrapper.h"

using namespace std;


//template <class T>
class IsLessThan {
    public:
        bool operator()( const IntWrapper & lhs,
                         const IntWrapper & rhs ) const
        { return lhs.getValue() < rhs.getValue(); }

};

template <class T>
void quickSort(vector<T> &ints, int left, int right);

int main() {
    vector<IntWrapper> ints;
    vector<StringWrapper> strings;
    int i;
    int s = 100;
    srand(time(NULL));
    for (i = 0; i < s; i++) {
        ints.push_back(rand()% 1005);
       // strings.push_back(std::to_string(rand() % 1005));
    }
    sort(ints.begin(),ints.end(),IsLessThan());
   // quickSort(ints, 0, s-1);
    for (i = 0; i < s; i++){
        cout << ints.at(i).getValue() << endl;
    }
    return 0;
}

template <class T>
bool operator<(const T& lhs, const T &rhs){
    return lhs.getValue() < rhs.getValue();
}

template <class T>
void quickSort(vector<T> &ints, int left, int right) {
    int i = left, j = right;
    T temp(0);
    T pivot(ints.at((left + right) / 2));

    while (i <= j) {
        //keep going until an element needs to move
        while (ints.at(i) < pivot)
            i++;
        while (pivot < ints.at(j))
            j--;
        if (i <= j) {
            temp = ints.at(i);
            ints.at(i) = ints.at(j);
            ints.at(j) = temp;
            // swap(ints.at(i),ints.at(j));
            //move on to next elements
            i++;
            j--;
        }
    }

    //call method again with sub-vectors
    if (left < j)
        quickSort(ints, left, j);
    if (i < right)
        quickSort(ints, i, right);
}