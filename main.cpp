#include <iostream>
#include"peoplePlaces.hpp"

int main() {
    map<string,string> peopleMap;
    peoplePlaces p;
    p.readFile();
    p.printAll();
    p.visitedKT();

    std::cout << "Hello, World!" << std::endl;


    return 0;
}