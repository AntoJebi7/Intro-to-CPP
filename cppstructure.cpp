//
// Created by antoa on 13-02-2024.
//
#include <iostream>
#include<string>

struct person{
    int age;
    char name;
    long int mobilenumber;
    double percentage;
    std::string address;
};
int main(){
    person p1;
    p1.age = 78;
    p1.mobilenumber = 3486556;
    p1.address ="anto";
    p1.name = 'a';
    std::cout<<p1.mobilenumber<<std::endl;
    return 0;
}