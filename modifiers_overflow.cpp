#include <iostream>
#include <limits>

using namespace std;

int main(){
    short a1=numeric_limits<short>::min(); 
    short a2=numeric_limits<short>::max();
    unsigned b1=numeric_limits<unsigned>::min();
    unsigned b2=numeric_limits<unsigned>::max();
    long c;
    long long d;
    
    cout << "min_short: " << numeric_limits<short>::min() << endl;
    cout << "max_short: " << numeric_limits<short>::max() << endl;
    cout << "min_unsigned: " << numeric_limits<unsigned>::min() << endl;
    cout << "max_unsigned: " << numeric_limits<unsigned>::max() << endl;
    cout << "min_long: " << numeric_limits<long>::min() << endl;
    cout << "max_long: " << numeric_limits<long>::max() << endl;
    cout << "min_long_long: " << numeric_limits<long long>::min() << endl;
    cout << "max_long_long: " << numeric_limits<long long>::max() << endl;

    cout << "After subtracting from Short: " << a1-1 << endl;
    cout << "After adding to Short: " << a2+1 << endl;
    cout << "After subtracting from Unsigned: " << b1-1 << endl;
    cout << "After adding to Unsigned: " << b2+1 << endl;
    return 0;

}