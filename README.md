# Gobed

[![License: GPLv3](https://img.shields.io/badge/License-GPLV3-red?style=for-the-badge)](http://www.gnu.org/licenses/gpl-3.0)

Gobed is a "sleep" rewrite in C

## Building

```sh
# Result can be found at build/gobed
meson setup build/
cd build && ninja
```

```sh
# Use another compiler to build gobed

CC=clang meson setup build/
cd build && ninja

```
