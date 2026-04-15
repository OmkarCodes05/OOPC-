#include <iostream>
using namespace std;
int main() {
    int a,b,choice;
cout<<"Enter Your Operation such as:\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division"<<endl;
cin>>choice;
cout<<"Enter Number 1:";
cin>>a;
cout<<"Enter Number 2:";
cin>>b;
switch(choice){
    case 1:
    cout<<"Addition is:"<<a+b<<endl;
    break;
    case 2:
    cout<<"Substraction is:"<<a-b<<endl;
    break;
    case 3:
    cout<<"Multiplication is:"<<a*b<<endl;
    break;
    case 4:
    if(b==0){
        cout<<"Division by zero not allowed"<<endl;
    }else{
    cout<<"Division is:"<<a/b<<endl;
}
break;
default:
cout<<"Wrong Choice Entered"<<endl;
}
return 0;
}
