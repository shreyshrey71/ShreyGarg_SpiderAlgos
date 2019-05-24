#include<bits/stdc++.h>

using namespace std;

int n;
string a[1000];

int partition(int x,int y)
{string m=a[y];
 int i= x-1;
 for(int j=x;j<y;j++)
 {if(a[j]<=m)
  {i++;
   string temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  }
 }
 string temp=a[y];
 a[y]=a[++i];
 a[i]=temp;
 return i;
}
void quicksort(int x,int y)
{if(x<y)
 {int t=partition(x,y);
  quicksort(0,t-1);
  quicksort(t+1,y);
 }
}
int main()
{cin>>n;
 for(int i=0;i<=n;i++)
 getline(cin,a[i]);
 quicksort(0,n);
 for(int i=0;i<=n;i++)
 cout<<a[i]<<endl;
 return 0;
}
