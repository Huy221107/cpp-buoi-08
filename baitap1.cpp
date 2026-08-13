#include <iostream>
using namespace std;
int main (){
    int d;
    cout<< " moi nhap vao diem thi :";
    cin>>d;
    if(d<0||d>10){
        cout<< "diem so khong hop le";
    }
    else if (d>=8){
        cout<< "gioi";
    }
    else if(d>=6.5){
        cout<<"kha";
    }
    else if(d>=5){
        cout<<"trung binh";
    }
    else {
        cout<<"yeu";
    }
    return 0;
}
