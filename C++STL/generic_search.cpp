#include <iostream>
#include<list> 
using namespace std; 

/*
template<typename T>
int search(T arr[], int n, T key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;
        }
        return n;
    }
}
*/

template<class ForwardIterator, class T>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key){

    while(start!= end) {
        if(*start==key){
            return start;
        }
        start++;
    }
    return end;
}

/*
int search(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;
        }
        return n;
    }
}
*/

int main() {
    /*
    int arr[] = {1,2,3,4,10};
    int n = sizeof(arr)/sizeof(int); 
    int key = 10; 

    cout<<search(arr, n, key)<<endl;


    float b[] = {1.1, 1.2, 1.3};
    int n = sizeof(b)/sizeof(float); 
    float key = 1.1; 
    cout<<search(b, n, key)<<endl;
    */

    list<int> l; 
    l.push_back(1);
    l.push_back(2);
    l.push_back(4);
    l.push_back(5);
    l.push_back(7);
    l.push_back(8);

    auto it = search(l.begin(), l.end(), 5);
    if(it==l.end()){
        cout<<"ELement not present"<<endl;
    }else cout<<*it<<endl;
}