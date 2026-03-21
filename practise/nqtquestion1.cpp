#include <iostream>
using namespace std;

int cal_price(int i) {
    int price;
    if (i<=2){
        price = i*100;
    }
    else if (i>=2 && i<=5){
        price = 2*100 + (i-2)*50;
    }
    else {
        price = 2*100 + 3*50 + (i-5)*20;
    }
    cout<< price;
}
int main(){
    int i;
    cin >> i;
    cal_price(i);
}