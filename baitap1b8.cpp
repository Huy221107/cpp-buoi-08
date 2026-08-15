#include <iostream>
using namespace std;
int main(){
    int n,tong=1;
    cout<<"nhap so nguyen n (0<=n<=12) :";
    cin>>n;
    if(n>=0&&n<=12){
        for(int i=1;i<n+1;i++){
tong*=i;
        }cout<<n<<"! = "<<tong;

    }
    else {
        cout<<n<<" nam trong khoang khong cho phep";
    }
    return 0;
}
