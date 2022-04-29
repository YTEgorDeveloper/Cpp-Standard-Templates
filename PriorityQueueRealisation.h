#pragma once

#include <iostream>
#include <queue>

std::priority_queue<int, std::vector<int>, std::greater<int> > pqLessToGreater; //Greater at end 1 - 2 - 3 - 4 - 5 - 6 - 7 - 9
std::priority_queue<int, std::vector<int>, std::less<int> > pqGreaterToLess; //Less at end 9 - 7 - 6 - 5 - 4 - 3 - 2 - 1

void PQExample() {
	int n, val;
	std::cin >> n;

	for (int i = 0; i < n; ++i) {
		std::cin >> val;
		pqGreaterToLess.push(val);
		pqLessToGreater.push(val);
	}

	std::cout << "\nGreaterToLess: ";
	while (!pqGreaterToLess.empty()) {
		std::cout << pqGreaterToLess.top() << " - ";
		pqGreaterToLess.pop();
	}

	std::cout << "\nLessToGreater: ";
	while (!pqLessToGreater.empty()) {
		std::cout << pqLessToGreater.top() << " - ";
		pqLessToGreater.pop();
	}
}