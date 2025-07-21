#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    float f_over = 1e39f;     // Overflow
    float f_under = 1e-50f;   // Underflow (denormal or zero)
    float f_zero = 0.0f;

    double d_over = 1e309;    // Overflow for double
    double d_under = 1e-325;  // Underflow for double (denormal or zero)

    cout << fixed << setprecision(30);

    cout << "FLOAT EDGE CASES:\n";
    cout << "Float Overflow: " << f_over << endl;
    cout << "Float Underflow: " << f_under << endl;
    cout << "Float FLT_MAX: " << numeric_limits<float>::max() << endl;
    cout << "Float FLT_MIN: " << numeric_limits<float>::min() << endl;

    cout << "\nDOUBLE EDGE CASES:\n";
    cout << "Double Overflow: " << d_over << endl;
    cout << "Double Underflow: " << d_under << endl;
    cout << "Double DBL_MAX: " << numeric_limits<double>::max() << endl;
    cout << "Double DBL_MIN: " << numeric_limits<double>::min() << endl;

    return 0;
}
