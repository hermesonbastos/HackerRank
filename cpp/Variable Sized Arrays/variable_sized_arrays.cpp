#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int s = 0, q = 0;
    vector<vector<int>> arr;

    cin >> s >> q;

    for(int i = 0; i < s; i++) {
        int k = 0;
        cin >> k;
        arr.push_back(vector<int>());
        for(int j = 0; j < k; j++) {
            int value = 0;
            cin >> value;
            arr.at(i).push_back(value);
        }
    }

    for(int i = 0; i < q; i++) {
        int r = 0, c = 0;
        cin >> r >> c;
        cout << arr.at(r).at(c) << "\n";
    }
    
    return 0;
}