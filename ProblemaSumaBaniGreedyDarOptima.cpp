#include <iostream>
using namespace std;
int b[10],n,x[10],solo[10],maxi,S;
 void citire()
 {
     cin>>n>>S;
     for(int i=0;i<n;i++)
        cin>>b[i];
    maxi=S*n;
 }
 int valid(int k, int suma)
 {
     if(suma>S)
        return 0;
     if(k==n-1 && suma!=S)
        return 0;
     return 1;
 }

 int optim()
 { int s=0;
     for(int i=0;i<n;i++)
        s+=x[i];
     if(s<maxi)
        {for(int i=0;i<n;i++)
        solo[i]=x[i];
        maxi=s;}
 }

void backtr(int k, int suma)
{
    for(int i=0;i<=(S-suma)/b[k];i++)
    {
        x[k]=i;
        suma=suma+x[k]*b[k];
        if(valid(k,suma))
            if(k==n-1)
              optim();
        else backtr(k+1,suma);
        suma=suma-x[k]*b[k];
    }
}

int main()
{
    citire();
    backtr(0,0);
    for(int i=0;i<n;i++)
    if(solo[i])
        cout<<solo[i]<<" bancnote de "<<b[i]<<" lei"<<endl;


}
