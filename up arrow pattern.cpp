//
// Created by antoa on 14-02-2024.
//
#include <iostream>
#include<string>
using namespace std;

int main(){
    int n=4;

    for (int i = 0; i <= n ; ++i) {
        for (int j = -n; j <=n ; ++j) {
            if(-i<j && j<i){
                cout<<"  ";
            }else
                cout<<"* ";
        }
        cout<<std::endl;
    }

    return 0;
}