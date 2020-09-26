#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void swap_(char& a, char& b) 
{ 
    char temp; 
    temp = a; 
    a = b; 
    b = temp; 
}
long int toNum(string s){
    long int res=0;
    for(long unsigned int i=0;i<s.length();i++){
        res = res*10 + (s[i]-'0');
    }
    return res;
}
void permute(string str, int l, int r, int n, vector<long int>& possibles) 
{ 
    int i; 
  
    if (l == r) { 
  
        // Convert string to integer 
        long int j = toNum(str); 
        // Check for divisibility 
        // and print it 
        if (j % n == 0) 
            possibles.push_back(j); 
  
        return; 
    } 
  
    // Print all the permutations 
    for (i = l; i <= r; i++) { 
  
        // Swap characters 
        swap_(str[l], str[i]); 
  
        // Permute remaining 
        // characters 
        permute(str, l + 1, r, n, possibles); 
  
        // Revoke the swaps 
        swap_(str[l], str[i]); 
    } 
} 

int main() {
    long n, p, q, count=0;
    cin>>n>>p>>q;
    string numbers;
    cin>>numbers;
    vector<long int> possibles;
    permute(numbers, 0, numbers.length()-1, n, possibles);
    for(long unsigned int i=0;i<possibles.size();i++){
        //long long int num=toNum(possibles[i]);
        if(possibles[i]>=p && possibles[i]<=q)
            count++;
    }
    cout<<count;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
