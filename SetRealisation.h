#pragma once

#include <iostream>
#include <set>

std::set<int> ExampleSet; //will contain sorted values ex:   2 - 3 - 4 - 6 - 7 - 9
//std::set<int> SecondExampleSet = { 1, 6, 6, 2, 5, 1, 6, 8, 7 }; //Also allowed initialisation

//#include <unordered_set>
//std::unordered_set<int> ExampleSet; //Values here will be not sorted

void SetExample() {
	int n;
	std::cout << "Count of insertions: ";
	std::cin >> n;

	for (int i = 0; i < n; ++i) {
		int val;
		std::cin >> val;
		ExampleSet.insert(val);
	}

	std::cout << "Count of readings: ";
	std::cin >> n;

	for (int i = 0; i < n; ++i) {
		int val;
		std::cin >> val;

		if (ExampleSet.find(val) != ExampleSet.end()) { std::cout << "Found!" << '\n'; continue; }
		std::cout << "Not found!" << '\n';
	}

	std::cout << "Set contains: ";
	for (const auto& val : ExampleSet) { std::cout << val << " - "; }
}