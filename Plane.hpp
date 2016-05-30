#ifndef Plane_hpp
#define Plane_hpp

#include <string>
#include <vector>
#include "SeatType.hpp"

class Plane{
public:
    Plane();
    //Plane(std::string name, int first, int business, int economy);
    
    std::string generatePlane();
    std::string getName() const;
    int getFirst() const;
    int getBusiness() const;
    int getEconomy() const;
    void setFirst(int);
    void setBusiness(int);
    void setEconomy(int);
    void decreaseSeat(const SeatType&);
    
private:
    std::string name;
    int first;
    int business;
    int economy;
    std::vector<std::string> listOfPlanes;
};

#endif /* Plane_hpp */
 