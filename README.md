# get_next_line

This function receives a file descriptor, for each call it attempts to read one line from it and returns a string allocated with malloc. If it fails or there's nothing to read it returns a null pointer.

get_next_line reads in blocks of BUFFER_SIZE. If there's a piece of string that should not be returned (e.g "hello\nword" will return "hello\n", but it might consume the whole string from the source if BUFFER_SIZE is too big), it's saved on static memory for future calls.

The 'bonus' should make get_next_line be able to read from multiple files descriptors in any order.

To fully understand the scope of this project, I invite you to read the subject.

To learn about the styleguide we need to follow, I invite you to read the [Norminette](https://github.com/42School/norminette). 

# Compilation

This function has been tested with 'CC' compiler. One might change the value of BUFFER SIZE by compiling with -D.

e.g: cc -Wall -Wextra -Werror -D BUFFER_SIZE=1 get_next_line.c get_next_line_utils.c main.c

The original project was written for Mac and works for Debian and Ubuntu.

## 42

[42](https://www.42network.org/about-us/) Is a programming school that teaches in an innovative way, focused on an strict model of peer to peer evaluation and self learning via the writting of, mostly, coding projects.

## Score/Testing

 - Evaluation (125/125)
 - [Francinette](https://github.com/xicodomingues/francinette) (All OK)
