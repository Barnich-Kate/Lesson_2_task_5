
#include <iostream>

using namespace std;

int main()
{
    int n, res;
    cout << "N:";
    cin >> n;
    while (n > 0) {
        cout<< n % 10 << endl;
        res = n / 10;
        cout << res;
    }

    return 0;
}
