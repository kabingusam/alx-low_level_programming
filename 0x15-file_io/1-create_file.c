#include "main.h"
#include <stdlib.h>

/**
* filename : the name of the file to create
* text_content is a NULL terminated string to write to the file.
* Returns: 1 on success, 
*        :-1 on failure (file can not be created, file can not be written.
* The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.
* if the file already exists, truncate it
* if filename is NULL return -1
* if text_content is NULL create an empty file
*/
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}