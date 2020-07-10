#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int main(){
    vector<string> v;
    int len = 0;
    while(v.size()<5){
        string s;
        cin >> s;
        len = max(len, (int)s.size());
        v.push_back(s);
    }
    
    string result = "";
    for(int i=0;i<len;i++){
        for(string& s : v){
            if(i>=s.size()) continue;
            result += s[i];
        }
    }
    cout << result << endl;
    
    return 0;
}