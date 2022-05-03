#include "main.h"
#include <stdlib.h>

/**
* Filenname : name of the file.
* Text_content : NULL terminated string to add at the end of the file.
* Return: 1 on success and -1 on failure
* Do not create the file if it does not exist
* If filename is NULL return -1
* If text_content is NULL, do not add anything to the file. 
* Return 1 if the file exists and -1 if the file does not 
        exist or if you do not have the required permissions to write the file
*/
int append_text_to_file(const char *filename, char *text_content)
{
    int o, w, len = 0;
    
    if(filename == NULL)
        return(-1);
    if(text_content == NULL)
    {
        for(len = 0;text_content[len];)
            len++;
    }
    o = open(filename , O_WRONLY | O_APPEND);
    w = write(0,text_content,len);
    if(o == -1 || w == -1)
        return(-1)
    close(o);
    return(1);
}