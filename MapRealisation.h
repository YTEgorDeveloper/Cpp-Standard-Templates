#pragma once

#include <iostream>
#include <string>
#include <map>

std::map <std::string, int> ExampleMap;

void MapExample() {
	int n;
	std::cout << "Count of key-value pairs: ";
	std::cin >> n;

	for (int i = 0; i < n; ++i) {
		std::string key;
		int value;

		std::cin >> key >> value;
		ExampleMap.insert(std::make_pair(key, value));
	}

	std::cout << "Count of readings: ";
	std::cin >> n;

	for (int i = 0; i < n; ++i) {
		std::string key;

		std::cin >> key;

		if (ExampleMap.find(key) != ExampleMap.end()) { std::cout << "Found: " << ExampleMap[key] << '\n'; continue; }
		std::cout << "Key does not exist!" << '\n';
	}

}