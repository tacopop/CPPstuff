//
//  MurphyEugene_a4.cpp
//
//
//  Created by Paul on 5/3/15.
//
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double duration = 0.0; // initializing variables
    double time = 0.0;
    double min = 0.0;
    double cost = 0.0;
    
    cout << "Please enter Start Time of call (HH.MM): " ; // request user input for start time
    cin >> time;
    
    min = time - static_cast<int>(time); // cast only the minutes to assist in checking valid responses
    
   if (time >= 24.00 || min >= .6 || time < 0 ) // check for valid responses
   {
       cout << "Invalid Request";
   }
   else
   {
       cout << "Please enter duration of the call (HH.MM): " ; // if valid request user to input length of call
       cin >> duration;
   }
    
    duration = duration * 100; // convert duration of call to whole minutes for cacluclation
 
   
   if ( time < 06.59) // if statements to apply correct charge depending on time of start call
   {
       cost = duration* 0.12;
   }
   else if ( time < 19.00)
   {
       cost = duration * 0.55;
   }
   else if ( time < 23.59 )
   {
       cost = duration  * 0.35;
   }
   else
   {
        cout << "How did we get here? Try again " << endl;
   }
    
    
    cout << fixed << setprecision(2) << "The cost of your phone call today is: $" << cost ; // display chargers for customer
   
    
    
    return 0;
}
