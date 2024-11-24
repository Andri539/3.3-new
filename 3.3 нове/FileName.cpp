#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, R, y;

    cout << "������ �������� R: ";
    cin >> R;
    cout << "������ �������� x: ";
    cin >> x;

    if (x <= -R) {
        y = 1;
    }
    else if (-R < x && x <= 0) {
        y = -sqrt(R * R - x * x);
    }
    else if (0 < x && x <= 2 * R) {
        y = (R + x * (-3 - R)) / (2 * R);
    }
    else if (x > 4) {
        y = x - 3 * R;
    }

    cout << "���������: y = " << y << endl;

    system("pause");
    return 0;
}
