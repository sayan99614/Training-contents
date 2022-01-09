// Problem
// You are given an integer array  consisting of  elements. You can perform the following operations on array :

// Choose any element and increase or decrease it by 3 for 1 coin.
// Choose any element and increase or decrease it by 2 for free.
// You are required to spend the minimum number of coins in order to make all the elements in array  equal.

// Input format

// The first line contains an integer  denoting the number of test cases.
// The first line of each test case contains an integer  denoting the number of elements in array .
// The second line of each test case contains  space-separated integers of array .
// Output format

// Print  lines. For each test case, print a single line denoting the minimum number of coins to make all elements equal.

#include <iostream>

using namespace std;

int main()
{

    int ntc; 

    cin >> ntc;

    int num; 

    for (int i = 0; i < ntc; i++)

    {

        cin >> num;

        int arr[num]; // Declaring array

        int odd = 0, even = 0;

        for (int j = 0; j < num; j++)

        {

            cin >> arr[j]; // Array input
        }

        for (int j = 0; j < num; j++)

        {

            if (arr[j] % 2 == 0)

                even++;

            else

                odd++;
        }

        if (odd > even)

            cout << even << endl;

        else

            cout << odd << endl;
    }
}
