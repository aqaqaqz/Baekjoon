#include <iostream>

using namespace std;

class Solution {
public:
	void Run() {
		cout.setf(ios::fixed);
		cout.precision(10);

		double a, b;
		cin >> a >> b;
		cout << a / b << endl;
	}
};

int main() {
	Solution s;
	s.Run();
	return 0;
}