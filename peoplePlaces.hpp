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

    //PPrint out a sorted list of all the people. People with names starting
    //with A appear first, Z last.
    void printAll();

    //List the people who visited both Krusty-Burger and Tavern
    void visitedKT();

    //List the people who did NOT visit Krusty-Burger and Home
    void notVisitedKH();

    //List the people who visited Krusty-Burger and School but did NOT
    //visit Tavern and Home
    void visitedKSnotT();

    //List the people who visited all locations and remove them from the list
    void remove();

};


#endif //LAB08_PEOPLEPLACES_HPP
