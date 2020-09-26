#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, l, b;
    cin>>a>>l>>b;
    while(a--){
        int ai;
        cin>>ai;
        if(ai<=l || ai<=b)
        {
            cout<<"DA"<<endl;
            continue;
        }
        else{
            cout<<"NE"<<endl;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
