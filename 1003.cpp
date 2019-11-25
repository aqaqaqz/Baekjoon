#include <iostream>
#include <math.h>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
	unordered_map<int, pair<int, int>> m;
	pair<int, int> getFibo(int n) {
		if (m.find(n) != m.end()) return m[n];
		m[n] = getFibo(n - 1);
		auto t = getFibo(n - 2);
		m[n].first += t.first;
		m[n].second += t.second;
		return m[n];
	}
public:
	Solution() {
		m[0] = make_pair(1, 0);
		m[1] = make_pair(0, 1);
	}

	void Run() {
		int cnt;
		cin >> cnt;
		while (cnt--) {
			int n;
			cin >> n;
			auto t = getFibo(n);
			cout << t.first << " " << t.second << endl;
		}
	}
};

int main() {
	Solution s;
	s.Run();
	return 0;
}