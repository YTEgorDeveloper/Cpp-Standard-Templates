#pragma once

#include <iostream>

typedef struct ExampleStruct {
	int x, y;

	ExampleStruct() { x = 0; y = 0; }
	ExampleStruct(int nx) { x = nx; y = 0; }
	ExampleStruct(int nx, int ny) { x = nx; y = ny; }

	ExampleStruct operator+(const ExampleStruct& second) { return ExampleStruct(x + second.x, y + second.y); }
	ExampleStruct operator-(const ExampleStruct& second) { return ExampleStruct(x - second.x, y - second.y); }
	bool operator<(const ExampleStruct& second) { if (x < second.x) { return true; } if (y < second.y) { return true; } return false; }
} ExampleStruct;

void StructExample() {
	int cx, cy;
	std::cin >> cx >> cy;

	ExampleStruct va = ExampleStruct(cx, cy);

	std::cin >> cx >> cy;

	ExampleStruct vb = ExampleStruct(cx, cy);

	va = va + vb;

	std::cout << va.x << ' ' << va.y;
}