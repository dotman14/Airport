#ifndef Passenger_hpp
#define Passenger_hpp

#include <iostream>
#include <string>
#include "SeatType.hpp"

class Passenger{ 
public:
    Passenger();
    Passenger(std::string first, std::string last, std::string flyTo, SeatType);
    
    std::string getFirst() const;
    std::string getLast() const;
    std::string getPassengerDest() const;
    SeatType getSeat() const;
    
private:
    std::string first;
    std::string last;
    std::string flyTo;
    SeatType seat;
};

#endif /* Passenger_hpp */
