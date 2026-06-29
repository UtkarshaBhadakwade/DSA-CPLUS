#include <iostream>
using namespace std;
int main(){
    int n=7;
    int temp[n];
    cout<<"Enter the temperature of "<<n<<" days:"<<endl;
    for (int i=0;i<n;i++){
        cin>>temp[i];
    }
    int hottest=temp[0];
    int coldest=temp[0];
    for (int i=0;i<n;i++){
        if(temp[i]>hottest){
            hottest=temp[i];
        }
        else{
            coldest=temp[i];
        }
        
        }float sum=0;
        for(int i=0;i<n;i++){
            sum+=temp[i];
    }
    float average=sum/n;
    cout<<"Hottest temperature: "<<hottest<<endl;
    cout<<"Coldest temperature: "<<coldest<<endl;
    cout<<"Average temperature: "<<sum/n<<endl;
}