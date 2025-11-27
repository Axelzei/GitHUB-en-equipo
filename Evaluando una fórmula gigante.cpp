#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double x, y, z;
    cin >> x >> y >> z;

    double parte1 = ((2 * x + y) / z) * (y * y * y - z);
    double parte2 = (x + 2 * y + 3 * z) / (z - 2 * y - 3 * x);

    double resultado = parte1 / (parte2 + (x * x) + (z * z));

    cout << fixed << setprecision(6) << resultado;

    return 0;
}
