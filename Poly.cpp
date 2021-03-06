// DEFINE CLASS METHODS HERE
/*

#ifndef POLY_H
#define POLY_H

class Poly
{
public:
	Poly();
	Poly(double* coefs, int order);

	//the BIG 3
	Poly(const Poly& other);
	Poly& operator =(const Poly& rhs);
	~Poly();


	friend bool operator ==(const Poly& lhs, const Poly& rhs);
	friend bool operator !=(const Poly& lhs, const Poly& rhs);
	friend bool operator >(const Poly& lhs, const Poly& rhs);
	friend bool operator <(const Poly& lhs, const Poly& rhs);

	Term operator[](int order) const;

	friend Poly operator +(const Poly& lhs, const Term& t);
	friend Poly operator +(const Poly& lhs, const Poly& rhs);

	friend Poly operator -(const Poly& p);
	friend Poly operator - (const Poly& lhs, const Poly& rhs);

	friend Poly operator *(const Poly& lhs, const Term& t);
	friend Poly operator *(const Poly& lhs, const Poly& rhs);

	friend Poly operator /(const Poly& lhs, const Poly& rhs);
	friend Poly operator %(const Poly& lhs, const Poly& rhs);

	friend ostream& operator <<(ostream& outs, const Poly& p);
	friend istream& operator >>(istream& ins, Poly& p);

	int order() const { return _order; }

private:
	void fix_order();           //get rid of highest terms with zero coefs
	int _order;
	double* _coefs;
};

#endif // end of POLY_H

*/

#include "Poly.h"
#include "Term.h"

#include <iostream>
#include <istream>
#include <ostream>

using namespace std;

Poly::Poly() {

}

Poly::Poly(double* coefs, int order) {

}

//the BIG 3
Poly::Poly(const Poly& other) {

}

Poly& Poly::operator = (const Poly& rhs) { //	Poly& operator =(const Poly& rhs);
	// return Poly();
}

Poly::~Poly() {
	delete_array(_coefs);
}


// operator overloading
bool operator == (const Poly& lhs, const Poly& rhs) {

}

bool operator != (const Poly& lhs, const Poly& rhs) {

}

bool operator > (const Poly& lhs, const Poly& rhs) {

}

bool operator < (const Poly& lhs, const Poly& rhs) {

}

Term Poly::operator[] (int order) const {
	return Term(_coefs[order], order);
}

Poly operator +(const Poly& lhs, const Term& t) {

}

Poly operator +(const Poly& lhs, const Poly& rhs) {

}

Poly operator -(const Poly& p) {

}

Poly operator - (const Poly& lhs, const Poly& rhs) {

}

Poly operator *(const Poly& lhs, const Term& t) {

}

Poly operator *(const Poly& lhs, const Poly& rhs) {

}

Poly operator /(const Poly& lhs, const Poly& rhs) {

}

Poly operator %(const Poly& lhs, const Poly& rhs) {

}

ostream& operator << (ostream& outs, const Poly& p) {

}

istream& operator >> (istream& ins, Poly& p) {

}

//PRIVATE

void Poly::fix_order() {
	//get rid of highest terms with zero coefs
}

double* Poly::allocate(int capacity) {
	return new double[capacity];
}

double* Poly::copy_array(double* oldList, int size) {
	double* newList = allocate(size);
	for (int i = 0; i < size; i++) {
		*(newList + i) = *(oldList + i);
	}
	return newList;
}

void Poly::resize_array(double* list, int& order) {
	double* newList = copy_array(list, order);
	delete[] list;
	list = newList;
}

void Poly::delete_array(double* &list) {
	delete[] list;
}







