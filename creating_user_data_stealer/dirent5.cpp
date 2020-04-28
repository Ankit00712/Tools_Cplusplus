#include <iostream>
#include <stdlib.h>
#include <dirent.h>
#include <string>

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

	struct dirent *de; // Pointer for directory entry 

	// opendir() returns a pointer of DIR type. 
	DIR *dr = opendir(userPath); 

	if (dr == NULL) // opendir returns NULL if couldn't open directory 
	{ 
		std::cout <<"Could not open current directory" ; 
		return 0; 
	} 

	// Refer http://pubs.opengroup.org/onlinepubs/7990989775/xsh/readdir.html 
	// for readdir() 
	while ((de = readdir(dr)) != NULL) 
			std::cout << de->d_name << std::endl; 

	closedir(dr);	 

}
 
