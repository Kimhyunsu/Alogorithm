#include <iostream>

using namespace std;


int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a%b);
	}
}

int main() {
	//freopen("Text.txt", "r", stdin);

	int a, b;
	int g;
	long long l;

	cin >> a >> b;

	g = gcd(a, b);

	l = a*b / g;

	cout << g << endl;
	cout << l << endl;

}