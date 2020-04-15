/*
    Problem 5

    2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
    What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
#include <iostream>
using namespace std;

int main()
{
    int num = 20;
    int loop = true;
    int i;
    // int temp = 0;
    int counter = 0;

    while (loop)
    {
        num++;
        counter = 0;
        // cout << "Value of num: " << num << endl;
        for (i = 1; i <= 20; i++)
        {
            // cout << "Value of i: " << i << endl;
            if (num % i == 0)
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        // cout << "value of counter is: " << counter << endl;
        if (counter == 20)
        {
            loop = false;
            // temp = num;
            // cout << "Last if is executed at counter=10"<<endl;
        }
    }
    cout << num;

    return 0;
}
