#include <bits/stdc++.h>
#define I INT_MAX
using namespace std;

int G[][8]={
{I,I,I,I,I,I,I,I},
{I,I,25,I,I,I,5,I},
{I,25,I,12,I,I,I,10},
{I,I,12,I,8,I,I,I},
{I,I,I,8,I,16,I,14},
{I,I,I,I,16,I,20,18},
{I,5,I,I,I,20,I,I},
{I,I,10,I,14,18,I,I}
};
int near[8]={I,I,I,I,I,I,I,I};
int E[2][7];
int main()
{
    int min=I,i,j,n=7,u,v,k;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(G[i][j]<min)
            {
                min=G[i][j];
                u=i;
                v=j;
            }
        }
    }
    E[0][0]=u;E[1][0]=v;
    near[u]=near[v]=0;
    for(i=1;i<=n;i++)
    {
        if(near[i]!=0)
        {
            if(G[i][u]<G[i][v])
                near[i]=u;
            else
                near[i]=v;
        }
    }
    for(i=1;i<n-1;i++)
    {
        min=I;
        for(j=1;j<=n;j++)
        {
            if(near[j]!=0 && G[j][near[j]]<min)
            {
                k=j;
                min=G[j][near[j]];
            }
        }
        E[0][i]=k;
        E[1][i]=near[k];
        near[k]=0;

        for(j=1;j<=n;j++)
        {
            if(near[j]!=0 && G[j][k]<G[j][near[j]])
            {
                near[j]=k;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        cout<<E[0][i]<<"  "<<E[1][i]<<endl;
    }

}

