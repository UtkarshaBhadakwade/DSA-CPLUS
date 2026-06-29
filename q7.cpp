#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of an item:";
    cin>>n;
    int price[n]; 
    for(int i=0;i<n;i++){
    cin>>price[i];
    }
    int total=0;
    for(int i=0;i<n;i++){
        total+=price[i];
    }
    int Expensive=price[0];
    for(int i=1;i<n;i++){
        if(price[i]>Expensive){
            Expensive=price[i];
        }
    }
    cout<<"Total bill:"<<total;
    cout<<"Expensive item:"<<Expensive;
}