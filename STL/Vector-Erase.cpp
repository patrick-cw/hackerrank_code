#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int>v; 
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int pos,start,end,size;
    cin>>pos>>start>>end;
    v.erase(v.begin() + (pos-1));
    v.erase(v.begin() + start-1,v.begin()+end-1);
    size = v.size();
    cout<<size<<endl;
    
    for(int j = 0;j<size;j++){
        cout<<v[j]<<" ";
    }
    return 0;
}
