// Car_Store.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string cars[3][3] = { {"Corolla", "Camry", "Prius"}, {"$25.999", "$23.782", "$30.899"}, {"1", "0", "3"} };
	int x;
	string y;
	int z = 1;
	cout << "Press 1 to continue, Press 2 to see the entire selection, Press 3 to quit: " << endl;
	cin >> x;
	while (z == 1) {
		if (x == 1) {
			cout<<"Thank yoiu"
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
