#include <iostream>
using namespace std;
int main(){
    int p=8;
    int play[p];
    cout<<"Enter the score of 8 matches:";
    for(int i=0;i<p;i++){
        cin>>play[i];
    }
int highest=play[0];
for(int i=1;i<p;i++){
    if(play[i]>highest){
        highest=play[i];
    }

}
int count=0;
for(int i=0;i<p;i++){
    if(play[i]>50){
        count++;
    }
}
cout<<"Highest score: "<<highest<<endl;
cout<<"Number of scores above 50: "<<count<<endl;
}