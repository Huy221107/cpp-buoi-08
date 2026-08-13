#include <iostream>
#include <string>
using namespace std;
int main(){
char n;
cout<<"nhap 1 ky tu diem (A, B, C, D, F) :";
cin >>n;
switch (n){
    case 'A' : cout<<"diem 4.0";
  break;
    case 'B' : cout<<"diem 3.0";
    break;
    case 'C'     : cout<<"diem 2.0";
    break;
    case 'D': cout<< "diem 1.0";
    break;
    case 'F' : cout<< "diem 0.0";
    break;
     default : cout <<" diem chu khong hop le";
}
return 0;
}