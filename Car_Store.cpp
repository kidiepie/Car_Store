// Car_Store.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string cars[4][3] = { {"Name: ""Corolla", "Camry", "Prius"}, {"Price: ""$25.999", "$23.782", "$30.899"}, {"Stock: ""1       ", "0       ", "3"} };
	int x;
	string y;
	int z = 1;
	cout << "Press 1 to continue, Press 2 to see the entire selection, Press 3 to quit: " << endl;
	cin >> x;
	while (z == 1) {
		if (x == 1) {
			cout << "Thank you for continuing" << endl;
			cout << "Please select for one of the following cars (Corolla, Camry, Prius)" << endl;
			cin >> y;
			if (y == "Corolla" || y == "corolla") {
				cout << "Car Name: " << cars[0][0] << endl;
				cout << "Price: " << cars[1][0] << endl;
				cout << "Stock: " << cars[2][0] << endl;
				cout << "If you would like to continue press 1, If you would like to see the entire selection press 2, If you would like to quit press 3: " << endl;
				cin >> x;
			}
			else if (y == "Camry" || y == "camry") {
				cout << "Car Name: " << cars[0][1] << endl;
				cout << "Price: " << cars[1][1] << endl;
				cout << "Stock: " << cars[2][1] << endl;
				cout << "If you would like to continue press 1, If you would like to see the entire selection press 2, If you would like to quit press 3: " << endl;
				cin >> x;
			}
			else if (y == "Prius" || y == "prius") {
				cout << "Car Name: " << cars[0][2] << endl;
				cout << "Price: " << cars[1][2] << endl;
				cout << "Stock: " << cars[2][2] << endl;
				cout << "If you would like to continue press 1, If you would like to see the entire selection press 2, If you would like to quit press 3: " << endl;
				cin >> x;
			}
			else {
				cout << "Please enter one of the listed cars" << endl;
				cin >> x;
			}
		}
		else if (x==2){
			cout << "Here is our full selection of cars:" << endl;
			int rows = 4;
			int cols = 3;
			for (int i = 0; i < rows; i++) {
				for (int j = 0; j < cols; j++) {
					cout << cars[i][j] << ", ";
				}
				cout << "" << endl;
			}
			cout << "If you would like to continue press 1, If you would like to see the entire selection press 2, If you would like to quit press 3: " << endl;
			cin >> x;
		}
		else if (x == 3) {
			cout << "Thank you for using the app, Until next time" << endl;
			break;
		}
		else {
			cout << "Error, Please select one of the listed options" << endl;
			cin >> x;
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
