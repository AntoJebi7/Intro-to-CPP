#include <cstring>
#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<fstream>
#include<vector>
#include<list>
#include<map>
using namespace std;
/*
 *
* struct anto {
    long int number;
    string name;
};
enum food {
    juice,
    shakes,
    fastfoods
};


int sum(int a , int b) {
    return a+b;
}
int multiply(int *x , int *y) {
    int temp = *x;
    *x = *y;
    *y= temp;
    cout<<"value of a is "<<*x<<endl;
    cout<<"value of b is "<<*y<<endl;
    return 0;


}

int factorial(int n){
    if(n==0 || n==1) {
        return 1;
    }
    return n*factorial(n-1);
}

    std::cout<<"hello world";
    float PI = 3.14;
    int num = 100;
    cout << "Entering a new line." << endl;
    cout << setw(10) << "Output" << endl;
    cout << setprecision(10) << PI << endl;
    cout << setbase(16) << num << endl;
    int a[]={10,324,13,34};
    int *ptr = a;
    cout<<*ptr<<endl;
    int arrs=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<arrs;i++) {
        cout<<*(ptr+i)<<endl;

    }
    struct anto an;
    an.name ="anto jebikshan";
    cout<<an.name<<endl;
    food f1 = fastfoods;
    if (f1==2) {
        cout<<f1;
    }
    int a=10,b=78;
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;
    cout<<multiply(&a,&b);

    string name = "anto";
    cout<<name;
    int a=10;
    cout<<a<<endl;
    int *b=&a;
    int **c=&b;
    cout<<b<<endl;
    cout<<factorial(5);
class anto {
    static int age ;
public:
    void printage() {
        cout<<"your age is : "<<age<<endl;
    }
    static int getage() {
        return age;
    }
    anto() {
        age=90;
    }

};
int anto::age=34;
anto aj;
    aj.printage();
    cout<<anto::getage()<<endl;

class dog {
public:
    void dogo() {
        cout<<"dog";

    }
};
class cat:public virtual dog {
public:
    void cato() {
        cout<<"cat";
        dogo();
    }

};
class rat {
public:
    void rato() {
        cout<<"rat";

    }

};
class bat:public cat,rat {
public:
    void bato() {
        cout<<"bat";
        dogo();
        cato();
        rato();

    }

};

string str="Anto Jebikshan";
    ofstream out("anto.txt");
    out<< str;

    out.close();
template<class T>
T add(T a, T b) {
    return a+b;
}
class anto {
private:
    int a=100;
public:
    void ph() {
        cout<<"function call"<<endl;
    }
    void prvalue() {
        cout<<"value of a is "<<this->a<<endl;
    }
};
template<class d1,class d2>
class mul {
private:
    d1 value1;
    d2 value2;
public:
    mul(d1 a,d2 b) {
        value1=a;
        value2=b;
    }
    void display() {
        cout<<"the value of a is "<<value1<<endl;
        cout<<"the value of b is "<<value2<<endl;
    }
};
anto an;
    anto* ptr = &an;
    ptr->ph();
    ptr->prvalue();
    mul<int ,float> m(45,67);
    mul<int ,float>* ptr1 = &m;
    ptr1->display();

    cout<<add(56,90);
v1.push_back(500);
void display(vector<int> v) {
    for(auto it : v) {
        cout<<it<<endl;
    }
}
vector<int> v1 = {23,45,656,7,67,78};
    display(v1);
    v1.insert(v1.begin(),3);
    display(v1);
    cout<<v1.at(3);
    v1.pop_back();
    v1.erase(v1.end());
    display(v1);
list<int> l = {1, 2, 3, 4};
    list<int>::iterator it = l.begin();
    it++;
    it++;
    cout << "Element at index 2 is " << *it << endl;
*/

int main() {

    map<string ,int> m ={{"anto",23},{"aj",78}};
    m["asd"]=8;
    return 0;

}































