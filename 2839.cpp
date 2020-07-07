#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(){
    int cnt;
    cin >> cnt;

    vector<int> v{0};
    int w = 0;
    while(++w <= cnt){
        int temp = INT_MAX;
        if(w-3>=0 && v[w-3]!=INT_MAX)
            temp = min(temp, v[w-3]+1);
        if(w-5>=0 && v[w-5]!=INT_MAX)
            temp = min(temp, v[w-5]+1);
        v.push_back(temp);
    }

    cout << (v[cnt]==INT_MAX?-1:v[cnt]) << endl;
    return 0;
}