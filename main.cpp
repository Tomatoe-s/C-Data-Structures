#include <iostream>
#include <string>
#include "Hashmap.hpp"
int main() {

    HashMap<std::string,std::string> myMap;
    myMap["bloop"] = "hi!";
    std::cout << myMap["bloop"];
    return 0;
}
