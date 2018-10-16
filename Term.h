#ifndef TERM_H
#define TERM_H

#include <iostream>
#include <cassert>

using namespace std;


struct Term {
	double _coef;
	int _exp;

	Term(double coef, int exp) {
		_coef = coef;
		_exp = exp;
	}

	friend bool operator == (const Term& lhs, const Term& rhs) {
		if (lhs._coef == rhs._coef) {
			if (lhs._exp == rhs._exp) {
				return true;
			}
		}
		return false;
	}

	friend bool operator != (const Term& lhs, const Term& rhs) {
		return !(lhs == rhs);
	}

	friend bool operator > (const Term& lhs, const Term& rhs) {
		if (lhs._exp >= rhs._exp) {
			if (lhs._coef > rhs._coef) {
				return true;
			}
			return false;
		}
		return false;
	}

	friend bool operator < (const Term& lhs, const Term& rhs) {
		if (lhs._exp <= rhs._exp) {
			if (lhs._coef < rhs._coef) {
				return true;
			}
			return false;
		}
		return false;
	}

	//used in Poly division operator

	friend Term operator + (const Term& lhs, const Term& rhs) {
		if (lhs._exp == rhs._exp) {
			return Term(lhs._coef + rhs._coef, lhs._exp);
		}
	}

	friend Term operator - (const Term& lhs, const Term& rhs) {
		return lhs + (-rhs);
	}

	friend Term operator * (const Term& lhs, const Term& rhs) {
		return Term(lhs._coef * rhs._coef, lhs._exp + rhs._exp);
	}

	friend Term operator / (const Term& lhs, const Term& rhs) {
		if (rhs._exp > lhs._exp) {
			return Term(0, 0);
		}
		else {
			double coef = lhs._coef / rhs._coef;
			int exp = lhs._exp - rhs._exp;
			return Term(coef, exp);
		}
	}

	friend Term operator - (const Term& term) {		// unary operator
		return Term(term._coef * -1, term._exp);
	}

	friend ostream& operator <<(ostream& outs, const Term& t) {
		outs << t._coef << "x^" << t._exp << ' ';
		return outs;
	}
};

#endif    // TERM_H