#include "omi.h"

int main(void)
{
    Game game = {0};
    game.dealer = 3;       /* Player 1 deals first; next deal rotates. */
    game.next_leader = 0;  /* Player numbers are stored as 0..3 internally. */

    puts("Omi starter project");
    puts("Complete the TODO sections in the source files to implement the game.");
    play_match(&game);
    return 0;
}
