//
// Created by antoa on 13-02-2024.
//
#include <iostream>
#include<string>

enum gender{
    male,
    female,
    others,
};

int main(){
    gender m = male;
    gender f= female;
    gender o = others;
    std::cout<<m<<std::endl;
    return 0;
}