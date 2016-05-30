#ifndef SeatType_hpp
#define SeatType_hpp

#include <iostream>

enum class SeatType{
    FIRST_CLASS, BUSINESS_CLASS, ECONOMY_CLASS, UNKNOWN
}; 

std::string getSeatType(SeatType type);

#endif /* SeatType_hpp */
