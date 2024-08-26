// Ques - 01: Write a C++ program that takes an integer N as input from the user and calculates the sum of the first N natural numbers using a for loop.
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int sum=0;
    for(int i=1;i<=a;i++){
        sum=sum+i;
    }
    cout<<"The sum is given by : " <<sum;
    return 0;
}
//  ques -2 Write a C++ program that takes an integer N as input from the user and calculates the factorial of N using a loop.
#include<iostream>
using namespace std;
int fact(int a){
    int z=1;
    for(int i=1;i<=a;i++){
        z=z*i;
    }
    return z;
}
int main(){
    int a;
    cin>>a;
    cout<<"The factorial is given by "<<fact(a);
    return 0;
}
// Ques-03: Write a C++ program that takes an integer N as input from the user and prints the multiplication table of N up to 10 using a loop.
#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=1;i<=10;i++){
        cout<<num<<" X "<<i<<" = "<<num*i<<endl;
    }
    return 0;
}