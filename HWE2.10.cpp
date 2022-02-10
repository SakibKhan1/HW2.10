/*
Author: Sakib Khan
Course: CSCI-135
Instructor: Tong Yi 
Assignment: HW 2.10
This program will take 3 user inputs relating to the number of gallons, fuel efficiency in mpg and the price per gallon 
and calculate the cost per 100 miles and how far the car can go given the user inputs.
*/

#include <iostream>

using namespace std;

int main()
{
    double gallons, fuel, price;
    //All 3 variables declared double to account for decimals
    cout<<"Enter the number of gallons in the tank: ";
    //3 user inputs needed to find cost per 100 miles and how many miles you can go.
    cin >> gallons; 
    cout << "Enter the fuel efficiency in miles per gallon: ";
    cin >> fuel; 
    cout << "Enter the price of gas per gallon: ";
    cin >> price;
    cout << "The cost per 100 miles is " << price * (100/fuel) << endl;
    cout << "And with this much gas in the tank this car can go " << (fuel * gallons) << " miles." << endl;

    return 0;
}
