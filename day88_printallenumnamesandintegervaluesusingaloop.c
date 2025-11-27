#include <stdio.h>

enum Colors {RED, GREEN, BLUE, YELLOW, ORANGE};

int main() {
    enum Colors c;
    for (c = RED; c <= ORANGE; c++) {
        printf("%d: ", c);
        switch(c) {
            case RED: printf("RED"); break;
            case GREEN: printf("GREEN"); break;
            case BLUE: printf("BLUE"); break;
            case YELLOW: printf("YELLOW"); break;
            case ORANGE: printf("ORANGE"); break;
        }
        printf("\n");
    }
    return 0;
}
