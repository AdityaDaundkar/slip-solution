//Slip 10 - B) Create a C++ class City with data members City_code, City_name, population. Write necessary member functions for the following: i, Accept details of n cities ii. Display details of n cities in ascending order of population. iii. Display details of a particular city. (Use Array of object and to display city information use manipulators.)
 //Solution:
#include <iostream>
#include <iomanip>
#include <algorithm>

class City {

   

public:
 int city_code;
    std::string city_name;
    int population;
    void accept_details() {
        std::cout << "Enter City Code: ";
        std::cin >> city_code;
        std::cout << "Enter City Name: ";
        std::cin >> city_name;
        std::cout << "Enter Population: ";
        std::cin >> population;
    }

    void display_details() {
        std::cout << std::setw(10) << city_code
                  << std::setw(20) << city_name
                  << std::setw(15) << population << std::endl;
    }

    bool operator<(const City& other) const {
        return population < other.population;
    }
};

int main() {
    int n;
    std::cout << "Enter number of cities: ";
    std::cin >> n;

    City* cities = new City[n];

    for (int i = 0; i < n; i++) {
        std::cout << "Enter details for City " << i+1 << ":" << std::endl;
        cities[i].accept_details();
    }

    // Sort the cities by population in ascending order
    std::sort(cities, cities+n);

    // Display the details of all the cities
    std::cout << std::setw(10) << "City Code"
              << std::setw(20) << "City Name"
              << std::setw(15) << "Population" << std::endl;
    for (int i = 0; i < n; i++) {
        cities[i].display_details();
    }

    // Display details of a particular city
    int city_code;
    std::cout << "Enter City Code to display details: ";
    std::cin >> city_code;
    for (int i = 0; i < n; i++) {
        if (cities[i].city_code == city_code) {
            std::cout << std::setw(10) << "City Code"
                      << std::setw(20) << "City Name"
                      << std::setw(15) << "Population" << std::endl;
            cities[i].display_details();
            break;
        }
    }

    delete[] cities;

    return 0;
}

