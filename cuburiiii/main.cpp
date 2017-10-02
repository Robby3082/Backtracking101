#include <iostream>
using namespace std;
///pg-22 prbl 9 cuburi unu peste altu
int n,m,sol;

int x[15];
struct cub
{
    int l;
    int c;
} v[15];
void afisare()
{
    for(int i=1; i<=m; i++)
        cout<<x[i];
    cout<<endl;
    sol++;
}
int valid (int k)
{
    if(k>1 && v[x[k-1]].l<v[x[k]].l)
        return 0;

    if(k>1 && v[x[k-1]].c==v[x[k]].c)
        return 0;
    return 1;
}


void backtr(int k)
{
    for(int i=1; i<=n; i++)
    {
        x[k]=i;
        if(valid(k))
            if(k==m)
                afisare();
            else backtr(k+1);
    }
}



int main()
{
    int i;
    cin>>n>>m;
    for(i=1; i<=n; i++)
        cin>>v[i].l>>v[i].c;
    backtr(1);
    cout<<sol;

}
