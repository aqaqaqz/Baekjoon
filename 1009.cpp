#include <iostream>

using namespace std;

class Solution {
	int cnt;
public:
	void Run() {
		cin >> cnt;
		while (cnt--) {
			int a, b;
			cin >> a >> b;
			int t = a;
			while (--b) {
				t *= a;
				t %= 10;
			}
			cout << (t==0?10:t) << endl;
		}
	}
};

int main() {
	Solution s;
	s.Run();
	return 0;
}