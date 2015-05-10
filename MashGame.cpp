/*
 Team G
 Meza, Stephen; Mourlam, Matthew; Murphy, Paul; Nadiadwala, Omar
 30 April 2015
 LAB 3.5: Working with characters
 */
//Work with characters to get the strings from the users.
//
//Write a program that plays a word game with the user. The program should ask the user to enter the following:
//
//His or her name (e.g. John Doe)The name of the city (e.g. Salt Lake City)His or her age (e.g. 18)The name of the college (e.g. UC Berkeley)A profession (e.g. electrical engineerA type of animal (e.g. dog)A pet's name (e.g. Mr. Arthur
//                                                                                                                                                         After the user has entered these items, the program should display the following story, inserting the user's input into the appropriate locations:
//                                                                                                                                                         
//                                                                                                                                                         There once was a person named NAME who lived in CITY. At the age of AGE, NAME went to college at COLLEGE. NAME graduated and went to work as a PROFESSION. Then, NAME adopted a(n) ANIMAL named PETNAME. They both lived happily ever after.

#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    
    //Input variables
    string name,city,age,college,profession,animal,petname;
    string story;
    
    cout << "Let's play a game! Press the enter key to start...";
    cin.get();
    
    //Get user's name
    cout << "Please enter your name: ";
    getline(cin,name);
    
    //Get age
    cout << "Please enter your age: ";
    cin >> age;
    cin.ignore();
    
    //Get city
    cout << "Please enter your city: ";
    getline(cin,city);
    
    //Get college
    cout << "Please enter your college: ";
    getline(cin,college);
    
    //Get profession
    cout << "Please enter your profession: ";
    getline(cin,profession);
    
    //Get pet type
    cout << "Please enter your pet: ";
    getline(cin,animal);
    
    //Get the pet name
    cout << "Please enter your pet's name: ";
    getline(cin,petname);
    
    //Generate story string
    story = "There once was a person named " + name + " who lived in " + city + ". At the age of " + age + ", " + name + " went to college at " + college + ". " + name + " graduated and went to work as a " + profession + ". Then, " + name + " adopted a(n) " + animal + " named " + petname + ". They both lived happily ever after.\n\n";
    
    //Output the story inserting users input in certain places
    cout << story;
    
    return 0;
}
