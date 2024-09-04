# get_next_line

A C function to read files, line by line.

## Requirements

Styleguide [Norminette](https://github.com/42School/norminette)

- Repeated calls read the file descriptor pointed by fd, one line at the time.
- If EOF is reached or there's an error, returns NULL.
- It must be able to read from STDIN
- A macro BUFFER_SIZE must be defined, read() will read on blocks of that size.
- Must compile with flags -Wall -Wextra -Werror, have no leaks, or unexpected exits.
- Only read, malloc and free external functions are allowed

### Bonus requirements

 - Only one static variable is used
 - It should be able to read from multiples files

# Usage

It's advisable to use this function along with [libft](https://github.com/Kevin-Seligmann/libft/)

One should be able to use this as any other regular C function.

Use the flag ´-D BUFFER_SIZE=N´ to change the read buffer size. 

## 42

[42](https://www.42network.org/about-us/) Is a programming school that teaches in an innovative way, focused on an strict model of peer to peer evaluation and self learning via the writting of, mostly, coding projects.

## Score/Testing

 - Evaluation (125/125)
 - [Francinette](https://github.com/xicodomingues/francinette) (All OK)
