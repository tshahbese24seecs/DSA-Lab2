#include <iostream>
using namespace std;

void analyze_pointer(int *ptr){
	cout << "Memory Location: " << ptr << endl;
	cout << "Pointer Value: " << *ptr << endl;
	cout << endl;
}




int main() {

	// Created on Stack
	int	iValue = 34;
	analyze_pointer(&iValue);

	// Created on Heap
	int* iRef = new int(56);
	analyze_pointer(iRef);
	
	return 0;
}