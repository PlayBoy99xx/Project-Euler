/*
    Problem 6
The sum of the squares of the first ten natural numbers is,

12+22+...+102=385
The square of the sum of the first ten natural numbers is,

(1+2+...+10)2=552=3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025−385=2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
#include <iostream>
using namespace std;

int calSquareOfSum();
int calSumOfSquare();

int main()
{
    int squareOfSum;
    int sumOfSquare;

    //First calculating sum of square of first 10 natural numbers;

    sumOfSquare = calSumOfSquare();
    cout << "Sum of squares: " << sumOfSquare << endl;

    squareOfSum = calSquareOfSum();
    cout << "Square of sum: " << squareOfSum<<endl;

    cout << "Diffrence of Sum of squares and square of sum is: " << (squareOfSum - sumOfSquare) << endl;

    return 0;
}
int calSquareOfSum()
{
    int sum = 0;

    for (int i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }
    return (sum * sum);
}
int calSumOfSquare()
{
    int sum = 0;

    for (int i = 1; i <= 100; i++)
    {
        sum = sum + (i * i);
    }

    return sum;
}
