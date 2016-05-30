#include "Passenger.hpp"
#include "SeatType.hpp"
#include <string>

Passenger::Passenger() : first("UNKNOWN"), last("UNKNOWN"), flyTo("HELL"), seat(SeatType::UNKNOWN){};
Passenger::Passenger(std::string first, std::string last, std::string flyTo, SeatType seat) : first(first), last(last), flyTo(flyTo), seat(seat){};

std::string Passenger::getFirst() const{
    return first;
};
 
std::string Passenger::getLast() const{
    return last;
};

std::string Passenger::getPassengerDest() const{
    return flyTo;
}

SeatType Passenger::getSeat() const{
    return seat;
}