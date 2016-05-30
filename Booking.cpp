#include "Booking.hpp"
#include "SeatType.hpp"
#include <iostream>

Booking::Booking() : passenger("FIRST_UNKNOWN", "LAST_UNKNOWN", "HELL", SeatType::UNKNOWN){};
Booking::Booking(const Passenger& passenger) :
passenger(passenger.getFirst(), passenger.getLast(), passenger.getPassengerDest(), passenger.getSeat()) {};

void Booking::bookingDetails() const{
    std::cout << "Detials is as follows: \n";
    std::cout << passenger.getFirst() << " " << passenger.getLast() << ". Flying to: " << passenger.getPassengerDest() <<". " << getSeatType(passenger.getSeat()) << std::endl;
}

void Booking::seatAvailability(const Passenger& pass, Airport& port) const{
    for(auto it = port.getDestinationPlanes().begin(); it != port.getDestinationPlanes().end(); ++it) {
        if (it->first == pass.getPassengerDest()) {
            for (std::vector<Plane>::size_type i = 0; i < port.getDestinationPlanes().find(pass.getPassengerDest())->second.size(); ++i) {
                
                if ((getSeatType(pass.getSeat()) == "First") && port.getDestinationPlanes().find(pass.getPassengerDest())->second.at(i).getFirst() > 0) {
                    port.getDestinationPlanes().find(pass.getPassengerDest())->second.at(i).decreaseSeat(pass.getSeat());
                }
            }
        }
    }
}