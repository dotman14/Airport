#ifndef Booking_hpp
#define Booking_hpp

#include <iostream>
#include <string>
#include "Airport.hpp"
#include <vector>
#include "Passenger.hpp"

class Booking{ 
public:
    Booking();
    Booking(const Passenger& passenger);
    void bookingDetails() const;
    void seatAvailability(const Passenger&, Airport&) const;
    
private:
    Passenger passenger;
};

#endif /* Booking_hpp */
