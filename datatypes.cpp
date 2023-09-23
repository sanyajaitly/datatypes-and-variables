/*Sanya Jaitly, 22070123100*/
#include <iostream>

int main()
{
    using namespace std;

    int myintvar;
    float myfloatvar;
    double mydoublevar;
    char mycharvar;
    bool myboolvar;

    cout << "Enter an integer no.: ";
    cin >> myintvar;
    cout << "Enter a float no.: ";
    cin >> myfloatvar;
    cout << "Enter a double no.: ";
    cin >> mydoublevar;
    cout << "Enter a char no.: ";
    cin >> mycharvar;
    cout << "Enter a bool no.: ";
    cin >> myboolvar;

    cout << "Integer no.: " << myintvar << endl;
    cout << "Float no.: " << myfloatvar << endl;
    cout << "Double no.: " << mydoublevar << endl;
    cout << "Char: " << mycharvar << endl;
    cout << "Bool: " << myboolvar << endl;

    return 0;
}
/*Output:
Enter an integer no.: 45
Enter a float no.: 34.654
Enter a double no.: 90.12
Enter a char no.: a45
Enter a bool no. (0 for false, 1 for true): Integer no.: 45
Float no.: 34.654
Double no.: 90.12
Char: a
Bool: true*/