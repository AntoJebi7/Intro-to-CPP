//
// Created by antoa on 13-02-2024.
//
#include <iostream>
#include<string>
#define pi 3.14
#define add(a,b) ((a)+(b))
#define sub(a,b) ((a)-(b))
#define multiply(a,b) ((a)*(b))
#define divide(a,b) ((a)/(b))

int main(){
    std::cout<<add(8,9)<<std::endl;
    std::cout<<sub(8,9)<<std::endl;
    std::cout<<multiply(8,9)<<std::endl;
    std::cout<<divide(8,9)*pi<<std::endl;
    return 0;
}