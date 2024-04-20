# libft

Libft is a set of functions that constitute the first project in the core curriculum at school 42.  *ft_printf* and *get_next_line* are incorporated from later projects.
The makefile builds a library named *libft*.

Including the resulting library *libft.a* in a project along with the header file *libft.h* allows for the use of the functions in the library.  For example the library can be placed in a folder called *lib* along with any other libraries being used, and the header file similarly in a folder called *includes*, following a common convention.  Compiling a project and linking the library might look similar to:

> *cc <myproject> -L ./lib/ -lft -I ./include/*


