#include <stdio.h>

enum Role {ADMIN, USER, GUEST};

int main() {
    enum Role r;
    for (r = ADMIN; r <= GUEST; r++) {
        switch(r) {
            case ADMIN: printf("Welcome Admin\n"); break;
            case USER: printf("Welcome User\n"); break;
            case GUEST: printf("Welcome Guest\n"); break;
        }
    }
    return 0;
}
