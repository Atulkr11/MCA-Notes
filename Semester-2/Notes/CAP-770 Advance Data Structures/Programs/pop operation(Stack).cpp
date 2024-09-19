/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<stdlib.h>
#define MAX 5
using namespace std;
int top=-1,st[MAX];
void push(int st[],int value);
void displayPositiveandNegative(int st[]);
int main(){
int val,option;
do{
cout<<"Enter your choice:";
cout<<"\n1.push\n2.display\n3.exit\n";
cin>>option;
switch(option)
{
case 1:
cout<<"Enter the number to be pushed into the stack:";
cin>>val;
push(st,val);
break;
case 2:
displayPositiveandNegative(st);
break;
case 3:
exit(0);
}
}while(option!=3);
return 0;
}
void push(int st[],int val){
if(top==MAX-1)
{
cout<<"\n STACK OVERFLOW";

}
else{
top++;
st[top]=val;
}
}
void displayPositiveandNegative(int st[]){
int i,j;
int countPositive=0,countNegative=0;
if(top==-1)
cout<<"\n STACK is EMPTY";
else
for(i=top;i>=0;i--)
{
if(st[i]>0)
countPositive++;
else if(st[i]<0)
countNegative++;
}
cout<<"Number of positive values:"<<countPositive<<endl;
cout<<"Number of Negative values:"<<countNegative<<endl;
}