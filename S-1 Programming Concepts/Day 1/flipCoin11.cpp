#include <iostream>
#include <ctime>

using namespace std;

int main() 
{
    int i = 1, headWinCount = 0, tailWinCount = 0;
    srand(time(0));
    while (headWinCount < 11 && tailWinCount < 11)
    {
        if((rand() % 2) == 1 )
            headWinCount += 1;
        else
            tailWinCount += 1;    
    }
    
    if(headWinCount > tailWinCount)
        cout << "Heads has won 11 times";
    else
        cout << "Tails has won 11 times";
}