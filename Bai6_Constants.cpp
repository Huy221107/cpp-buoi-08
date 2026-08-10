#include <iostream>
using namespace std;
#define MA_CONG_TY "CTY001"
int main(){
    const double TAX_RATE =0.1;
    const double MUC_LUONG_TOI_THIEU =5000000;
    cout<< "Ma cong ty :"<<MA_CONG_TY<<endl;
    cout<<"Thue suaat :"<<TAX_RATE<<endl;
    cout<<"Muc luong toi thieu chiu thue :"<<MUC_LUONG_TOI_THIEU<< endl;
    double luong= 15000000,tienthue=0;
if(luong>MUC_LUONG_TOI_THIEU){
    tienthue=(luong-MUC_LUONG_TOI_THIEU)*TAX_RATE;}
    cout<<"Luong :"<<luong<< endl;
    cout<< "Tien thue phai nop :"<<tienthue<<endl;
return 0;
}
