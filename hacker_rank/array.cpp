#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 int n;
 cin >> n;
 int A[n];
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        A[i] = t;
    }
    int j = n;
    for (int i = 0; i < n; i++) {
        
        cout << A[j-1] <<" " ;
        j--;
    }
      
    return 0;
}
