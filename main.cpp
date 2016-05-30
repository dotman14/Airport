#include <iostream>
#include <string>
#include <ctime>
#include "Airport.hpp"
#include "Passenger.hpp"
#include "Booking.hpp"
#include "Plane.hpp"
#include "SeatType.hpp"
 
int main(int argc, const char * argv[]) {
    
    //srand((unsigned int)(time(NULL)));
    
    Plane p;
    Airport air("John F. Kennedy Airport", "New York", 3);
    
    std::cout << "Welcome to " << air.getName() << ", " << air.getLocation() << ". \n\nWe currently fly to the following cities:\n";
    
    for(int i = 0; i < air.getDestinations().size(); i++)
        std::cout << air.getDestinations().at(i) << ", ";
    
    std::cout << std::endl;std::cout << std::endl;
    
    air.destinationFlights();
    
    std::cout << std::endl;
    
    Passenger passenger("Oyedotun","Oyesanmi", "Paris", SeatType::BUSINESS_CLASS);
    Booking book(passenger);
    book.seatAvailability(passenger, air);std::cout << std::endl;
    
    return 0;
}


