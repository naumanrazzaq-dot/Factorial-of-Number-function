#include <iostream>

using namespace std;

    int factorN(int n){
        int fact=1;
    for(int i=0;i<=n; i++){
        fact *=i;
    }
    return fact;

    }
int main(){

    cout<< factorN(4);
    return 0;
}
