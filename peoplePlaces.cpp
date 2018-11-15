//
// Created by Nirajan on 2018-11-15.
//


#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include "peoplePlaces.hpp"



void peoplePlaces::readFile() {
    string line;
    string person;
    string places;
    string place1;
    string place2;
    string place3;
    string place4;
    ifstream fin;
    fin.open("../peoplePlaces.txt");
    while(getline(fin, line)){
        istringstream iss(line);
        iss >> person >> place1 >> place2 >> place3 >> place4;
        places = place1 + " " + place2 + " " + place3 + " " + place4;
        peoplePlaceMap.insert(make_pair(person, places));
    }
}

void peoplePlaces::printAll() {
    map<string, string>::iterator itr;

    for (itr = peoplePlaceMap.begin(); itr != peoplePlaceMap.end(); ++itr) {
        cout << itr->first << " - " << itr->second << endl;
    }
    cout << endl;
}

void peoplePlaces::visitedKT() {
    map<string, string>::iterator itr;
    cout << "People who visited both the Krusty-Burger and the Tavern" << endl;
    for (itr = peoplePlaceMap.begin(); itr != peoplePlaceMap.end(); ++itr) {
        string s = itr->second;

        size_t foundK = s.find("Krusty-Burger");
        size_t foundT = s.find("Tavern");

        if (foundK != string::npos && foundT != string::npos) {
            cout << itr->first << endl;
        }
    }
}

void peoplePlaces::notVisitedKH() {
    map<string, string>::iterator itr;
    cout << "People who did not visit both the Krusty-Burger and Home" << endl;
    for (itr = peoplePlaceMap.begin(); itr != peoplePlaceMap.end(); ++itr) {
        string s = itr->second;

        size_t foundK = s.find("Krusty-Burger");
        size_t foundH = s.find("Home");

        if (foundK == string::npos && foundH == string::npos) {
            cout << itr->first << endl;
        }
    }
}

void peoplePlaces::visitedKSnotT() {
    map<string, string>::iterator itr;
    cout << "People who visited both the Krusty-Burger and School but did not visit the Tavern and Home" << endl;
    for (itr = peoplePlaceMap.begin(); itr != peoplePlaceMap.end(); ++itr) {
        string s = itr->second;

        size_t foundK = s.find("Krusty-Burger");
        size_t foundH = s.find("Home");
        size_t foundS = s.find("School");
        size_t foundT = s.find("Tavern");



        if (foundK != string::npos && foundS != string::npos && foundT == string::npos && foundH == string::npos) {
            cout << itr->first << endl;
        }
    }
}

void peoplePlaces::remove() {
    map<string, string>::iterator itr;
    cout << "Removing people who have visited all the places from the list." << endl;
    for (itr = peoplePlaceMap.begin(); itr != peoplePlaceMap.end(); ++itr) {
        string s = itr->second;

        size_t foundK = s.find("Krusty-Burger");
        size_t foundH = s.find("Home");
        size_t foundS = s.find("School");
        size_t foundT = s.find("Tavern");



        if (foundK != string::npos && foundS != string::npos && foundT != string::npos && foundH != string::npos) {
            //Remove the map values that match
        }
    }
}
