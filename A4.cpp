#include<iostream>
#include<cmath>
using namespace std;
//For Cube
int volume(int side){
return pow(side,3);
}
//For Sphere
float volume(float radius){
    return (4.0/3.0)*M_PI*pow(radius,3);
}
//For Cylinder
double volume(int height,int base_radius){
return M_PI*pow(base_radius,2)*height;
}

int main(){
    int a,b;
    float c;
    
    cout<<"Enter Side Length of Cube:"<<endl;
    cin>>a;
    cout<<"Volume of cube is:"<<volume(a)<<endl;
    
    cout<<"Enter Radius of Sphere:"<<endl;
    cin>>c; 
    cout<<"Volume of Sphere is:"<<volume(c)<<endl;

    cout<<"Enter Height and radius of Cylinder:"<<endl;
    cin>>a>>b;
    cout<<"Volume of cylinder is:"<<volume(a,b)<<endl;

return 0;
}