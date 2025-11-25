//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>
enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};
int main() {
    enum Status result;
    result = SUCCESS;

    printf("Operation Status:\n");

    if (result == SUCCESS) {
        printf("SUCCESS: Everything worked perfectly!\n");
    }
    else if (result == FAILURE) {
        printf("FAILURE: Something went wrong. Please try again.\n");
    }
    else if (result == TIMEOUT) {
        printf("TIMEOUT: The operation took too long. Try again later.\n");
    }

    return 0;
}
