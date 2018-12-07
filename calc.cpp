
#ifndef CALC_H
#define CALC_H


float calculator(float a, float b, char op) {
	if (op == '+') {
		return a + b;
	}
	else if (op == '-') {
		return a - b;
	}
	else if (op == '*') {
		return a * b;
	}
	else if (op == '/') {
		return a / b;
	}
	else {
		return -1;
	}
}
#endif // !CALC_H