#include <iostream>
#include <fstream>
using namespace std ;
int main()
{
   // ofstream constructor opens file
   ofstream outClientFile( "clients.dat", ios::out ); 

   if ( !outClientFile ) {  // overloaded ! operator
      cerr << "File could not be opened" << endl;
      exit( 1 );    // prototype in stdlib.h
   }
cout << "Enter the account, name, and balance.\n"
        << "Enter end-of-file to end input.\n? ";
    int account;
   char name[ 30 ];
   float balance;

   while ( cin >> account >> name >> balance ) {
      outClientFile << account << ' ' << name
                    << ' ' << balance << '\n';
      cout << "? ";
   }

   return 0;  // ofstream destructor closes file
}

