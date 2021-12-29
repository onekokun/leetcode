#include <bits/stdc++.h>
using namespace std;

int main()
{
   vector<int> nums{2,2,3,3,3,4};

   int temp[10001];

   for(auto x: nums) temp[x]++;

   for(int i=0;i<10001;++i) temp[i]*=i;
   
   int exc = 0, inc=0;

   for(int i=0;i<=10001;++i)
   {
       int x = inc;
       inc = exc+temp[i];
       exc = max(x, exc);
   }

   return max(inc, exc);
}
