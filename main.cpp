#include <iostream>

using namespace std;

int main() {
    int sum_odd = 0;
    int sum_even = 0;
    for (int i=0; i<=100; i++)
        if (i % 2 == 0) sum_even++;
        else sum_odd++;
    cout << "Suma parzystych: " << sum_even  << endl << "Suma nieparzystych: " << sum_odd << endl;
    return 0;
}