#include<iostream>
using namespace std;
const int N = 5005;
int fa[N];
int find(int x)
{
    if(fa[x] != x)
        fa[x] = find(fa[x]);
    return fa[x];
}
void unite(int x,int y)
{
    x = find(x);
    y = find(y);
    if(x != y) fa[y] = x;
}

int main()
{
    int n,m,p;
    cin>>n>>m>>p;
    for(int i=1;i<=n;i++) fa[i]=i;
    for(int i=1;i<=m;i++)
    {
        int a,b;
        cin>>a>>b;
        unite(a,b);
    }
    for(int i=1;i<=p;i++)
    {
        int a,b;
        cin>>a>>b;
        if(find(a)==find(b))
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}