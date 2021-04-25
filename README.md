# Libft 42 School

## About

Libft is a open source C library, with several function to help all kinds of projects in development. This is a very well organized and more completed version of the [Ecole 42](https://www.42.fr/en/ "42 schoool") libft project.

**Read:** [![LibftWiki](https://github.com/LuigiEnzoFerrari/material-design-icons/blob/main/src/github/actions/SVG/Github-wiki.svg)](https://github.com/LuigiEnzoFerrari/42School_Libft/wiki "Wiki Libft").



## How to use it

First clone the repository:

```sh
git clone http://github.com/LuigiEnzoFerrari/42School_Libft libft
```

Then go inside the project diretory and use the comand make to generate the **.a** file.

```sh
cd/libft
make
```

To clean the **.o** files use the command **make clean**.

```sh
make clean
```

Now you have a static library **.a** with all functions from the [libft](https://github.com/LuigiEnzoFerrari/42School_Libft/wiki/libft1 "libft by header type"). Now you can compile your project with the static library.

```sh
clang myproject.c libft/libft.a -o myproject.out
```

