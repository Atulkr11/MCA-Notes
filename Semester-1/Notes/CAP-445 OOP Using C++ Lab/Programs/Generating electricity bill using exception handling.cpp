/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class ElecBill
{
private:
int customerType, UnitConsume, Rate, FixedRent, Payamount;
string CustomerName;

public:
void func()
{
try
{
cout << "press 1 for Domestic user" << endl
<< "Press 2 fro Commercial user" << endl;
cin >> customerType;

switch (customerType)
{
case 1:
Rate = 5;
FixedRent = 10;
cout << "Per Unit cost of electricity is rs 5" << endl;
cout << "Enter Customer Name : ";
cin >> CustomerName;
cout << "Enter Your Electricity Consume Rate : ";
cin >> UnitConsume;
if (UnitConsume < 0)
{
throw 1;
}
else
{
if (UnitConsume <= FixedRent)
{
cout << "You dont have to pay any amount" << endl;
}
else
{
Payamount = UnitConsume - FixedRent;
cout << "Name of Customer is : " << CustomerName << endl
<< "You have to pay rs : " << Payamount * Rate;
}
}
break;

case 2:

Rate = 15;
FixedRent = 5;
cout << "Per Unit cost of electricity is rs 5" << endl;
cout << "Enter Customer Name : ";
cin >> CustomerName;
cout << "Enter Your Electricity Consume Rate : ";
cin >> UnitConsume;
if (UnitConsume < 0)
{
throw 1;
}
else
{
if (UnitConsume == FixedRent)
{
cout << "You dont have to pay any amount" << endl;
}
else
{
Payamount = UnitConsume - FixedRent;
cout << "Name of Customer is : " << CustomerName << endl
<< "Total unit consume of you is : " << Payamount * Rate;
}
}
break;
default:
throw 2;
break;
}
}
catch (int a)
{
if(a == 1)
{
cout << "unit cannot be in negative" << endl;
}
else if(a == 2)
{
cout <<"Please choose between 1 and 2";
}
}
}
};

int main()
{
ElecBill ec;
ec.func();
return 0;
}