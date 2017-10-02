///restaurant. meniu din 3 feluri, 4 preparate pt 1, 5 pt 2, 3 pt 3
///toate meniurile
#include <iostream>
using namespace std;
int sol,x[50],n[4]={0,4,5,3};
void afisare()
{
for(int i=1;i<=3;i++)
    cout<<x[i]<<" ";
cout<<endl;
sol++;
}
void bk(int k)
{
    for(int i=1;i<=n[k];i++)
    {
        x[k]=i;
            if(k==3)
                afisare();
        bk(k+1);
    }
}
int main()
{
    bk(1);
    cout<<endl<<sol;
}
