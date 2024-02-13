//
// Created by antoa on 14-02-2024.
//
#include <iostream>
#include<string>
using namespace std;

int main(){
    int n=8;
    int l;
    for (int i = -n; i <= n; ++i) {
        if (i<0){
            l=-i;
        }else{
            l=i;
        }
        for (int s = 0; s<(n-l) ; ++s) {
            cout<<" ";
        }
        for (int j = 0; j < (l+1); ++j) {
            cout<<" *";
        }
        cout<<"\n";
    }
    return 0;
}