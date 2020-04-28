#include <stdio.h>
#include <dirent.h>

int main()
{
    DIR *folder;
    struct dirent *entry;
    int files = 0;

    folder = opendir(".");
    if(folder == NULL)
    {
        perror("Unable to read directory");
        return(1);
    }

    while( (entry=readdir(folder)) )
    {
        files++;
        printf("File %3d: %s, %d\n",
                files,
                entry->d_name,
               entry->d_type                    // MinGW compiler’s C library lacks the dirent->d_type member
              );
    }

    closedir(folder);

    return(0);
}
