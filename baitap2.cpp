#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<< "moi nhap a :";
    cin>>a;
    cout<< "moi nhap b :";
    cin>>b;
    cout<<"moi nhap c :";
    cin>>c;
    cout<< " so lon nhap la :"<< ((a>b)?((a>c)?a:c):((b>c)?b:c))<<endl;
}