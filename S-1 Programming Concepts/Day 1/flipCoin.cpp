#include <iostream>
#include <ctime>

using namespace std;

int main() 
{
    srand(time(0));
    int  value = rand() % 2 ;
    (value == 0) ? cout << "Heads" : cout << "Tails";
}