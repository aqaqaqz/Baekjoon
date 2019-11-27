#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
	bool check(vector<int>& c, int x, int y) {
		int t1 = c[0] - x;
		int t2 = c[1] - y;
		return (t1*t1) + (t2*t2) < c[2] * c[2];
	}
public:
	void Run() {
		int n, sx, sy, dx, dy, cnt;
		cin >> n;
		while (n--) {
			vector<vector<int>> v;
			cin >> sx >> sy >> dx >> dy >> cnt;
			while (cnt--) {
				int cx, cy, cr;
				cin >> cx >> cy >> cr;
				v.push_back(vector<int>{cx, cy, cr});
			}

			sort(v.begin(), v.end(), [](vector<int>& v1, vector<int>& v2) {
				return v1[2] > v2[2];
			});
			int sc = 0, dc = 0;
			for (int i = v.size() - 1; i >= 0; i--) {
				bool sCrash = check(v[i], sx, sy);
				bool dCrash = check(v[i], dx, dy);
				if (sCrash && dCrash) break;
				if (sCrash) sc++;
				if (dCrash) dc++;
			}
			cout << sc + dc << endl;
		}
	}
};

int main() {
	Solution s;
	s.Run();
	return 0;
}