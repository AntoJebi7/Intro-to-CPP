//
// Created by antoa on 14-02-2024.
//
#include <iostream>
#include<string>
using namespace std;
class shop{
    private:
        int m;
    public:
        int money=m;
    shop(int a){
        cout<<"your purchased amount is\t"<<a<<"\tINR"<<endl;
        getbill(a);
    }
    void getbill(int m){
            int bill;
            bill = m+34.5;
            money+=bill;
            cout<<"your bill is "<<bill<<"\tRupees/-"<<std::endl;
            cout<<"shop money balance is\t"<<money<<"\tINR"<<std::endl;
        }
};
int main(){
    int p;
    cout<<"enter the amount of the product :\t"<<std::endl;
    cin>>p;
    shop s(p);
    return 0;
}