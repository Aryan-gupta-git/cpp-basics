#include <iostream>
using namespace std;
int main() {
    string name;
    int age;
    float height;
    char favoriteLetter;
    bool lovesCoding;

    cout << "Enter your name: ";
    getline(cin,name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height in feet: ";
    cin >> height;
    cout << "Enter your favorite letter: ";
    cin >> favoriteLetter;
    cout << "Do you love coding? (1 for Yes, 0 for No): ";
    cin >> lovesCoding;
     
    cout << "\nName: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Favorite Letter: " << favoriteLetter << endl;
    cout << "Loves Coding: " << (lovesCoding ? "Yes" : "No") << endl;
    return 0;
}