#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream outFile("omkar.txt");
    if(!outFile){
        cerr<<"Error while creating file"<<endl;
        return 1;
    }
    outFile<<"This is line 1"<<endl;
    outFile<<"This is line 2"<<endl;
    outFile<<"This is third line"<<endl;
    outFile.close();

    ifstream inFile("omkar.txt");
    if(!inFile){
        cerr<<"Error while opening a file"<<endl;
        return 1;
    }
    string line;
    cout<<"Reading from input file"<<endl;
    while(getline(inFile,line))
    cout<<line<<endl;
    inFile.close();
    
    return 0;
}