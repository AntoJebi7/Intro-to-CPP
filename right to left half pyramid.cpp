//
// Created by antoa on 14-02-2024.
//
#include <iostream>
#include<string>
using namespace std;

int main(){
    int n=5;
    /*for (int i = 0; i < n; ++i) {
        for (int s = 0; s < (n-i-1) ; ++s) {
            cout<<" ";
        }
        for (int j = 0; j < (i+1) ; ++j) {
            cout<<"*";
        }
        cout<<"\n";
    }*/

    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j <n ; ++j) {
            if (j<(n-i-1)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<"\n";
    }

    return 0;
}