#include<bits/stdc++.h>

using namespace std;

string a[1000];

int heap(int n,int m)
{ int l=2*m+1,r=2*m+2,p=m;
 if(l<n&&a[l]>a[p])
 p=l;
 if(r<n&&a[r]>a[p])
 p=r;
 if(p!=m)
 {string s=a[p];
  a[p]=a[m];
  a[m]=s;
  heap(n,p);
 }
}
void heapsort(int n)
{for(int i=n/2-1;i>=0;i--)
 heap(n,i);
 for(int i=n;i>=0;i--)
 {string s=a[0];
  a[0]=a[i];
  a[i]=s;
  heap(i,0);
 }
}
int main()
{int n;
 cin>>n;
 for(int i=0;i<=n;i++)
 getline(cin,a[i]);
 heapsort(n);
 for(int i=0;i<=n;i++)
 cout<<a[i]<<endl;
 return 0;
}
