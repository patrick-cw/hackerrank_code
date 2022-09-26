#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int type,query;
        cin>>type>>query;
        switch(type){
            case 1:
                s.insert(query);
                break;
            case 2:
                s.erase(query);
                break;
            case 3:
                if(s.find(query)!=s.end()){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
                break;
        }
    }
    return 0;
}



