#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
	void change(vector<vector<int>>& v, int h, int w) {
		if (h < 0 || w < 0 || h >= v.size() || w >= v[0].size()) return;
		if (v[h][w] == 0) return;

		v[h][w] = 0;
		change(v, h+1, w);
		change(v, h-1, w);
		change(v, h, w+1);
		change(v, h, w-1);
	}
public:
	void run() {
		int cnt;
		cin >> cnt;
		while (cnt--) {
			int h, w, b;
			cin >> w >> h >> b;
			vector<vector<int>> v(h, vector<int>(w, 0));
			while (b--) {
				cin >> w >> h;
				v[h][w] = 1;
			}

			int result = 0;
			for (h = 0; h < v.size(); h++) {
				for (w = 0; w < v[0].size(); w++) {
					if (v[h][w] == 1) {
						result++;
						change(v, h, w);
					}
				}
			}

			cout << result << endl;
		}
	}
};

int main() {
	Solution s;
	s.run();
	return 0;
}