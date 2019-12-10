#include <iostream>
#include <vector>

using namespace std;

class Solution {
	int cnt;
	vector<vector<int>> v;
	int getCnt(int a, int b) {
		if (a > b) return 0;
		if (a == b) return 1;
		if (a == 1) return b;
		if (v[a][b] != -1) return v[a][b];

		v[a][b] = 0;
		v[a][b] += getCnt(a, b-1);
		v[a][b] += getCnt(a - 1, b - 1);
		return v[a][b];
	}
public:
	void Run() {
		v.resize(31, vector<int>(31, -1));
		cin >> cnt;

		while (cnt--) {
			int a, b;
			cin >> a >> b;
			cout << getCnt(a, b) << endl;
		}
	}
};

int main() {
	Solution s;
	s.Run();
	return 0;
}