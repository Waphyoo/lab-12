
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;


int main(){
    
    int i;
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();

    srand(time(0));
    i=rand()%9;
    string g;
    if(i==0)g="A";
    else if(i==1)g="B+";
    else if(i==2)g="B";
    else if(i==3)g="C+";
    else if(i==4)g="C";
    else if(i==5)g="D+";
    else if(i==6)g="D";
    else if(i==7)g="F";
    else if(i==8)g="W";

cout<<"You will get "<<g<<" in this 261102.";
}