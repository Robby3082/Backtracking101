#include <iostream>
using namespace std;
int a[10][10],n,sol,x[11];

void citire()
{
    int i,j;
    cin>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            cin>>a[i][j];
}
void afisare()
{
    for(int i=1; i<=n; i++)
        cout<<x[i]<<" ";
    cout<<1;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    sol++;
}

int valid(int k)
{
    for(int i=1; i<k; i++)
        if(x[i]==x[k])
            return 0;
    if(k==n && a[x[k]][1]==0)
        return 0;

    if(a[x[k-1]][x[k]]==0)
        return 0;
    return 1;
}
void backtr(int k)
{
    x[1]=1;
    for(int i=2; i<=n; i++)
    {
        x[k]=i;
        if(valid(k))
            if(k==n)
                afisare();
            else backtr(k+1);
    }

}

int main()
{
    citire();
    backtr(2);
    cout<<sol;
}


