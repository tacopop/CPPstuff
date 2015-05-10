//
//  MurphyEugene_a4.cpp
//
//
//  Created by Paul on 5/3/15.
// assignment 4 : city address
// This program takes user input, creates random numbers and display lotto tickets

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string name, address, city, state;
    int zipCode, numOne, numTwo, numThree, numFour, numFive, numMega;
    unsigned seed = time(0);
    srand(seed);
    
    //request address and personal info
    cout << "Please enter first and last name: ";
    getline(cin, name);
    
    cout << "Please enter your address: ";
    getline(cin, address);
    
    cout << "Please enter your city: ";
    getline(cin, city);
    
    cout << "Please enter your state: ";
    getline(cin, state);
    
    cout << "Please enter your zip code: ";
    cin >> zipCode;
    cout << endl;
    
    //generate 5 random numbers for the lotto numbers
    numOne = 1 + rand() % (75 - 1 + 1);
    numTwo = 1 + rand() % (75 - 1 + 1);
    numThree = 1 + rand() % (75 - 1 + 1);
    numFour = 1 + rand() % (75 - 1 + 1);
    numFive = 1 + rand() % (75 - 1 + 1);
    
    // generate 1 mega number
    numMega = 1 + rand() % (15 - 1 + 1);
    
    // display personal info and lotto numbers
    
    cout << name << endl;
    cout << address << endl;
    cout << city << ", " << state << " "  << zipCode << endl;
    
    cout << endl; // space for formatting
    
    cout << "The winning lotto numbers for Mega Millions are: " << endl;
    
    
    cout << numOne << " " << numTwo << " " << numThree << " " << numFour << " " << numFive << endl;
    cout << "Mega: " << numMega ;
    
    return 0;
}
