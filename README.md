# Get Next Line in C

Archived 42 School / School 21 project implementing a C function that reads text from a file descriptor line by line.

## Overview

`get_next_line` is a low-level C programming project focused on reading input incrementally from files or standard input.

The project demonstrates file descriptor handling, buffer management, memory allocation, and careful return-value control.

## Features

- Reads a file line by line
- Works with UNIX file descriptors
- Uses manual memory management in C
- Includes a simple `main.c` test file
- Uses a supporting `libft` directory

## Project Structure

    .
    ├── get_next_line.c
    ├── get_next_line.h
    ├── main.c
    ├── libft/
    ├── author
    └── README.md

## Build

To build the supporting library:

    cd libft
    make

To compile the test program:

    gcc main.c get_next_line.c -o get_next_line

To run it with a file:

    ./get_next_line LICENSE

## Return Values

The function returns:

    1   line was read
    0   end of file
    -1  error

## Skills Demonstrated

- C programming
- UNIX file descriptors
- File input/output
- Manual memory management
- Buffer-based reading
- Basic systems programming

## Status

This repository is archived and kept public as part of my early engineering background from 42 School / School 21.

It is not actively maintained.

## License

This project is licensed under the GPL-3.0 License. See the LICENSE file for details.
