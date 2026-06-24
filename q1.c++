#include <iostream>
using namespace std;
int main(){
    int arr[5];
    for (int i = 0; i <5; i++){
        cout<<"Element:"<<i+1<<"=";
        cin>>arr[i];
    }
    cout<<"ARRAY"<<endl;
    for (int i = 0; i <5; i++){
        cout<<arr[i]<<" ";
    }
} 
