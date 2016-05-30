#ifndef Airport_hpp
#define Airport_hpp

#include <iostream>
#include <vector>
#include <map>
#include "Plane.hpp"

class Airport{
public:
    Airport(std::string airportName, std::string location, int ALL_DESTINATIONS);
    void initializeDestinations();
    void initializePlanes(); 
    void destinationFlights();
    const std::vector<std::string>& getDestinations() const;
    int getDestSize() const;
    std::map<std::string, std::vector<Plane>>& getDestinationPlanes();
    std::string getName() const;
    std::string getLocation() const;
    
private:
    /**
     * Size of destination cities.
     */
    const int DEST_SIZE;
    
    /**
     *  Number of Planes flying to each city.
     */
    const int NUMBER_OF_PLANES;
    
    /**
     *  Name of Airport
     */
    std::string name;
    
    /**
     *  City where airport is located
     */
    std::string location;
    
    /**
     *  A map of [key] Destinations and [values] All planes that flies to each of the respective destinations.
     */
    std::map<std::string, std::vector<Plane>> destinationPlanes;
    
    /**
     *  A vector of all random cities our Airport flies to. Number of cities we fly to can be adjusted in the constructor DEST_SIZE
     */
    std::vector<std::string> destinations;
    
};

#endif /* Airport_hpp */
