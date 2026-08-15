#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "nhap vao so nguyen duong n (n>=2) :";
    cin>>n;
    if(n>=2){
        for(int i=2;i<n;i++){
            if(n%i==0){
                cout<<"uoc nho nhat lon hon 1 la :"<<i <<endl;
                break;
            }

        }cout<<"n la so nguyen to ";
    }
    else{
        cout<< " khong hop le";
    }
    return 0;
}
