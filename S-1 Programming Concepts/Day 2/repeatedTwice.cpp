#include <iostream>
using namespace std;

int main()
{
    int start = 0, end = 100, position = 0, repeatArray[10];
    for (int i = start; i <= end; i++)
    {
        if(i % 11 == 0 && i != 0)
            repeatArray[position++] = i;
    }

    for(int i = 0; i < position; i++)
    {
        cout << "element at position " << i << " is " << repeatArray[i] << endl;
    }
}