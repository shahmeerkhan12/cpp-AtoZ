#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long n;
    cout << "Enter the value of n: ";
    cin >> n;

    double pi = 0;
    for (long i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            pi = pi + (1.0 / (2 * i + 1));
        else
            pi = pi - (1.0 / (2 * i + 1));
    }

    pi = 4 * pi; // Multiplying by 4 after the summation

    cout << fixed << setprecision(15); // Display more decimal places
    cout << "Approximated value of pi = " << pi << endl;
    return 0;
}