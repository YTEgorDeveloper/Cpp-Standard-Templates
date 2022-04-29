#pragma once

unsigned long long gcd(unsigned long long a, unsigned long long b) {
	if (b) { return gcd(b, a % b); }
	return a;
}
unsigned long long lcm(unsigned long long a, unsigned long long b) {
	return b / gcd(a, b) * a;
}
unsigned long long fib(unsigned long long n) {
	unsigned long long a = 0, b = 1;
	for (unsigned long long i = 0; i < n; ++i) {
		unsigned long long t = a + b;
		a = b;
		b = t;
	}
	return a;
}