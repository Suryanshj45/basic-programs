#include <bits/stdc++.h>

using namespace std;

#define ll long long int


// maximum subarray sum
int subarraysum(vector<int> a)   // complexity O(n)
{
   int best=0,sum=0;
   for(int k=0;k<a.size();k++)
   {
      sum=max(a[k],sum+a[k]);
      best=max(best,sum);
   }
   return best;
}




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t t1=clock();
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<subarraysum(v)<<endl;
}
