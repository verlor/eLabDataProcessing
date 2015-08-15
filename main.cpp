#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{

    int linecount = 0 ;
   std::string line ;
   std::ifstream infile( "10cic_Cdiv15__03_GCPL4_C12.txt" ) ;
   if ( infile ) {
      while ( getline( infile , line ) ) {
	 std::cout << linecount << ": " << line << '\n' ;//supposing '\n' to be line end
	 linecount++ ;
      }
   }
   infile.close( ) ;
    return 0;
}
