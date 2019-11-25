#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

class Solution {
public:
	void Run() {
		int cnt;
		double x1, x2, y1, y2, r1, r2;
		cin >> cnt;
		while (cnt--) {
			cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
			double len1 = sqrt(abs(x1 - x2)*abs(x1 - x2) + abs(y1 - y2)*abs(y1 - y2));
			double len2 = r1 + r2;
			if (x1 == x2 && y1 == y2 && r1 == r2) cout << -1 << endl;
			else if (len1 > len2) cout << 0 << endl;
			else if (len1 == len2) cout << 1 << endl;
			else {
				if (len1 + len2 > max(r1, r2) * 2)
					cout << 2 << endl;
				else if (min(r1, r2) + len1 == max(r1, r2))
					cout << 1 << endl;
				else 
					cout << 0 << endl;
			}
		}
	}
};

int main() {
	Solution s;
	s.Run();
	return 0;
}