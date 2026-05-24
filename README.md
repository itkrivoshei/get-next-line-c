# Get Next Line in C

[![CI](https://github.com/itkrivoshei/get-next-line-c/actions/workflows/ci.yml/badge.svg)](https://github.com/itkrivoshei/get-next-line-c/actions/workflows/ci.yml)
[![License](https://img.shields.io/github/license/itkrivoshei/get-next-line-c?style=flat-square)](LICENSE)

C implementation of `get_next_line`, a function that reads from a UNIX file descriptor one line at a time.

## Tech stack

- C
- Make
- UNIX/POSIX file descriptors
- Custom `libft` support library

## Scope

- Reads from files or standard input
- Uses buffered reads with `BUFF_SIZE`
- Keeps unread data between calls
- Includes a small demo program in `main.c`
- Includes a smoke test through `make test`

## Requirements

- GCC or a compatible C compiler
- Make
- POSIX-like shell environment: Linux, macOS, or WSL

## Build

```bash
make
```

## Run

Read from a file:

```bash
./get_next_line path/to/file.txt
```

Read from standard input:

```bash
./get_next_line < path/to/file.txt
```

## Test

```bash
make test
```

## Clean

```bash
make fclean
```

## Return values

`get_next_line` returns:

```txt
 1   line was read
 0   end of file
-1   error
```

## Project structure

```txt
.
├── .github/workflows/ci.yml
├── libft/
├── get_next_line.c
├── get_next_line.h
├── main.c
├── Makefile
├── LICENSE
└── README.md
```

## License

Licensed under the [GPL-3.0 License](LICENSE).
