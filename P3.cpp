//Name: Varnika Maurya
//PRN: 24070123160
//Exp No. 15
//Program No. 3
#include <iostream>
using namespace std;

void revStr(char *str)
{
    if(*str != '\0')
    {
        revStr(str+1);
        cout << *str;
    }
}

int main()
{
    char n[100];
    cout << "Enter a string here: ";
    cin >> n;
    cout << "Reverse string = ";;
    revStr(n);

    return 0;
}

/*
Output:
Enter a string here: hello
Reverse string = olleh
*/
