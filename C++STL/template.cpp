#include <iostream>
#include<list> 
using namespace std; 

/*
? Templates - freedom from datatypes
*/ 

template<typename T>
int search(T arr[], int n, T key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;
        }
        return n;
    }
}


int main() {
    float b[] = {1.1, 1.2, 1.3};
    int n = sizeof(b)/sizeof(float); 
    float key = 1.1; 
    cout<<search(b, n, key)<<endl;

}

