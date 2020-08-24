#include <iostream>

using namespace std;

int main() 
{
    int date, month;
    cout << "enter the date > ";
    cin >> date;
    cout << "enter the month > ";
    cin >> month;
    if((month == 3 && date >= 20 && date <= 31) || (month == 4 && date >=  1 && date <= 30) 
        || (month == 5 && date >=  1 && date <= 31) || (month == 6 && date >=  1 && date <= 20))
        cout << "true";
    else
        cout << "false";    
}