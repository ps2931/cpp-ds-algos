/////////////////////////
// Strucutres
/////////////////////////

#include <iostream>
#include <string>

// Struct: Structure is a collection of variables of
// different data types under a single name.
struct Person {
    int dob;
    int age;
    char sex;
};

int main() {
    // Declare a struct variable
    Person bill;
    // Initialize struct variable
    bill.dob = 1965;
    bill.age = 45;
    bill.sex = 'M';

    // Declare and define
    Person jackson {1974, 39, 'M'};

    // size of struct
    std::cout << sizeof(bill) << std::endl; // 12

    // Accessing struct fields
    std::cout << "Bill's age: " << bill.age << std::endl;
    std::cout << "Michael's dob " << jackson.dob << std::endl;

    return 0;
}

