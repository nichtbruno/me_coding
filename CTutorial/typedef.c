#include <stdio.h>

typedef char user[35];

struct Player {
    char name[35];
    char password;
    int id;
};

typedef struct {
    char name[35];
    char password;
    char money;
} Manager;

int main() {
    char user1[35] = "Bruno";
    user user2 = "Bruno2";

    struct Player player1 = {"Bruno", "1234", "69420"};
    Manager manager1 = {"Bruno", "1234", "42069"};

    return 0;
}
