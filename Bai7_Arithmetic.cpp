#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"nhap so thu nhat :";
    cin>>x;
    cout<<"nhap so thu hai :";
 cin>>y;
 int tong= x+y;
 int hieu=x-y;
 int tich=x*y;
int thuong=x/y;
int sodu =x%y;
cout<<"----KET QUA----"<<endl;
cout<<x<<"+"<<y<<"="<<tong<<endl;
cout<<x<<"-"<<y<<"="<<hieu<<endl;
cout<<x<<"*"<<y<<"="<<tich<<endl;
cout<<x<<"/"<<y<<"="<<hieu<<endl;
cout<<x<<"%"<<y<<"="<<sodu<<endl;
return 0;
}
