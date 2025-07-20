#include<iostream>
#include<cfloat>
#include<climits>

using namespace std;
int main() {
    int a=7;
    float b=3.14;
    double c = 2.718281828459;
    char d= 'K';
    bool e= true;

    cout <<  "Size of int: " << sizeof(a) << " bytes" << endl;
    cout << "Size of float: " << sizeof(b) << " bytes" << endl;
    cout << "Size of double: " << sizeof(c) << " bytes" << endl;        
    cout << "Size of char: " << sizeof(d) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(e) << " bytes" << endl;
    
    cout << "/limits" << endl;
    cout << "Max int: " << INT_MAX << endl;
    cout << "Min int: " << INT_MIN << endl;
    cout << "Max float: " << FLT_MAX << endl;
    cout << "Min float: " << FLT_MIN << endl;
    cout << "Max double: " << DBL_MAX << endl;
    cout << "Min double: " << DBL_MIN << endl;
    cout << "Max char: " << CHAR_MAX << endl;
    cout << "Min char: " << CHAR_MIN << endl;
    cout << "Max bool: " << true << endl;
    cout << "Min bool: " << false << endl;
    return 0;
}