/*
    Name: Rahul R Davanam.
    Description: .cpp file of Car database program
 */

#include "Car.h"

Car::Car() { // Declaring our constructor class
    carId = 0;
    soldStatus = false;
    priceEuro = 0;
}

Car::Car(int id, bool statusSold) { // Defining our constructor class 
    carId = id;
    soldStatus = statusSold;
}

Car::~Car() {} // Defining our destructor class

int Car::getID() { // Function to obtain ID of the car
    return carId;
}

int Car::getPrice() { // Function to obtain price of the car
    return priceEuro;
}

bool Car::getStatus() { // Function to obtain the sold status of the car 
    return soldStatus;
}

void Car::setPrice(int price) { // Function to set the price of the car 
    priceEuro = price;
}

void Car::sellCar() { // Function to sell the car
    soldStatus = true;
}