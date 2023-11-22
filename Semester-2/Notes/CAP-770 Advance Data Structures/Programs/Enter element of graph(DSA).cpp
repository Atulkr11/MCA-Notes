/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
int vertices,edges,source,destination;
static int graph[10][10];
cout<<"Enter number of vertices: ";
cin>>vertices;
cout<<"Enter number of edges: ";
cin>>edges;
for(int i=0;i<vertices;i++)
{
cout<<"enter source for edge: "<<i<<": ";
cin>>source;
cout<<"enter destination for edge: "<<i<<": ";
cin>>destination;
graph[source][destination]=1;
}
for(int i=0;i<vertices;i++)
{
for(int j=0;j<vertices;j++)
{
cout<<graph[i][j]<<" ";
}
cout<<endl;
}
return 0;

}