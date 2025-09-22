//Name: Varnika Maurya
//PRN: 24070123160
//Exp No. 15
//Program No. 2

#include <iostream>
using namespace std;

int sum(int n)
{
    if (n <= 1)
        return 1;
    else
        return n + sum(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number here: ";
    cin >> n;
    cout << "Sum upto" << "n" << " = " << sum(n);

    return 0;
}

/*
Output:
Enter a number here: 5
Sum upto 5 = 15
*/
