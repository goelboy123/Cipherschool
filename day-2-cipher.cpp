// write a cpp progam to takes three integers and print the largest
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"Largest: "<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<"Largest: "<<b<<endl;
    }
    else{
        cout<<"Largest: "<<c<<endl;
    }
    return 0;
}
// Write a C++ program that takes an integer score (0-100) as input from the user and
//  prints the corresponding grade using if-else-if statements.
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a<=100 && a>=90){
        cout<<"Grade : A";
    }
    else if(a>=80 && a<=89){
        cout<<"Grade : B";
    }
    else if(a>=70 && a<=79){
        cout<<"Graade : C";
    }
    else if(a>=60 && a<=69){
        cout<<"Grade : D";
    }
    else if(a>=0 && a<=59){
        cout<<"Grade : E";
    }
    return 0;
}
// write a cpp program to print the month
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    switch(a){
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
    }
    return 0;
}