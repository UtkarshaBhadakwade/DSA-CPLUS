#include <iostream>
using namespace std;
int main(){
    int arr[5] = {0,1,0,1,1};
    int count0=0,count1=0;
    for (int i=0;i<5;i++){
        if(arr[i]==0){
            count0++;
        }
        else{
            count1++;
        }
 
    }
     cout<<"Student without ids: "<<count0<<endl;
     cout<<"Student with ids: "<<count1<<endl;
}