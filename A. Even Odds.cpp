

#include <bits/stdc++.h>
#include <vector>
#include <math.h>
#include <string>
#include <cstdlib>
#define ll long long 
#define lli long long int

#define vll vector<long long>
#define vlli vector<long long int>
#define pb push_back
#define pi pair<int, int>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)

#define pq priority_queue<ll, vector<ll>, greater<ll>>
#define all(v) v.begin(), v.end()

using namespace std;

int main()
{
    lli n,k;
    cin>>n>>k;

    if(n%2==0)
    {
        if(k<=n/2)
        {
            cout<<k*2-1<<endl;
        } 
        else{
            cout<<k*2-n<<endl;
        }
    }
    else{
        if(k<=n/2+1)
          cout<<k*2-1<<endl;
        else{
            cout<<k*2-n-1<<endl;
        }
    }
    
}