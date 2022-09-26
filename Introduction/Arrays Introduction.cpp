#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define MAX 10000
using namespace std;


int main() {
    int n;
    int arr[MAX];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=1;i<=n;i++){
        cout<<arr[n-i]<<" ";
    }
    
    return 0;
}
