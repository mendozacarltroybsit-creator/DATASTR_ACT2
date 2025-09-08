#include <iostream>
using namespace std;

int main() {
    int hours, minutes;
    
    cout << "Enter hours: ";
    cin >> hours;
    
    cout << "Enter minutes: ";
    cin >> minutes;
    
    int totalMinutes = (hours * 60) + minutes;
    
    cout << hours << " hours and " << minutes << " minutes = " 
         << totalMinutes << " total minutes" << endl;
    
    return 0;
}