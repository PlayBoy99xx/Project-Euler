/*
    Problem 3:
                 Largest Prime Factor
*/
#include <iostream>
using namespace std;

int main()
{
    bool isPrime = false;
    long long int num = 600851475143;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0) //Checking if number if factor or not
        {
            // cout << i << endl;
            for (int j = 2; j <= i - 1; j++) //Checking if that factor is prime or not
            {
                // cout << i << endl;
                if ((i % j == 0))
                {
                    isPrime = false;
                    break;
                }
                else
                {
                    isPrime = true;
                }
            }
            if (isPrime)
            {
                cout << i << endl;
            }
        }
    }
}
