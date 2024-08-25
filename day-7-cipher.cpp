// // write a cpp program to sort the array using bubbble sort
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<a-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// write a cpp program to implement the insertion sort algothirm
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int count;
    for(int i=1;i<a;i++){
        count=0;
        int temp=arr[i];
        for(int j=0;j<i;j++){
            if(arr[j]>arr[i]){
                for(int k=i-1;k>=j;k--){
                    arr[k+1]=arr[k];
                    count=1;
                }
            }
            if(count==1){
                swap(arr[j],temp);
                break;
            }
        }
    }
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}