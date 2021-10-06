#include <bits/stdc++.h>
#include <math.h>
using namespace std; 

int rev(int num) {
    int res = 0;
    int max_pow = (int)log10((double)num);

    while(num) {
        int temp = num%10; 
        res += temp*pow(10, max_pow);
        num = num/10;
        max_pow--;
    }

    return res;
}

int main() {
    int n; 
    cin>>n; 

    while(n--) {
        int num; 
        cin>>num; 

        cout<<rev(num)<<endl;
    }
    return 0;
}