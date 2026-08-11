# 📖 Get Next Line

*This project was developed as part of the 42 Madrid curriculum by rimatos- (Ricardo Jesús Matos Romero).*

## 📝 Description

`get_next_line` is a C function designed to read and return a single line from a given file descriptor (fd).

The core objective of the project is to successfully implement the following prototype:

```c
char	*get_next_line(int fd);

By calling this function repeatedly in a loop, you can read the text available on a file descriptor (such as a standard file, standard input, etc.) one line at a time until the end of the file (EOF) is reached.

The returned line always includes the terminating \n character, except if the end of the file was reached and it does not end with a newline.

This project is a deep dive into highly fundamental C concepts:

Utilizing the read() function.

Persistent memory through static variables.

Memory allocation and leak prevention (malloc and free).

Managing multiple file descriptors simultaneously (Bonus).

⚙️ How It Works (The Algorithm)
The main challenge of get_next_line is that read() doesn't know what a "line" is; it only reads chunks of bytes defined by BUFFER_SIZE.

To solve this, the algorithm relies on a static variable (storage) to act as an accumulator. It remembers the characters read in previous calls that haven't been returned yet. The logic is divided into three clear phases:

fill_storage (Reading Phase)

The function checks if the fd and buffer size are valid. It then uses read() in a loop to extract chunks of data. Each chunk is dynamically joined (ft_strjoin) to the storage variable until a newline character (\n) is found or EOF is reached.

extract_line (Parsing Phase)

Once we have enough data, this step isolates the specific string to be returned. It extracts characters from the beginning of storage up to and including the first \n.

update_storage (Saving Leftovers)

Since the buffer might have read past the \n (grabbing parts of the next line), this function cleans up the static variable. It frees the old memory and saves only the remaining characters (the "leftovers") for the next function call.

🚀 Compilation & Usage
The Files
The repository includes the mandatory files and the bonus implementation:

get_next_line.c / get_next_line_bonus.c

get_next_line_utils.c / get_next_line_utils_bonus.c

get_next_line.h / get_next_line_bonus.h

Compilation
You must compile the files adding the -D BUFFER_SIZE=n flag. The project is designed to handle any buffer size flawlessly (from 1 to 9999+).

cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line_bonus.c get_next_line_utils_bonus.c main.c

Usage Example
Here is a basic main.c implementation to read a file line by line:

#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
		return (1);
        
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}

🌟 Bonus Features
This implementation includes the full Bonus requirements. By upgrading the single static pointer to an array of static pointers (static char *storage[1024];), the function can seamlessly handle multiple file descriptors at the same time.

You can alternate reads from fd1, fd2, and fd3 in the same loop without losing the reading thread or mixing the contents of the files.

🤖 AI Usage Statement
Artificial Intelligence was used as a learning and debugging tool during the development of this project.

Specifically, it helped to:

Deeply visualize how static memory behaves across function calls using real-world analogies.

Understand how to properly secure pointers during ft_strjoin reallocations to avoid memory leaks.

Structure this README documentation.

AI was not used to blindly generate the logic. Every pointer arithmetic operation, malloc check, and memory free was manually analyzed, tested, and understood as part of the 42 learning process.