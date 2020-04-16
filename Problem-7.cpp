/*
    Problem 7
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/
#include <iostream>
using namespace std;

bool isPrime(int);

int main()
{
    bool prime;
    int num = 2;
    int counter = 2;
    // cout << 2 << endl;
    while (counter <= 10001)
    {
        num++;
        prime = isPrime(num);
        if (prime)
        {
            // cout << num++ << endl;
            counter++;
        }
    }

    cout << num;

    return 0;
}

bool isPrime(int num)
{
    bool isPrime = false;
    for (int i = 2; i <= (num - 1); i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
        else
        {
            isPrime = true;
        }
    }
    return isPrime;
}
