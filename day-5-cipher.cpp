// // // write a cpp program to check odd_even
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}
// // write a cpp program to input string and reverse it
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    reverse(a.begin(),a.end());
    cout<<a;
    return 0;
}
// write a cpp program to check thevowels and consosn ets in the string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    int vowels=0;
    for(int i=0;i<a.length();i++){
        if(a[i]=='a'|| a[i]=='i' || a[i]=='e' || a[i]=='o' || a[i]=='u'){
            vowels++;
        }
    }
    cout<<"The vowels are : "<<vowels<<endl;
    cout<<"The consonants are : "<<(a.length()-vowels)<<endl;
    return 0;
}