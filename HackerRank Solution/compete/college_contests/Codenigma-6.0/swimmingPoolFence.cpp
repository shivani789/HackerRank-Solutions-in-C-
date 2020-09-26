//Solution 1

#include <cmath>
#include <cstdio>
#include <climits>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int t;
    cin>>t;
    while(t--){
        long long int n, cost, min=LONG_MAX;
        cin>>n;
        long long int a[n], b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<n;i++){
            cost=0;
            for(int j=0;j<n;j++){
                long long int diff=abs(a[j]-a[i]);
                cost+=diff*b[j];
            }
            if(cost<min)
                min=cost;
        }
        cout<<min<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
Time Complexity - O(n*n)
Space Complexity - O(1)

//Solution 2

#include <cmath>
#include <cstdio>
#include<climits>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long int costOfOperation(long int n, long int height[], long int cost[], long int eqh){
    long int finalcost=0;
    for(int i=0;i<n;i++)
    {
        finalcost+=abs(height[i]-eqh)*cost[i];
    }
    return finalcost;
}
long long int bsearch(long int height[], long int cost[], long int n){
    long int maxheight=*max_element(height, height+n);
    long int low=0, high=maxheight+1, am, bm, m;
     long int ans=LONG_MAX;
    while(high>low){
        long int mid=(high+low)>>1;
        if(mid>0){
            bm=costOfOperation(n, height, cost, mid-1);
        }    
        else{
            bm=INT_MAX;
        }
        m=costOfOperation(n, height, cost, mid);
        am=costOfOperation(n, height, cost, mid+1);
        ans=min(ans, m);
        if(bm<=m) high=mid;
        else if(am<=m) low=mid+1;
        else return m;
    }
    return ans;
}

int main() {
     long int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long int height[n], cost[n];
        for(int i=0;i<n;i++) cin>>height[i];
        for(int i=0;i<n;i++) cin>>cost[i];
        cout<<bsearch(height, cost, n)<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
Time Complexity - O(logn)
Space Complexity - O(1)
