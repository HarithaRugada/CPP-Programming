#include <iostream>

using namespace std;

int main() 
{
    int n, prime;
    cout << "enter a number to get its prime factors > ";
    cin >> n;

    for(int i = 2; i <= n; i++)
    {
        if((n % i) == 0)
        {
            prime = 0;
            for(int j = 2; j <= (i/2); j++)
            {
                if((i%j) == 0 )
                    prime = 1;
            }
            if(prime == 0)
                cout << i << " is a prime factor of " << n << endl;
        }
    }
}