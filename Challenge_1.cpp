#include <iostream>
#include <limits>

using namespace std;

int main() {

    string name;
    int age;
    float height;
    char initial;
    bool lovesCoding;
    
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height in cm: ";
    cin >> height;
    cout << "Enter the initial letter of name: ";
    cin >> initial;
    cout << "Do you love coding? (1 for Yes, 0 for No): ";
    cin >> lovesCoding;

    cout << "\nName: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " cm" << endl;
    cout << "Initial: " << initial << endl;
    cout << "Loves Coding: " << (lovesCoding ? "Yes" : "No") << endl;

    cout << "Size of int: " << sizeof(age) << " bytes" << endl;
    cout << "Size of float: " << sizeof(height) << " bytes" << endl;
    cout << "Size of char: " << sizeof(initial) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(lovesCoding) << " bytes" << endl;

    cout << "Max int: " << numeric_limits<int>::max() << endl;
    cout << "Min int: " << numeric_limits<int>::min() << endl;
    cout << "Max float: " << numeric_limits<float>::max() << endl;
    cout << "Min float: " << numeric_limits<float>::min() << endl;
    cout << "Max char: " << (int)numeric_limits<char>::max() << endl;        
    cout << "Min char: " << (int)numeric_limits<char>::min() << endl;

    cout << "Is adult: " << (age >= 18 ? "Yes" : "No") << endl;
    cout << "Is tall coder: " << ((height >= 170 && lovesCoding) ? "Yes" : "No") << endl;
    cout << "Initial is vowel: " << (initial == 'A' || initial == 'E' || initial == 'I' || initial == 'O' || initial == 'U' || initial == 'a' || initial == 'e'  || initial == 'i'  || initial == 'o'  || initial == 'u' ? "Yes" : "No") << endl;

    return 0;
}