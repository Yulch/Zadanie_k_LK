#include <iostream>
#include "strutil.cpp"
#include "strutil.h"
using namespace std;

int main()
{
    char str_1[100];
	char str_2[200];
	cout << "Enter first string and second:";
    cin >> str_1 >> str_2;
    cout << strConteins(str_1, str_2);
}
