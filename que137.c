//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>
enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role userRole = USER;
    if (userRole == ADMIN) {
        printf("Welcome, Admin! You have full control over the system.\n");
    }
    else if (userRole == USER) {
        printf("Hello User! You can access your dashboard and manage your profile.\n");
    }
    else if (userRole == GUEST) {
        printf("Hi Guest! Feel free to explore, but some features are locked.\n");
    }
    else {
        printf("Unknown role detected!\n");
    }

    return 0;
}
