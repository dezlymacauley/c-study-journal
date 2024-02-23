# There are four fundamental tasks in the creation of any C program:
- Editing
- Compiling
- Linking
- Executing

All c source code files end with the `.c` extension. E.g. `epic_program.c`

The output from the compiler is know as object code,
and it is stored in files called object files 
(same name as source file with a .obj (on Windows) or .o extension (on Linux)

You need to download the GNU compiler collection.
```
sudo pacman -s gcc
```

To compile your program:
```
cc -c name-of-your-program.c
```

or

```
gcc -c name-of-your-program.c
```

---

After the program has been translated into objed code, 
it is ready to be linked. The purpose of the linking phase,
is to get the program itnot a final form for execution on the computer.

Linking is basically getting all of the dependencies and code, 
and puttng everything together in one executable file.

Linking usually occurs automatically when compiling.

---

When the compiling process has succeeded, an executable file will be produced.
On Windows its a .exe file
On Linux there will be no exension (a.out by default)

---

To run the executable binary `./my_cool_file`

---

How to compile your code to a specific version of C:
```
gcc HelloWorld.c --std=c99
```

---

How to check what is the default version on your computer?

gcc -dM -E -x c /dev/null | grep -E '(__STDC_VERSION__|__cplusplus)'
```
gcc -dM -E -x c /dev/null | grep '__STDC_VERSION__'
```

You will get an output that looks like this:

#define __STDC_VERSION__ 201710L

This is the equivalent of --std=c17

---

How to compile with a specific name:

```
gcc HelloWorld.c -o HelloWorld
```

---
