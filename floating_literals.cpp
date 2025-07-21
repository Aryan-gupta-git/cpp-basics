#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    float a=3.14f;
    double b=12.14;
    long double c=3.4322L;

    cout << "Size of float: " << sizeof(a) << " bytes" << endl;
    cout << "Size of double: " << sizeof(b) << " bytes" << endl;
    cout << "Size of long double: " << sizeof(c) << " bytes" << endl;

    cout << fixed << setprecision(20);

    cout << "Float value: " << a << endl;
    cout << "Double value: " << b << endl;
    cout << "Long Double value: " << c << endl;
    return 0;
}