#define RED 4
#define WHITE 15

unsigned int VideoMemoryIndex = 0;

void printf(char* str, unsigned int foreground, unsigned int background)
{
    static unsigned short* VideoMemory = (unsigned short*)0xb8000;
    unsigned short color = (foreground << 4) + background;

    for(int i = 0; str[i] != '\0'; ++i) {
        VideoMemory[VideoMemoryIndex] = (unsigned short) str[i] | (color << 8);
        VideoMemoryIndex++;
    }
}



typedef void (*constructor)();
extern "C" constructor start_ctors;
extern "C" constructor end_ctors;
extern "C" void callConstructors()
{
    for(constructor* i = &start_ctors; i != &end_ctors; i++)
        (*i)();
}



extern "C" void kernelMain(const void* multiboot_structure, unsigned int /*multiboot_magic*/)
{
    // 80 charachters per line
    printf("                                                                                ", RED, RED);
    printf("                                                                                ", RED, RED);
    printf("                                                                                ", RED, RED);
    printf("                  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB                           ", RED, RED);
    printf("                  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB                           ", RED, RED);
    printf("                                   \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB                           ", RED, RED);
    printf("                  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB                                             ", RED, RED);
    printf("                  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB                           ", RED, RED);
    printf("                  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB       \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB                           ", RED, RED);
    printf("                  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB\xDB   \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB                           ", RED, RED);
    printf("                  \xDB\xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB         \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB                           ", RED, RED);
    printf("                  \xDB\xDB\xDB\xDB     \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB          \xDB\xDB\xDB                           ", RED, RED);
    printf("                  \xDB\xDB\xDB\xDB   \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB   \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB   \xDB\xDB                           ", RED, RED);
    printf("                  \xDB\xDB\xDB\xDB   \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB   \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB    \xDB                           ", RED, RED);
    printf("                  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB   \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB   \xDB\xDB                           ", RED, RED);
    printf("                  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB\xDB   \xDB\xDB\xDB                           ", RED, RED);
    printf("                  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB           \xDB\xDB\xDB\xDB                           ", RED, RED);
    printf("                  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB                           ", RED, RED);
    printf("                        \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB                                 ", RED, RED);
    printf("                             \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB                                      ", RED, RED);
    printf("                                 \xDB\xDB\xDB\xDB\xDB                                          ", RED, RED);
    printf("                                                                                ", RED, RED);
    printf("                                                                                ", RED, RED);
    printf("                                                                                ", RED, RED);
    printf("                                                                                ", RED, RED);


    while(1);
}