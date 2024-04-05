#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

/*

Please enter this input:

9695662060463906
9722056337918114
5781437172862868
2403706943449224
2376906355361928

*/

int main(){
    int mx=1;
    ull x;
    stack<int> s[5];
    for(int i=0,j=0;i<5;i++,j=0){
        cin >> x;
        while(x/=2)s[i].push(x%2),j++;
        mx=max(j,mx);
    }  
    for(int i=0;i<5;i++){
        cout << ":";
        while(s[i].size()<=mx)s[i].push(0);
        while(!s[i].empty())cout << (s[i].top() ? "@" : "."),s[i].pop();
        cout << "\n";
    }
}

