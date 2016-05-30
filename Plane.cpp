#include "SeatType.hpp"
#include "Plane.hpp"
#include <string>
#include <random>
#include <algorithm>
#include <iterator>

/**
 *  <#Description#>
 *
 *  @param generatePlane This is used to generate Plane name, number of seats for first, business and economy seats.
 *
 *  @return <#return value description#>
 */
Plane::Plane() : name(generatePlane()), first((rand() % 5) + 2), business((rand() % 5) + 2), economy((rand() % 5) + 2)
{
};

int Plane::getFirst() const{
    return first;
}

void Plane::setFirst(int newFirst){
    first = newFirst;
}

void Plane::setBusiness(int newBusiness){
    business = newBusiness;
}

void Plane::setEconomy(int newEconomy){
    economy = newEconomy;
}

void Plane::decreaseSeat(const SeatType& seat){
    if(seat == SeatType::FIRST_CLASS){
        setFirst(getFirst() - 1);
    }
    
    if(seat == SeatType::BUSINESS_CLASS){
        setBusiness(getBusiness() - 1);
    }
    
    if(seat == SeatType::ECONOMY_CLASS){
        setEconomy(getEconomy() - 1);
    }
}

int Plane::getEconomy() const{ 
    return economy;
}

int Plane::getBusiness() const{
    return business;
}

std::string Plane::getName() const{
    return name;
}

/**
 *  Used to randomly generate a Plane name.
 *
 *  @return Returns a phone name.
 */
std::string Plane::generatePlane(){
    listOfPlanes = { "Airbus A319LR", "Boeing 777","Airbus A320-200", "Airbus A321-200", "Boeing 777X",
                     "Airbus A330-200","Airbus A330-300", "Airbus A340-600", "Airbus A350", "Airbus A380-800",
                     "Boeing 777-200","Boeing 777-300","Boeing 787-8","Airbus A320","Airbus A320 Neo", "Airbus A350"
                   };
    std::random_device random;
    std::mt19937 rand_planes(random());
    std::shuffle(listOfPlanes.begin(), listOfPlanes.end(), rand_planes);
    std::string getPlane = listOfPlanes.at(1);
    return getPlane;
}