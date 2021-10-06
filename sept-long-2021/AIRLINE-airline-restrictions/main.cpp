#include <bits/stdc++.h>
typedef long long ll; 

using namespace std;

int32_t main() {
    int test;
    cin>>test;

    while(test>0) {
        vector<int> bags(3);
        cin>>bags[0]>>bags[1]>>bags[2];

        int d, e;
        cin>>d>>e;

        sort(bags.begin(), bags.end());
        int hand = -1;
        for (int i = 0 ; i<3; i++) {
            if (e>=bags[i]) {
                hand = i;
            }
        }

        int weight = 0;
        int flag = 0;
        for(int i = 0 ; i < 3; i++) {
            if (i != hand) {
                weight += bags[i];
            }
        }

        if(weight <= d) {
            flag = 1;
        }


        if ((flag == 1) && (hand != -1)) {
            cout<< "YES";
        }
        else {
            cout<<"NO";
        }

        test--;
    }
    return 0;
}