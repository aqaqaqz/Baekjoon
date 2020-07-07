#include <iostream>

using namespace std;

int main(){
    int h, m;
    cin >> h >> m;
    
    m -= 45;
    if(m<0){
        m += 60;
        h--;
    }
    if(h<0){
        h += 24;
    }
    
    cout << h << " " << m << endl;
    
    return 0;
}
/*
1 50 -> 1 5
1 40 -> 0 55
0 40 -> 23 55
*/