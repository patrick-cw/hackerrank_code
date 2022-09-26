#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int index = lower_bound (v.begin(),v.end(),x)-v.begin();
        if(v[index]==x){
            cout<<"Yes ";
        }
        else{
            cout<<"No ";
        }
        cout<<index+1<<endl;
    }
    return 0;
}
