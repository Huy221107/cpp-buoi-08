#include <iostream>
#include <string>
using namespace std;
int main(){
    float diem;
    string khuVuc;
    cout<<"Nhap diem thi :";
    cin>>diem;
    cout<<"Nhap vao khu vuc (vi du :KV1,KV2,...):";
cin>> khuVuc;
if(diem>=20){
    if(khuVuc=="KV1"){
        diem+=0.75;
    }
    if(khuVuc=="KV2"){
        diem+=0.5;
    }
    cout<<"Diem thi sau khi cong diem khu vuc la :"<<diem<<endl;
}
else{
    cout<< "Khong du dieu kien xet tuyen"<<endl;
    cout<< "Diem thi :"<<diem<<endl;}
}