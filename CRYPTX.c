#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define 密钥 123
#define ねこ 0
#define サル 1


void 处理(char *);

int main() {
    printf("\033[0;32m");
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            printf("\n  ▄████████    ▄████████ ▄██   ▄      ▄███████▄     ███     ▀████    ▐████▀ \n███    ███   ███    ███ ███   ██▄   ███    ███ ▀█████████▄   ███▌   ████▀  \n███    █▀    ███    ███ ███▄▄▄███   ███    ███    ▀███▀▀██    ███  ▐███    \n███         ▄███▄▄▄▄██▀ ▀▀▀▀▀▀███   ███    ███     ███   ▀    ▀███▄███▀    \n███        ▀▀███▀▀▀▀▀   ▄██   ███ ▀█████████▀      ███        ████▀██▄     \n███    █▄  ▀███████████ ███   ███   ███            ███       ▐███  ▀███    \n███    ███   ███    ███ ███   ███   ███            ███      ▄███     ███▄  \n████████▀    ███    ███  ▀█████▀   ▄████▀         ▄████▀   ████       ███▄ \n             ███    ███                                                    \n");

    printf("\033[0m");
    int 猫, 长度;
    char 美丽, *缓冲区 = ねこ;
    FILE* 文件指针;

    文件指针 = fopen("ceasear_cypher.txt", "r");
    
    if (文件指针) {
        fseek(文件指针, ねこ, SEEK_END);
        长度 = ftell(文件指针);
        fseek(文件指针, ねこ, SEEK_SET);
        缓冲区 = malloc(长度);
        if (缓冲区) {
            fread(缓冲区, サル, 长度, 文件指针);
        }
        fclose(文件指针);
    }

    for (猫 = ねこ; 猫 < 长度; 猫++) {
        美丽 = 缓冲区[猫];
        if (美丽 >= 'a' && 美丽 <= 'z') {
            美丽 = 美丽 - 密钥;
            if (美丽 < 'a') {
                美丽 = 美丽 + 'z' - 'a' + サル;
            }
            缓冲区[猫] = 美丽;
        } else if (美丽 >= 'A' && 美丽 <= 'Z') {
            美丽 = 美丽 - 密钥;
            if (美丽 < 'A') {
                美丽 = 美丽 + 'Z' - 'A' + サル;
            }
            缓冲区[猫] = 美丽;
        }
    }
    printf("\033[0;35m");
    printf("Decrypted Message: \n%s\n", 缓冲区);
    printf("\033[0m");
    处理(缓冲区);    
    return ねこ;
}

void 处理(char* 缓冲区) {
    char 检查[11];
    if (缓冲区) {
        strncpy(检查, 缓冲区, 11);
        if (strcmp(检查, "Agent Teddy") != ねこ) {
            printf("\033[1;31m");
            printf("\n\n⢀⡴⠑⡄⠀⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n⠸⡇⠀⠿⡀⠀⠀⠀⣀⡴⢿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n⠀⠀⠀⠀⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀ \n⠀⠀⠀⠀⢀⡀⠁⠀⠀⠈⠙⠛⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆⠀⠀⠀⠀⠀⠀⠀ \n⠀⠀⠀⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀⠀⢀⢴⣶⣆ \n⠀⠀⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦⣴⣾⠁⠸⣼⡿ \n⠀⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠉⠀⠀⠀⠀⠀ \n⠀⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀ \n⠀⠉⠈⠉⠀⠀⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀ \n⠀⠀⠀⠀⠀⠀⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀ \n⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀ \n⠀⠀⠀⠀⠀⠀⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀ \n⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀ \n⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠻⠿⠿⠿⠛⠉\n\n⣿⠉⣿⠉⣿⡏⠹⡏⢹⡏⢹⣿⣿⠉⣿⠉⣿⡟⢋⠛⣿⠉⡟⢉⡏⠹⠏⣹⣿\n⣿⠄⣿⠄⣿⡇⡄⠁⢸⡇⢸⣿⣿⠄⣿⠄⣿⠄⣿⣿⣿⠄⡀⢻⣿⡄⢠⣿⣿\n⣿⣦⣤⣴⣿⣧⣿⣤⣼⣧⣬⣭⣿⣦⣤⣴⣿⣧⣤⣤⣿⣤⣷⣤⣿⣧⣼⣿⣿\nC   R   Y   P   T       E   R   R   O   R\n\n'Ahhhhhh noooo!’\n‘This is not it!’\n‘Guess the software is bugging again.’\nI immediately dialled Lieutenant Chuck, my reliable subordinate.\n'Chuck, where are you?'\n'Hey, Teddy. Just going through some files. What's going on?'\n'CryptX is acting up again, Chuck. I need your expertise to straighten it out. It's unfortunate on a\nSunday morning, but we can't afford any hiccups.'\nThere was a moment of silence before Chuck responded, 'CryptX? It's becoming a routine now,\nTeddy. What's happening?'\n'No idea, Chuck. I have some important cipher text from bureau. I need you to fix it, and fast.'\nChuck sighed on the other end. 'Alright, Teddy. I'll see what I can do. But you know CryptX isn't a\nwalk in the park to troubleshoot.'\nI know, Chuck. Let's get this sorted and then I will take you on a ride.’\n‘Really?’\nChuck had an excited tone there.\n");
            printf("\033[0m");
        }
    }
}
