#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    for(a;a<=b;a++){
        if(a == 1){
            printf("one\n");
        }
        else if (a==2){
            printf("two\n");
        }
        else if (a==3){
            printf("three\n");
        }
        else if (a==4){
            printf("four\n");
        }
        else if (a==5){
            printf("five\n");
        }
        else if (a==6){
            printf("six\n");
        }
        else if (a==7){
            printf("seven\n");
        }
        else if (a==8){
            printf("eight\n");
        }
        else if (a==9){
            printf("nine\n");
        }
        else{
            if (a%2==0){
                printf("even\n");
            }
            else{
                printf("odd\n");
            }   
        }
    }
    return 0;
    
}
