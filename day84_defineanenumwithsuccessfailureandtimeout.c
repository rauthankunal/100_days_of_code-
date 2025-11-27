#include <stdio.h>

enum Status {SUCCESS, FAILURE, TIMEOUT};

int main() {
    enum Status s;
    for (s = SUCCESS; s <= TIMEOUT; s++) {
        switch(s) {
            case SUCCESS: printf("Operation Successful\n"); break;
            case FAILURE: printf("Operation Failed\n"); break;
            case TIMEOUT: printf("Operation Timed Out\n"); break;
        }
    }
    return 0;
}
