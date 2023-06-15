#include <unistd.h>
#include <string.h>

int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t bytes_written = write(STDERR_FILENO, message, strlen(message));

	if (bytes_written == -1)
	{
		/* Error occurred while writing */
		return 1;
	}

	return 1;
}
