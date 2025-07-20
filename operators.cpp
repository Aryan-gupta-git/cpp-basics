#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int a,b;
    cout << "Enter two integers:";
    cin >> a >> b;
    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;    
    cout << "Product: " << a * b << endl;
    cout << "Quotient: " << a / b << endl;
    cout << "Remainder: " << a % b << endl;
    cout << endl;
    cout << boolalpha << endl;
    cout << a << " is greater than " << b << ": " << ((a>b) ? true : false) << endl;
    cout << a << " is less than " << b << ": " << ((a<b) ? true : false) << endl;
    cout << a << " is equal to " << b << ": " << ((a==b) ? true : false) << endl;
    cout << "Both are even: " << ((a%2 == 0 && b%2 ==0) ? true : false) << endl;
    cout << "At least one is negative: " << ((a<0 || b<0) ? true : false)<< endl;
}