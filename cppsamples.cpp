//
// Created by antoa on 13-02-2024.
//
#include <iostream>
#include<string>

int getdata(){
    std::string Name;
    int age;
    std::cout<<"enter your name"<<std::endl;
    std::cin>>Name;
    std::cout<<"enter your age"<<std::endl;
    std::cin>>age;
    return 0;
}

int main(){
    int num1 = 80;
    std::cout<<num1+90<<"\n";
    int num2 = 807;
    int a,b;
    std::cout<<num1 + num2 * 5 <<std::endl;
    std::cout<<"enter 2 number \n"<<std::endl;
    std::cin>>a>>b;
    std::cout<<a*b<<std::endl;
    std::string Name;
    std::cout<<"enter your name"<<std::endl;
    std::cin>>Name;
    getdata();
    return 0;
}

