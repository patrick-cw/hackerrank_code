#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        
        string s;
        cin>>s;
        
        if (x==1){
            int a;
            cin>>a;
            m[s]+=a;
        }
        else if(x==2){
            m[s]=0;
        }
        else{
            cout<<m[s]<<endl;
        }
    }
    return 0;
}



