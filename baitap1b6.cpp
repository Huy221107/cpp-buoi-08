#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Nhap vao mot nam bat ky: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " la nam nhuan" << endl;
    } else {
        cout << year << " khong phai la nam nhuan" << endl;
    }

    return 0;
}