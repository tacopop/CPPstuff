/* Write a program that asks for the names of three runners and the time it took each of them to finish a race. The program should display who came in first, second, and third place.
 
 Input Validation: Only accept positive numbers for the times.
 */

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    
    string runnerName1,runnerName2,runnerName3;
    int runTime1,runTime2,runTime3;
    string firstPlace,secondPlace,thirdPlace;
    
    //Get names
    
    cout << "Enter name of runner #1: ";
    cin >> runnerName1;
    
    cout << "Enter name of runner #2: ";
    cin >> runnerName2;
    
    cout << "Enter name of runner #3: ";
    cin >> runnerName3;
    
    //Get times for runners
    cout << "Enter time for runner #1: ";
    cin >> runTime1;
    
    cout << "Enter time for runner #2: ";
    cin >> runTime2;
    
    cout << "Enter time for runner #3: ";
    cin >> runTime3;
    
    //Make sure user entered only positive numbers
    if(runTime1 < 0 || runTime2 < 0 || runTime3 < 0)
    {
        cout << "Please be sure to enter only positive numbers for runner times...";
        return 0;
    }
    
    //Check to see which time was lowest
    
    //Runner 1 won
    if(runTime1 < runTime2 && runTime1 < runTime3)
    {
        firstPlace = runnerName1;
        //Check to see who came in second
        
        if(runTime2 > runTime3)
        {
            secondPlace = runnerName3;
            thirdPlace = runnerName2;
        }
        
        else
        {
            secondPlace = runnerName2;
            thirdPlace = runnerName3;
        }
        
    }
    
    //Runner 2 wins
    else if(runTime2 < runTime1 && runTime2 < runTime3)
    {
        firstPlace = runnerName2;
        
        //Check to see who came in second
        if(runTime1 > runTime3)
        {
            secondPlace = runnerName3;
            thirdPlace = runnerName1;
        }
        
        else
        {
            secondPlace = runnerName1;
            thirdPlace = runnerName3;
        }
        
    }
    //Runner 3 wins
    
    else
    {
        firstPlace = runnerName3;
        
        //Check to see who came in second
        if(runTime1 > runTime2)
        {
            secondPlace = runnerName2;
            thirdPlace = runnerName1;
        }
        
        else
        {
            secondPlace = runnerName1;
            thirdPlace = runnerName2;
        }
    }
    
    cout << "First place: " << firstPlace << "\nSecond place: " << secondPlace << "\nThird place: " << thirdPlace << endl;
    
    return 0;
}
