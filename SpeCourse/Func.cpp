#include <iostream>
#include <cmath>

class Func {

public:
	float func1(float x) {
		return 2 * x + 3;
	}
	float func2(float x, float y) {
		return 2 * x * x + 3 * y + 4;
	}
	float func3(float x, float y, float z) {
		return 0.9982 * pow(0.2793, (2 / 3)) * 
			pow((x * x + y * y + z * z),(1/3)) * (0.06805 - 3.57 * pow(10, -3) * 
				pow((x * x + y * y + z * z), (1 / 2)) - 
				0.204 * atan(-y / z) - 
				0.069 * asin(z/(pow((x * x + y * y + z * z), (1 / 2)))));
	}
	float func4(float x) {
		return sin(x);
	}

};