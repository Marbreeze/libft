# Libft
Implementation of some of the Standard C Library functions including some additional ones.

### Contents
* [What is libft?](#what-is-libft)
* [What's in it?](#whats-in-it)
* [How does it work?](#how-does-it-work)

### What is libft?
Libft is an individual project at 42 that requires us to re-create some standard C library functions including some additional ones.

Disclaimer: *Reinventing the wheel is bad, 42 makes us do this just so we can have a deeper understanding of data structures and basic algorithms. At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.*

### What's in it?

There are 4 sections:

1.  **Libc Functions:** Standard C functions
2.  **Additional functions:** Useful functions
3.  **Bonus Functions:** Linked list functions
4.  **Personal Functions:** Functions I use frequently in other projects.

Libc functions | Additional functions | Bonus Functions | Personal Functions
:----------- | :-----------: | :-----------: | -----------:
memset		| ft_memalloc	| ft_lstnew		| ft_lst_push 
bzero		| ft_memdel		| ft_lstdelone	| ft_is_wtcspc
memcpy		| ft_strnew		| ft_lstdel		| ft_ismin    
memccpy		| ft_strdel		| ft_lstadd		| ft_ismax    
memmove		| ft_strclr		| ft_lstiter	| ft_strupper   
memchr		| ft_striter	| ft_lstmap		| 
memcmp		| ft_striteri	|				| 
strlen		| ft_strmap		|				| 
strdup		| ft_strmapi	|				| 
strcpy		| ft_strequ		|				| 
strncpy		| ft_strnequ	|			
strcat		| ft_strsub		| | 
strlcat		| ft_strjoin	| | 
strchr		| ft_strtrim	| | 
strrchr		| ft_strsplit	| | 
strstr		| ft_itoa		| | 
strnstr		| ft_putchar	| | 
strcmp		| ft_putstr		| | 
strncmp		| ft_putendl	| | 
atoi		| ft_putnbr		| | 
isalpha		| ft_putchar_fd	| | 
isdigit		| ft_putstr_fd	| | 
isalnum		| ft_putendl_fd	| | 
isascii		| ft_putnbr_fd	| | 
isprint		|| | 
toupper		| | | 
tolower		| | | 


Notes:

- Most of the the files and function names are namespaced with an **ft** in front. It stands for Fourty Two (name of the school).

### How does it work?

The goal is to create a library called libft.a from the source files so I can later use that library from other projects at 42.

To create that library, after downloading/cloning this project, **cd** into the project, copy all the files from the sub folders to the root directory and finally, call make:

	cd libft
	make

You should see a *libft.a* file and some object files (.o).


To clean up:
1. call `make clean` (removing the .o files from the root).
2. call `make fclean` (removing the .o and .a files from the root).
