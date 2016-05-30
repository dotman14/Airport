#include <iostream>
#include "SeatType.hpp"

std::string getSeatType(SeatType type){
    
    std::string str;
    
    switch (type){ 
            
        case SeatType::FIRST_CLASS :
            str = "First";
			break;
        case SeatType::BUSINESS_CLASS:
            str = "Business";
			break;
        case SeatType::ECONOMY_CLASS:
            str = "Economy";
			break;
        case SeatType::UNKNOWN:
            str = "Unknown";
			break;
    }
    return str;
}