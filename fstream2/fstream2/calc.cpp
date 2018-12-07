#include "pch.h"
#include <math.h>
#include <iostream>



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

