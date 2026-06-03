<div align="center">

# get_next_line

Buffered C line reader for UNIX file descriptors.

[![CI](https://img.shields.io/github/actions/workflow/status/itkrivoshei/get-next-line-c/ci.yml?branch=main&style=for-the-badge&label=ci&logo=githubactions&logoColor=white&labelColor=0f172a)](https://github.com/itkrivoshei/get-next-line-c/actions/workflows/ci.yml)
[![C](https://img.shields.io/badge/C-89%20style-555555?style=for-the-badge&logo=c&logoColor=white&labelColor=0f172a)](get_next_line.c)
[![Make](https://img.shields.io/badge/Make-build-427819?style=for-the-badge&logo=gnu&logoColor=white&labelColor=0f172a)](Makefile)
[![License](https://img.shields.io/github/license/itkrivoshei/get-next-line-c?style=for-the-badge&labelColor=0f172a)](LICENSE)

</div>

## Overview

`get_next_line` reads one line at a time from a UNIX file descriptor.

The implementation keeps unread data in a static per-file-descriptor buffer and reads chunks of `BUFF_SIZE` bytes until it reaches a newline, end of file, or an error.

## API

```c
int get_next_line(const int fd, char **line);
```

Return values:

| Value | Meaning         |
| ----- | --------------- |
| `1`   | A line was read |
| `0`   | End of file     |
| `-1`  | Error           |

## Build and Run

```bash
git clone https://github.com/itkrivoshei/get-next-line-c.git
cd get-next-line-c
make
./get_next_line path/to/file.txt
```

Read from standard input:

```bash
./get_next_line < path/to/file.txt
```

Change the buffer size at compile time:

```bash
make CFLAGS="-Wall -Wextra -Werror -DBUFF_SIZE=128"
```

## Make Targets

Targets are defined in [`Makefile`](Makefile).

| Target        | Description                               |
| ------------- | ----------------------------------------- |
| `make`        | Build the `get_next_line` executable      |
| `make test`   | Run a smoke test for file and stdin input |
| `make clean`  | Remove object files                       |
| `make fclean` | Remove objects and executable             |
| `make re`     | Rebuild from scratch                      |

## Repository Layout

| Path                                 | Purpose                                   |
| ------------------------------------ | ----------------------------------------- |
| [`get_next_line.c`](get_next_line.c) | Line-reading implementation               |
| [`get_next_line.h`](get_next_line.h) | Public function declaration and constants |
| [`main.c`](main.c)                   | CLI smoke runner                          |
| [`libft/`](libft/)                   | Bundled support library                   |
| [`Makefile`](Makefile)               | Build, clean, and smoke-test targets      |

## Automation

- [`ci.yml`](.github/workflows/ci.yml) builds the project and runs the smoke test through GitHub Actions.

## License

[GPL-3.0](LICENSE)
