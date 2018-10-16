#include <iostream>
#include "Term.h"

using namespace std;

int main() {
	// Term.h testing

	Term term1(2, 3);
	Term term2(4, 2);
	Term term3(3, 2);
	cout << term1 << endl;
	cout << term2 << " + " << term3 << " = " << term2 + term3 << endl;
	cout << term2 << " - " << term3 << " = " << term2 - term3 << endl;
	cout << term1 << " * " << term3 << " = " << term1 * term3 << endl;
	cout << term1 << " / " << term2 << " = " << term1 / term2 << endl;

	//end Term.h testing

	return 0;
}