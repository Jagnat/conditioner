@echo off
cl ..\src\sdl_game.cpp SDL2.lib SDL2main.lib OpenGL32.lib /nologo /MDd /Zi /Iinclude ^
/D_CRT_SECURE_NO_WARNINGS /link /incremental:no /OUT:lofi_game.exe /LIBPATH:lib /SUBSYSTEM:CONSOLE