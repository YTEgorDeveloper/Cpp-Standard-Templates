#pragma once

#include <iostream>

class ExampleClass {
	public:
		int x, y;
		float c;

		ExampleClass() { x = y = c = 0; }
		ExampleClass(int def_A) { x = def_A; y = c = 0; }
		ExampleClass(int def_A, int def_B, int def_F) { x = def_A, y = def_B, c = def_F; }

		inline ExampleClass operator+(const ExampleClass& second) { return ExampleClass(x + second.x, y + second.y, c); }
		inline ExampleClass operator-(const ExampleClass& second) { return ExampleClass(x - second.x, y - second.y, c); }
		inline bool	operator==(const ExampleClass& second) { return (x == second.x) && (y == second.y); }

		void SetK(int val) { k = val; }
		int GetK(void) { return k; }

	private:
		int k;
};

void ClassExample() {
	int cx, cy;
	std::cin >> cx >> cy;

	ExampleClass va = ExampleClass(cx, cy, 1);

	std::cin >> cx >> cy;

	ExampleClass vb = ExampleClass(cx, cy, 1);

	va = va + vb;

	std::cout << va.x << ' ' << va.y << ' ' << (va == vb);
}