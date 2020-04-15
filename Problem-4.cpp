/*
        Checking if a number is palindrom
*/
#include <iostream>
using namespace std;

int main()
{
    string pallindrome;
    string temp;
    int product = 1;

    // pallindrome += pallindrome + to_string(num);
    // cout << pallindrome.at(0);

    for (int i = 300; i <= 993; i++)
    {
        for (int j = 340; j <= 992; j++)
        {
            // cout << "Product would be: " << i << " x " << j << endl;
            product = i * j;
            temp = to_string(product);
            // cout << temp<<endl;
            if ( (temp.at(0) == temp.at(5)) && (temp.at(1) == temp.at(4)) && (temp.at(2) == temp.at(3)) )
            {
                pallindrome = to_string(product);
                // pallindrome +=  " ";
                // pallindrome += to_string(i);
                // pallindrome +=  " ";
                // pallindrome += to_string(j);
            }
        }
    }
    cout << pallindrome;

    return 0;
}
// if (    (pallindrome.at(0) == pallindrome.at(3)) && (pallindrome.at(1) == pallindrome.at(2))    )
// {
//     cout << "Number is pallindrome";
// }
// else
// {
//     cout << "Number is not a pallindrome";
// }
