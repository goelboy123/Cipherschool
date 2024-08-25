// write a cpp program to concat rwo string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    string b;
    getline(cin,b);
    cout<<"Concated_string"<<a+b<<endl;
    return 0;

}
// write a cpp program to fins the square
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    cout<<"Sqaure is "<<a*a<<endl;
    return 0;
}
// write a cpp program take 5 grades and calculate average of the number
#include<iostream>
using namespace std;
int main(){
    int grade1;
    int grade2;
    int grade3;
    int grade4;
    int grade5;
    cin>>grade1>>grade2>>grade3>>grade4>>grade5;
    int sum=grade1+grade2+grade3+grade4+grade5;
    cout<<float(sum)/float(5);
    

    return 0;
}