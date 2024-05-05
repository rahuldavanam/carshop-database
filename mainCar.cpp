/*
    Name: Rahul R Davanam
    Description: main Car database program
*/

#include <iostream>
#include "Car.h"

int main() {
    int carPrice; // Variable to give the price of car 
    int carCount = 0; // Initialising counter for list 
    Car carList[100]; // Declaring array as an object of class
    int choice; // Variable for selecting various options
    do {
        std::cout << "===================" << std::endl;
        std::cout << "1 -- Add a car" << std::endl;
        std::cout << "2 -- Sell a car" << std::endl;
        std::cout << "3 -- List all cars" << std::endl;
        std::cout << "0 -- Exit" << std::endl;
        std::cout << "===================" << std::endl;
        std::cout << "Your choice: ";
        std::cin >> choice;
        std::cout << std::endl;
        switch (choice) {
            case 1: // Program block to add a car to the list
                if (carCount < 100) {
                    std::cout << "Enter the price of the car: ";
                    std::cin >> carPrice;
                    // Assigning the output of the function to the array 
                    carList[carCount] = Car(carCount, false);
                    carList[carCount].setPrice(carPrice);  // Inputting the car price
                    carCount++;
                    std::cout << std::endl;
                    break;
                } else {
                    std::cout << "Sorry. Storage is full!" << std::endl;
                }
            case 2: // Program block to sell a car input by user int carno;
                int carno;
                std::cout << "Which car do you want to sell: ";
                std::cin >> carno;
                // Condition to check whether the input is within range 
                if (carno >= 0 && carno <= carCount) {
                    carList[carno].sellCar();
                    std::cout << "Car sold successfully" << std::endl;
                    std::cout << std::endl;
                } else {
                    std::cout << "Invalid car ID" << std::endl;
                }
                break;
            case 3: // Program block to print the list of all cars input by user 
                for (int i = 0; i < carCount; i++) { 
                    std::cout << "No. " << i << " --> " << carList[i].getPrice();
                    std::cout << "$ ";
                    if (carList[i].getStatus()== true) { // Printing sold status
                        std::cout << "SOLD" << std::endl; 
                    } else {
                        std::cout << "OK" << std::endl;
                    }
                }
                std::cout << std::endl;
                break;
            case 0: // Program block to exit the program
                std::cout << "The program is now exiting" << std::endl; return 0;
                break;
            default: // Default case
                std::cout << "Invald choice. Please try again." << std::endl;
                break;
        }
    } while(true);
    return 0;
}
