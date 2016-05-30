#include "Airport.hpp"
#include <iostream>
#include <random>
#include <algorithm>
#include <iterator>
#include <map>
#include <vector>
#include <string>


Airport::Airport(std::string name, std::string location, int size) : name(name), location(location), DEST_SIZE((size > 5) ? 2 : size), NUMBER_OF_PLANES(1){
    destinations.reserve(DEST_SIZE);
    initializeDestinations();
    
    std::vector<Plane> getPlanes;
    getPlanes.reserve(NUMBER_OF_PLANES);
    
    for(int j = 0; j < DEST_SIZE; j++){
        for(int i = 0; i < NUMBER_OF_PLANES; i++){
            getPlanes.push_back(Plane());
        }
        destinationPlanes[destinations.at(j)] = getPlanes;
        getPlanes.clear();
    }
};

void Airport::initializeDestinations(){
    std::vector<std::string> cities = { "Chicago","San Jose", "Yining", "Berlin","Ortaleza","Bern", "South Bend", "Lagos",
                                        "Beijing","Pyonyang","Xieng Khouang","Kingston","Seoul", "Berlin", "London",
                                        "Wichita","Cape of Good Hope","Mangalore","Tripoli","Madrid", "Abuja", "Bamako",
                                        "Santiago","Rijeka","Jinjiang","Ottawa","Deer Lake","Washington", "Rome",
                                        "Paris","Belo Horizonte", "Isles of Scilly","Luxor","Port Moresby","Mauritius"
                                      };
    
    std::random_device random;
    std::mt19937 rand_airports(random());
    std::shuffle(cities.begin(), cities.end(), rand_airports);
    for (int i = 0; i < DEST_SIZE; i++) {
        destinations.push_back(cities.at(i));
        cities.erase(cities.begin() + i);
    }
}

void Airport::destinationFlights() {
    std::map<std::string, std::vector<Plane>>::iterator it;
    
    for (it = destinationPlanes.begin(); it != destinationPlanes.end(); it++ ){
        std::cout << it->first << "\n";
        for(int i = 0; i < NUMBER_OF_PLANES; i++){
            std::cout << it->second.at(i).getName() << "  "<<
            it->second.at(i).getFirst() << "  " <<
            it->second.at(i).getBusiness() << "  " <<
            it->second.at(i).getEconomy() << "\n";
        }
        std::cout << std::endl;
    }
}

std::string Airport::getName() const{
    return name;
}

std::string Airport::getLocation() const{
    return location;
}

const std::vector<std::string>& Airport::getDestinations() const{
    return destinations;
}

std::map<std::string, std::vector<Plane>>& Airport::getDestinationPlanes() {
    return destinationPlanes;
}

int Airport::getDestSize() const{
    return DEST_SIZE;
}