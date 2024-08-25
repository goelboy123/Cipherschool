// write a cpp program to create the sum of the array
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<a;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
    return 0;
}
//write a cpp program to create the sum of odd and even number separtely
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int even=0;
    int odd=0;
    for(int i=0;i<a;i++){
        if(arr[i]%2==0){
            even=even+arr[i];
        }
        else{
            odd=odd+arr[i];
        }
    }
    cout<<"The sum of even numbers is: "<<even<<endl;
    cout<<"The sum of the odd numbers is: "<<odd<<endl;
    return 0;
}
// write a cpp to count the number of odd and even numbers
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int odd=0;
    int even=0;
    for(int i=0;i<a;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"The number of odd are :"<<odd<<endl;
    cout<<"The number of even are : "<<even<<endl;
    return 0;
}