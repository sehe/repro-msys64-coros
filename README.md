# Install MSYS

From https://www.msys2.org/

Got installer https://github.com/msys2/msys2-installer/releases/download/2026-03-22/msys2-x86_64-20260322.exe

Next install some requirements

```
pacman -S mingw-w64-ucrt-x86_64-gcc
pacman -S mingw-w64-ucrt-x86_64-cmake
pacman -S mingw-w64-ucrt-x86_64-make
pacman -S mingw-w64-ucrt-x86_64-git
```

Clone repo

```
git clone https://github.com/sehe/repro-msys64-coros
cd repro-msys64-coros
cmake -B build .
ninja -C build/
./build/hello.exe
```
