#include <bits/stdc++.h>
using namespace std;

long long solve(long long n)
{
   priority_queue <long long, vector <long long>, greater <long long> >pq;


    for(long long i=1; i<=n; i++)
    {
        long long x;
        scanf("%lld", &x);
        pq.push(x);
    }

    long long sum=0, total=0;

    while(pq.size()>1)
    {
      total=pq.top();
      pq.pop();
      total=total+pq.top();
      pq.pop();
      sum=sum+total;
      pq.push(total);
    }
    return sum;
}

int main ()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long n;
        scanf("%lld", &n);
        printf("%lld\n", solve(n));
    }
    return 0;
}
