//
// Created by antoa on 13-02-2024.
//
#include <iostream>
#include<string>
int main(){
    int a,b;
    std::cout<<"Enter a and b \n";
    std::cout<<"enter a :"<<std::endl;
    std::cin>>a;
    std::cout<<"enter b"<<std::endl;
    std::cin>>b;
    if (a>b){
        std::cout<<"a is greater than b , so enter another number"<<std::endl;
        int c;
        std::cin>>c;
        if (c>b){
            std::cout<<"c is greater than b"<<std::endl;
        }
    }else{
        std::cout<<"b is greater than a"<<std::endl;
    }
    return 0;
}