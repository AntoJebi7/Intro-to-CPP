//
// Created by antoa on 13-02-2024.
//
#include <iostream>
#include<string>
using namespace std;
int main(){
    //patterns
    /*int n=5,i,j;
    for (i = 0; i < n; i++) {

        for (j = 0; j<i+1 ; j++) {
            cout<<"!"<<"\t";
        }
        cout<<std::endl;
    }*/
    /*int n=5,i,j,k=1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i + 1; j++) {
            cout << k++ << "\t";
        }
        cout << std::endl;
    }*/
    int n=5,i,j,k=1;
    for (int i = 0; i <n ; i++) {

        for (int j = 5; j>i; j--) {
            cout<<j<<"\t";
        }
        cout<<"\n";
    }

    return 0;
}