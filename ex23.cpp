#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Type number 1: ";
    cin >> a;
    cout << "Type number 2: ";
    cin >> b;
    while ((a != 0) & (b != 0)) {
        if (a > b) {
            a = a % b;
            
        }else {
            b = b % a;}
    }
    cout<< a + b;

    return 0;
}
