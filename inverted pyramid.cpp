//
// Created by antoa on 14-02-2024.
//
#include <iostream>
#include<string>
using namespace std;

int main(){
    int n=10;
    for (int i = 0; i < n; ++i) {
        for (int s = 0; s < i ; ++s) {
            cout<<" ";
        }
        for (int j = 0; j < (n-i); ++j) {
            cout<<" *";
        }
        cout<<"\n";
    }
    return 0;
}