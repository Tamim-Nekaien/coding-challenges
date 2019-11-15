#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//n = number of arrays
//q = number of search queries
//k = how large the secondary array is
//i = index in array
//j = location in secondary array.
int n, q, k, s, r, i, j;
vector<vector <int>> a;

void input_iterator(){
    cin >> n >> q;
        for (int i = 0; i < n; i++){
        cin >> k;
        vector<int> v;
        for (int i = 0; i < k; i++){
            cin >> r;
            v.push_back(r);
        }
        a.push_back(v);
    }
}
void query_search(vector<vector<int>> someV, int p){
    for(int f; f < p; f++){
        cin >> i >> j; 
        cout << someV[i][j] << endl;
    }
}

    
int main() {
    //array a with n elements
    //index i of array a is reference to another array with k integers
    //there will be q queries given represented by index i in array a and element k of a[i]
    input_iterator();
    query_search(a, q);
    return 0;
}

