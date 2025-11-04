#include<iostream>
using namespace std;

void calculate(float radius,float *circumference,float *area){
    *circumference=2*3.1416*radius;
    *area=3.1416*radius*radius;
}

int main(){
    float r,c,a;
    cin>>r;

    calculate(r,&c,&a);

    cout<<a<<endl;
    cout<<c<<endl;

    return 0;
}

