#include <iostream>
#include <string>
using namespace std;

int main()
{
	int variant = 2;
	cout << "Enter your surname: ";
	string Name;
	cin >> Name;
	int var = Name.size() % variant + 1;
	cout << "Yor variant is " << var;
	return 0;
}
