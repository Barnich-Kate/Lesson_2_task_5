#include <iostream>

using namespace std;

int main()
{
    float a, k, sum, min;
    cout<<"Type number more than 1: ";
    cin>>a;
    k = 1;
    sum = 1.0;
    min = 1.0;
    if (a > 1) {
        while (sum <=- a) {
            min = k;
            sum += (1 / min);
            k++;
        }
        cout << "Summa: " << sum << endl;
        cout << "Minimum: " << min << endl;
    }
    else
    cout << "Wrong number";
    

    return 0;
}
