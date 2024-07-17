gcc src\main1.c -c -o build\main.o
gcc src\physics2D.c -c -o build\physics2D.o
gcc build\main.o build\physics2D.o lib\raylib.dll -o bin\main.exe
bin\main.exe