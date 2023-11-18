//
// Created by Darwish on 10/30/23.
//
#include <iostream>
#include <vector>
#include "index.h"
using namespace std;
void displayCarrots() {
    int carrots; // declare an integer variable

    carrots = 25; // assign a value to the variable
    cout << "I have ";
    cout << carrots; // display the value of the variable
    cout << " carrots. ";
    cout << endl;
    carrots = carrots - 1; // modify the variable
    cout << "Crunch, crunch. Now I have " << carrots << " carrots. " << endl;

    int steinway;
    int baldwin;
    int yamaha;
    yamaha = baldwin = steinway = 88;
    cout << yamaha << baldwin << steinway << endl;
};

void getInfo() {
    int carrots;
    cout << "How many carrots do you have?" << endl;
    cin >> carrots; // c++ input
    cout << "Here are two more. ";
    carrots = carrots + 2;
    // the next line concatenates output
    cout << "Now you have " << carrots << " carrots." << endl;
}

void mathSqrt() {
    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
         << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
}

void simon(int);
void simon(int n) {
    cout << "Simon says touch your toes " << n << " times." << endl;
    // void functions don't need return statements
}