//
// Created by antoa on 13-02-2024.
//
#include <iostream>
#include<string>
#define pi 3.14

int main(){
    float a;
    std::cout<<"enter a float value"<<std::endl;
    std::cin>>a;
    for(a;a<pi;a+=0.1){
        std::cout<<a<<std::endl;
    }
    while(pi<a && a<=100){
        std::cout<<a<<std::endl;
        a-=10;
    }
    do{
        std::cout<<"a is equal to pi"<<std::endl;
    }while(pi==a);

    return 0;
}