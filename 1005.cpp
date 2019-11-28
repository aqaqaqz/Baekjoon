#include <iostream>
#include <math.h>
#include <algorithm>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
	int getCity(vector<int>& time, unordered_map<int, vector<int>>& path, unordered_map<int, int>& visit, int city) {
		if (visit.find(city) != visit.end()) return visit[city];

		int t = 0;
		for (int n : path[city])
			t = max(t, getCity(time, path, visit, n));
		visit[city] = t + time[city];

		return visit[city];
	}
public:
	void Run() {
		int n, k;
		cin >> n;
		while (n--) {
			unordered_map<int, int> visit;
			unordered_map<int, vector<int>> path;
			int cnt, k;
			cin >> cnt >> k;
			vector<int> time(1);
			while (cnt--) {
				int t;
				cin >> t;
				time.push_back(t);
			}

			while (k--) {
				int s, e;
				cin >> s >> e;
				path[e].push_back(s);
			}

			int city;
			cin >> city;
			cout << getCity(time, path, visit, city) << endl;
		}
	}
};

int main() {
	Solution s;
	s.Run();
	return 0;
}