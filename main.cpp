#include <iostream>
#include"peoplePlaces.hpp"

int main() {
    map<string,string> peopleMap;
    peoplePlaces p;
    p.readFile();
    p.printAll();
    p.visitedKT();
    p.notVisitedKH();
    p.visitedKSnotT();
    p.remove();
    cout << "\nNew Map\n" << endl;
    p.printAll();
    std::cout << "Hello, World!" << std::endl;


    return 0;
}