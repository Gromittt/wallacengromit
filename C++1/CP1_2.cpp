#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[] = "RedHotChiliPeppers";
    char str2[] = "Oasis";
    char str3[] = "Oasis";
    char str4[19];

    cout << "str1 : " << str1 << endl;
    cout << "str2 : " << str2 << endl;
    cout << "str3 : " << str3 << endl;
    cout << endl;

    //strcmp
    cout << "1. strcmp()" << endl;
    cout << endl;
    cout <<"������ �����ʺ��� Ŭ �� : " << strcmp(str1, str2) << endl;
    cout << "������ �����ʺ��� ���� ��: " <<strcmp(str2, str1) << endl;
    cout << "�� ���ڿ��� ���� ��: " <<strcmp(str2, str3) << endl;
    cout << endl;

    //strlen 
    cout << "2. strlen()" << endl;
    cout << endl;
    cout << "str1�� ���ڿ� ���̴� : " << strlen(str1) << endl;
    cout << "str2�� ���ڿ� ���̴� : " << strlen(str2) << endl;
    cout << endl;
 
    //strcpy
    cout << "3. strcpy()" << endl;
    cout << endl;
    cout << "str4 : " << strcpy(str4, str1)<< endl;
    
    return 0;
}