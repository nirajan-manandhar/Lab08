//
// Created by Nirajan on 2018-11-15.
//

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#ifndef LAB08_PEOPLEPLACES_HPP
#define LAB08_PEOPLEPLACES_HPP

using namespace std;

class peoplePlaces {
private:
    multimap<string, string> peoplePlaceMap;
public:
    void readFile();
    void printAll();
    void visitedKT();
};


#endif //LAB08_PEOPLEPLACES_HPP
