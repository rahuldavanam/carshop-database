/*
    Name: Rahul R Davanam
    Description: .h file of Carshop database program
*/

#ifndef CAR_H
#define CAR H

class Car {
    private:
        // Defining the member variables
        int priceEuro;
        bool soldStatus;
        int carId;
    public:
        // Defining all the relevant functions for the database 
        Car(); // Constructor class 
        Car(int id, bool soldStatus); 
        ~Car(); // Destructor class
        // Initialising all relevant functions
        int getID();
        int getPrice();
        bool getStatus();
        void setPrice(int price);
        void sellCar();
};
#endif