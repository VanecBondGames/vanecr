#include <iostream>
#include <exception>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "что на сегодня вызовем?";
	cin >> n;
	switch (n) {
	case 1:
		try {
			throw out_of_range("out_of_range");
		}
		catch (const exception& ex) {
			cout << "out_of_range";
		};
		break;
	case 2:
		try {
			throw runtime_error("runtime_error");
		}
		catch (const exception& ex) {
			cout << "runtime_error";
		};
		break;
	case 3:
		try {
			throw range_error("range_error");
		}
		catch (const exception& ex) {
			cout << "range_error";
		};
		break;
	case 4:
		try {
			throw invalid_argument("invalid_argument");
		}
		catch (const exception& ex) {
			cout << "invalid_argument";
		};
		break;
	case 5:
		try {
			throw logic_error("logic_error");
		}
		catch (const exception& ex) {
			cout << "logic_error";
		};
		break;

	}


}
