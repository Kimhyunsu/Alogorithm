#include <functional>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<function<int(int, int)>> d;
	d.push_back([](int x, int y) {
		return x + y;
	});
	d.push_back([](int x, int y) {
		return x - y;
	});
	d.push_back([](int x, int y) {
		return x * y;
	});
	d.push_back([](int x, int y) {
		return x / y;
	});
	d.push_back([](int x, int y) {
		return x % y;
	});


	int a, b;
	cin >> a >> b;
	for (auto &p : d) {
		cout << p(a, b) << '\n';
	}

	return 0;
}