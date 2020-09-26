#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        string s, res="";
        
        cin>>s;
        // for(int i=s.length()-1;i-1>=0;i--){
        //     if(s[i]==s[i-1])
        //         ++c;
        //     else{
        //         res+=(c+48);
        //         res+=s[i];
        //         c=1;
        //     }
        // }
        for(long unsigned int i=0;i<s.length();i++){
            int c=1;
            while(i<s.length()-1 && s[i]==s[i+1]){
                i++;
                c++;
            }
            cout<<c<<s[i];
        }
        cout<<endl;
       // reverse(res.begin(), res.end());
       // cout<<res<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
