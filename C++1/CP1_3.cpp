#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Noel Gallagher's";
    string str2 = " High Flying Birds";
    string str3 = "Nine Nails";

    cout << "str1 : " << str1 << endl;
    cout << "str2 : " << str2 << endl;
    cout << endl;

    //append
    cout << "1. append" << endl;
    cout << endl;
    cout << "str1.append(str2) : " << str1.append(str2) << endl;
    cout << endl;

    //insert
    cout << "2. insert" << endl;
    cout << endl;
    cout << "str3.insert(4,Inch) : " << str3.insert(4, " Inch") << endl;
    cout << endl;

    //length
    cout << "3. length" << endl;
    cout << endl;
    cout << "str1.length() : " << str1.length() << endl;
    cout << endl;

    //clear
    cout << "4. append" << endl;
    cout << endl;
    str1.clear();
    cout << "str1.clear() : " << str1 << endl;
    cout << endl;

    return 0;
}