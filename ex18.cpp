#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Type number:";
    cin >> n;
    int sum = 0, num = 0;
    while (n > 0) {
        num++;
        sum += n % 10;
        n /= 10;
    }
    cout<<"Num:"<< num<<endl<<"Sum:"<< sum;

    return 0;
}
