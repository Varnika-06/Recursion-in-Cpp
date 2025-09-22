//Name: Varnika Maurya
//PRN: 24070123160
//Exp No. 15
//Program No. 1
#include <iostream>
using namespace std;


int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else 
        return n * fact(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number here: ";
    cin >> n;
    cout << n << "! = " << fact(n);

    return 0;
}

/*
Output:
Enter a number here = 5
5! = 120
*/
