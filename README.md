# Snake
# Cài đặt SDL2 trên Windows . Sử dụng MSYS2 https://www.msys2.org 
Cài đặt SDL2 và các thư viện phụ thuộc:
pacman -S mingw-w64-ucrt-x86_64-gcc mingw-w64-ucrt-x86_64-SDL2 mingw-w64-ucrt-x86_64-SDL2_ttf mingw-w64-ucrt-x86_64-SDL2_image
 # Kiêm tra
  sdl2-config --version
# Biên dịch và chạy code
g++ -o game main.cpp -I/mingw64/include/SDL2 -L/mingw64/lib -lmingw32 -lSDL2main -lSDL2 -lSDL2_ttf -lSDL2_image

Sau đó 

./Snake_game.exe

#  Nếu dùng Visual Studio
# Thêm đường dẫn thư viện:
Vào Project Properties → C/C++ → General → Additional Include Directories, thêm:
C:\SDL2\include

Vào Project Properties → Linker → General → Additional Library Directories, thêm:
C:\SDL2\lib

Vào Project Properties → Linker → Input → Additional Dependencies, thêm:
SDL2.lib
SDL2main.lib
SDL2_ttf.lib
SDL2_image.lib

Copy các file .dll vào thư mục chạy chương trình
Copy SDL2.dll, SDL2_ttf.dll, SDL2_image.dll vào thư mục chứa file .exe.

# Các tệp DLL nằm trong thư mục:
C:\msys64\mingw64\bin
