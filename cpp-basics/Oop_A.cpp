#include <iostream>

class Car
{
public:
    std::string number;
    double mileage;

    void displayNumber()
    {
        std::cout << "Number: " << number << std::endl;
    }

    void showMieage()
    {
        std::cout << "Mileage: " << mileage << std::endl;
    }
};

int main()
{
    Car c1;
    c1.number = "HR02X6418";
    c1.mileage = 14.6;
    c1.displayNumber();
    c1.showMieage();
}
