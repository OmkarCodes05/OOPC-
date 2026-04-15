#include<iostream>
using namespace std;
void input(double &a,double &b){
    cout<<"Enter num1& num2";
    cin>>a>>b;
}
double divide(double a, double b){
    if(b==0){
        throw runtime_error("Division by zero");
    }
    return a/b;
}
int main(){
    double a,b;
    try{
        input(a,b);
        cout<<divide(a,b);
    }
    catch(const runtime_error &e){
        cerr<<"Error:"<<e.what();
    }
    return 0;
    }