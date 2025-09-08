#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullName;
    string cys;
    string bday;
    string motto;
    
    cout << "Please input Full Name: ";
    getline(cin, fullName);
    
    cout << "Input course, year, section: ";
    getline(cin, cys);
    
    cout << "Input date of birth: ";
    getline(cin, bday);
    
    cout << "Tell us your motto: ";
    getline(cin, motto);
    
    cout << "Hi! I'm " << fullName << " of " << cys 
         << ". Welcome to Data Structures and Algorithm! My Birthday is on " 
         << bday << ". and my motto/motivation in life is: " << motto;
    
    return 0;
}