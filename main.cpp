#include <iostream>
#include <string>

class Car {
public:
    std::string brand;
    std::string model;
    int year;

    void displayInfo() {
        std::cout << "Brand: " << brand << "\n";
        std::cout << "Model: " << model << "\n";
        std::cout << "Year: " << year << "\n";
        std::cout << "--------------------\n";
    }
};

int main() {
    Car car1;
    car1.brand = "Toyota";
    car1.model = "Camry";
    car1.year = 2022;

    Car car2;
    car2.brand = "Ford";
    car2.model = "Mustang";
    car2.year = 1969;

    std::cout << "Car 1 Details:\n";
    car1.displayInfo();

    std::cout << "Car 2 Details:\n";
    car2.displayInfo();

    return 0;
}
