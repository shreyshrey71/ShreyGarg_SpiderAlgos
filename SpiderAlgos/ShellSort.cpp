#include<bits/stdc++.h>

using namespace std;

int n;
string a[1000];

void shellsort()
{for(int gap=n/2;gap>0;gap/=2)
 {for(int i=gap;i<=n;i++)
  {string temp=a[i];
  int j;
   for(j=i;j>=gap&&a[j-gap]>temp;j-=gap)
   {a[j]=a[j-gap];
   }
   a[j]=temp;
  }
 }
}

int main()
{
 cin>>n;
 for(int i=0;i<=n;i++)
 getline(cin,a[i]);
 shellsort();
 for(int i=0;i<=n;i++)
 cout<<a[i]<<endl;
 return 0;
}
