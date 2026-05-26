<div align="center">

# get_next_line

Buffered C line reader for UNIX file descriptors.

[![CI](https://img.shields.io/github/actions/workflow/status/itkrivoshei/get-next-line-c/ci.yml?branch=master&style=for-the-badge&label=ci&logo=githubactions&logoColor=white)](https://github.com/itkrivoshei/get-next-line-c/actions/workflows/ci.yml)
[![C](https://img.shields.io/badge/C-89%20style-555?style=for-the-badge&logo=c&logoColor=white)](get_next_line.c)
[![Make](https://img.shields.io/badge/Make-build-427819?style=for-the-badge&logo=gnu&logoColor=white)](Makefile)
[![License](https://img.shields.io/badge/license-GPL--3.0-blue?style=for-the-badge)](LICENSE)

</div>

## API

```c
int get_next_line(const int fd, char **line);
```

Return values:

| Value | Meaning |
| --- | --- |
| `1` | A line was read |
| `0` | End of file |
| `-1` | Error |

The implementation keeps unread data in a static per-file-descriptor buffer and reads chunks of `BUFF_SIZE` bytes until a newline or EOF is reached.

## Build And Run

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
make CFLAGS="-Wall -Wextra -Werror -D BUFF_SIZE=128"
```

## Make Targets

| Target | Description |
| --- | --- |
| `make` | Build the `get_next_line` executable |
| `make test` | Run a smoke test for file and stdin input |
| `make clean` | Remove object files |
| `make fclean` | Remove objects and executable |
| `make re` | Rebuild from scratch |

## Files

```text
get_next_line.c   # line-reading implementation
get_next_line.h   # public function declaration and constants
main.c            # CLI smoke runner
libft/            # bundled support library
Makefile          # build, clean, smoke test
```

## License

[GPL-3.0](LICENSE)
