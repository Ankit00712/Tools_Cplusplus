#include <iostream>
#include <stdlib.h>

char* userDirectory()
{
 char* pPath;
 pPath = getenv ("USERPROFILE");
 if (pPath!=NULL)
 {
 	return pPath;
 } else {
 perror("");
 }
}

int main()
{

char* userPath = userDirectory();
std::cout << userPath;

}
 
