#include <iostream>                             //Program to list all files and sub-directories in a directory
#include <dirent.h> 

int main(void) 
{ 
	struct dirent *de; // Pointer for directory entry 

	// opendir() returns a pointer of DIR type. 
	DIR *dr = opendir("."); 

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
	return 0; 
} 

