# get_next_line

This function receives a file descriptor, for each call it attempts to read one line from it and returns a string allocated with malloc. If it fails or there's nothing to read it returns a null pointer.

get_next_line reads in blocks of BUFFER_SIZE.

get_next_line should be able to read from multiple files descriptors in any order.

More information [get_next_line.pdf](https://github.com/Kevin-Seligmann/get_next_line/blob/main/get_next_line.pdf)

Styleguide [Norminette](https://github.com/42School/norminette)

# Usage

It's advisable to use this function along with [libft](https://github.com/Kevin-Seligmann/libft/)

One should be able to use this as any other regular C function.

Use the flag ´-D BUFFER_SIZE=N´ to change the read buffer size. 

## 42

[42](https://www.42network.org/about-us/) Is a programming school that teaches in an innovative way, focused on an strict model of peer to peer evaluation and self learning via the writting of, mostly, coding projects.

## Score/Testing

 - Evaluation (125/125)
 - [Francinette](https://github.com/xicodomingues/francinette) (All OK)

## Comments about solution

The read() function has an internal pointer that moves forwards for each byte read. GNL reads in chunks of BUFFER_SIZE, it's expected that sometimes it will read past a line jump. In that case, the part read after the line jump will be stored on static memory for future calls, there's no way to read it again from the source with the tools provided.

The internals working of the function are about reading until a line jump or EOF are found, concatenating that to the leftover, splitting the result in a part containing the string to return (Up until the first line jump or the end) and the new leftover, and lastly cleaning up any unused memory and returning the appropriate string.

To manage many file descriptors, an array of strings is used, where each file descriptor is its own index to the array.
