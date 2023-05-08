#include "main.h"

/**
 * append_text_to_file - To append text at the end of file
 * @filename: the name of file
 * @text_content: To terminated string to add at the end of the file
 *
 * Return: if the function fails or  -1
 * return 1 if the file exists and -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int w, o, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
