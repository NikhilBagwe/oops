#include <iostream>
using namespace std;

int add(int a, int b){
    cout<<"Function 1"<<endl;
    return (a+b);
}

double add(double a, double b){
    cout<<"Function 2"<<endl;
    return (a+b);
}

int add(int a, int b, int c){
    cout<<"Function 3"<<endl;
    return (a+b+c);
}

double add(int a, double b){
    cout<<"Function 4"<<endl;
    return (a+b);
}

int main() {
    
    cout<<add(4,9)<<endl;
    cout<<add(4.5,2.5)<<endl;
    cout<<add(4,9,5)<<endl;
    cout<<add(4,9.5)<<endl;

    return 0;
}
