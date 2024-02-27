#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void printIntroduction() {
    cout << "Welcome to the Dungeon Game!" << endl;
    cout << "You are in a dark dungeon and you need to find the treasure." << endl;
    cout << "There are monsters lurking in the dungeon. Be careful!" << endl;
    cout << "You can move up, down, left, or right to navigate the dungeon." << endl;
    cout << "If you encounter a monster, you'll have to fight!" << endl;
    cout << "Let's begin!" << endl << endl;
}
int randomNumber(int min, int max) {
    static bool first = true;
    if (first) {
        srand(time(NULL));
        first = false;
    }
    return min + rand() % ((max + 1) - min);
}
void movePlayer(int& playerX, int& playerY) {
    char move;
    cout << "Enter your move (u for up, d for down, l for left, r for right): ";
    cin >> move;
    switch (move) {
        case 'u':
            playerY--;
            break;
        case 'd':
            playerY++;
            break;
        case 'l':
            playerX--;
            break;
        case 'r':
            playerX++;
            break;
        default:
            cout << "Invalid move! Try again." << endl;
    }
}
bool fightMonster() {
    int playerAttack = randomNumber(1, 6); 
    int monsterAttack = randomNumber(1, 6);
    cout << "You encountered a monster!" << endl;
    cout << "You attack the monster with power: " << playerAttack << endl;
    cout << "The monster attacks you with power: " << monsterAttack << endl;
    if (playerAttack >= monsterAttack) {
        cout << "You defeated the monster!" << endl;
        return true;
    } else {
        cout << "You were defeated by the monster!" << endl;
        return false;
    }
}
int main() {
    const int SIZE = 5;
    const int TREASURE_X = randomNumber(0, SIZE - 1);
    const int TREASURE_Y = randomNumber(0, SIZE - 1);
    const int MONSTER_X = randomNumber(0, SIZE - 1);
    const int MONSTER_Y = randomNumber(0, SIZE - 1);
    int playerX = 0;
    int playerY = 0;
    printIntroduction();
    while (true) {
        cout << "You are at position (" << playerX << ", " << playerY << ")." << endl;
        if (playerX == TREASURE_X && playerY == TREASURE_Y) {
            cout << "Congratulations! You found the treasure and escaped the dungeon!" << endl;
            break;
        }
        if (playerX == MONSTER_X && playerY == MONSTER_Y) {
            if (!fightMonster()) {
                cout << "Game Over! You were defeated by the monster." << endl;
                break;
            }
        }
        movePlayer(playerX, playerY);
    }
    return 0;
}
