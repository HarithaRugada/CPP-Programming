#include <iostream>
#include <ctime>

using namespace std;

int main() 
{
    srand(time(0));
    int diceValue = (rand() % 6) + 1;
    cout << "Face Value obtained is " << diceValue;
}