#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	void run() {
		int n;
		cin >> n;
		vector<int> result(n);
		vector<pair<int, int>> a;
		for (int i = 0; i < n; i++) {
			int t;
			cin >> t;
			a.push_back(make_pair(t, i));
		}
		sort(a.begin(), a.end(), [](pair<int, int>& p1, pair<int, int>& p2) {
			if (p1.first == p2.first) return p1.second < p2.second;
			return p1.first < p2.first;
		});

		for (int i = 0; i < a.size(); i++) 
			result[a[i].second] = i;

		for (int i = 0; i < result.size(); i++) {
			cout << result[i];
			if (i + 1 == result.size()) break;
			cout << " ";
		}
		cout << endl;
	}
};

int main() {
	Solution s;
	s.run();
	return 0;
}