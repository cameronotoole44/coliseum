#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void clear_input_buffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF);
}

int main () {
    char player_class[20];
    char weapon[20];
    char monster_name[20];
    int health;
    int monster_health;
    int player_damage;
    int monster_damage;
    int choice;
    int defend_active = 0;

printf(
        " _____  _____  _____  _____  _____  _____  __       _____  _____  _____  _____  _____ \n"
        "|   __||_   _||   __|| __  ||   | ||  _  ||  |     |  _  || __  ||   __||   | ||  _  | \n"
        "|   __|  | |  |   __||    -|| | | ||     ||  |__   |     ||    -||   __|| | | ||     | \n"
        "|_____|  |_|  |_____||__|__||_|___||__|__||_____|  |__|__||__|__||_____||_|___||__|__| \n"
        "\n"
        "|             WELCOME TO THE ETERNAL ARENA                  |\n"
        "|               BLOOD - HONOR - GLORY                       |\n"
        "|                                                           |\n"
        "|                PRESS ENTER TO BEGIN...                    |\n"
    );
    getchar();




}


