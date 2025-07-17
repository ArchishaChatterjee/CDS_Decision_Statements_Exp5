// EXP 5D : Traffic Lights using Switch-case
// Archisha Chatterjee
// PRN : 24070123021

#include <iostream>
using namespace std;

int main() {
   int c;
   cout <<"Green : 1" << endl << "Yellow : 2" << endl << "Red : 3" << endl <<  "Enter color of traffic light : ";
   cin >> c;
   
   switch (c){
       case 1:
       cout << "Light is green. You may go";
            break;
       case 2:
       cout << "Light is yellow, please proceed with caution";
            break;
       case 3:
       cout << "Light is red. Stop.";
            break;
        default :
        cout << "Please enter a valid input";
   }

    return 0;
}
