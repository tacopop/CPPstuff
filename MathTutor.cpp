/*
 30 April 2015
 LAB 3.5: Working with characters
 */

/*
 Generate two random numbers, add them and wait for the user to press a key to display the correct answer.
 
 Write a program that can be used as a Math tutor for a young student. The program should display two random numbers to be added (use setw), such as:
 
 247
 + 129
 -----
 The program should then pause while the student works out the problem. When the student is ready to check the answer, he or she can press a key and the program will display the correct solution.
 
 247
 + 129
 -----
 376 */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int main(int argc, const char * argv[]) {
    
    //Declare random number + solution variables
    int randNum1, randNum2, solution;
    
    //Declare our min and max bounds for random number
    int minBounds = 1;
    int maxBounds = 999;
    
    //Seed random number
    srand(static_cast<int>(time(0)));
    
    //Generate two random numbers using min + max bounds
    randNum1 = minBounds + rand()%(maxBounds-minBounds+1);
    randNum2 = minBounds + rand()%(maxBounds-minBounds+1);
    
    //Calculate our final solutions by adding rand num 1 with rand num 2
    solution = randNum1 + randNum2;
    
    //Display expression
    cout << right << setw(5) << randNum1 << endl;
    cout << left << setw(1) << "+ " << right << setw(3) << randNum2 << endl;
    cout << "------  ";
    
    //Wait for user to press enter key
    cout << "Press ENTER to see solution...";
    cin.get();
    //Display solution
    cout << right << setw(5) << solution << "\n\n";
    
    
    return 0;
}
