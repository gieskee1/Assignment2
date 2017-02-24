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
    bool operator()( const StringWrapper & lhs,
                     const StringWrapper & rhs ) const
    { return lhs.getValue() < rhs.getValue(); }

};
template <class T, typename ComparatorType>
bool isSorted( const vector<T> & a, ComparatorType & IsLessThan)
{
    for (int i = 0; i < a.size()-1; i++ )
        if (IsLessThan( a.at(i)), a.at(i)){
            //do nothing
        } else{
            return false;
        }
    return true;
}

template <class T>
void quickSort(vector<T> &ints, int left, int right);
template <class T>
bool validateSort(vector<T> vec);

int main() {
    vector<IntWrapper> ints;
    vector<StringWrapper> strings;
    int i;
    int s = 100;
    srand(time(NULL));
    for (i = 0; i < s; i++) {
        ints.push_back(rand()% 1000);
        strings.push_back(std::to_string(rand() % 1005));
    }
    sort(ints.begin(),ints.end(),IsLessThan());
    sort(strings.begin(),strings.end(),IsLessThan());
   // quickSort(ints, 0, s-1);
    for (i = 0; i < s; i++){
        cout << ints.at(i).getValue() << endl;
    }
    cout << isSorted(ints,IsLessThan) << endl;
    cout << validateSort(ints) << endl;

    return 0;
}

template <class T>
bool operator<(const T& lhs, const T &rhs){
    return lhs.getValue() < rhs.getValue();
}
template <class T>
bool validateSort(vector<T> vec){
    for(int i = 0; i < vec.size()-1; i++){
        if(vec.at(i) < vec.at(i+1) ){
            //do nothing
        }else{
            return false;
        }
        return true;
    }
}

template <class T>
void quickSort(vector<T> &vec, int left, int right) {
    int i = left, j = right;
    T temp(0);
    T pivot(vec.at((left + right) / 2));

    while (i <= j) {
        //keep going until an element needs to move
        while (vec.at(i) < pivot)
            i++;
        while (pivot < vec.at(j))
            j--;
        if (i <= j) {
            temp = vec.at(i);
            vec.at(i) = vec.at(j);
            vec.at(j) = temp;
            // swap(ints.at(i),ints.at(j));
            //move on to next elements
            i++;
            j--;
        }
    }

    //call method again with sub-vectors
    if (left < j)
        quickSort(vec, left, j);
    if (i < right)
        quickSort(vec, i, right);
}