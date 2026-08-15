#include <iostream>
using namespace std;
int main(){
    int n,tong=0;
    cout<<"nhap so nguyen duong n :";
    cin>>n;
    for(int i=1;i<n;i++){
 if(i%3!=0){
    continue;
 }
 
    cout<<"i = "<<i<<endl;
    tong+=i;
 
    } 
    cout<< "tong = "<< tong;
}