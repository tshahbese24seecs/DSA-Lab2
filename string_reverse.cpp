#include <iostream>
using namespace std;
int main() {
	
	int size;
	// Takes String Length as User Input
	cout << "Enter the length of the String: ";
	cin >> size;

	// Declares a Dynamic Array of that Size
	char* str = new char[size + 1];
	
	cin.ignore();
	cout << "Enter the String: ";
	cin.getline(str, size + 1);

	for (int i = 0; i < size / 2; i++)
	{
		char temp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = temp;
	}
	cout << "Reversed String: " << str << endl;
	return 0;
}
