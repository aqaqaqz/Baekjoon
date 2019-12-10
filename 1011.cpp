#include <iostream>

using namespace std;

class Solution {
	int cnt;
	template <typename t>
	t getDist(t s) {
		return (s*s + s) / 2;
	}

public:
	void Run() {
		cin >> cnt;
		while (cnt--) {
			int a, b;
			cin >> a >> b;
			int l = b - a;
			long long s = 0;

			while (true) {
				long long d = getDist(s) + getDist(s + 1);
				if (d > l) break;
				s++;
			}

			int result = s + s - 1;
			l -= (getDist(s) + getDist(s - 1));
			while (l != 0) {
				if (s > l) 
					s--;
				else {
					l -= s;
					result++;
				}
			}

			cout << result << endl;
		}
	}
};

int main() {
	Solution s;
	s.Run();
	return 0;
}