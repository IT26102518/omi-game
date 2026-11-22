#include "omi.h"

int team_for_player(int player)
{
    /* Players 0 and 2 are Team 0; players 1 and 3 are Team 1. */
    return (player == 0 || player == 2) ? 0 : 1;
}

int determine_trick_winner(const Card plays[PLAYER_COUNT], int leader,
                           Suit trump)
{
    /* TODO: Compare only cards in the led suit unless a trump is played.
       Return the winning player's index (0..3). */
    (void)plays;
    (void)leader;
    (void)trump;
    return 0; /* Temporary placeholder. */
}

void update_score(Game *game, int tricks_team_0, int tricks_team_1,
                  int trump_picker_team)
{
    /* TODO: Apply the assignment scoring, including draw -> next deal
       special scoring. Update game->scores and game->special_scoring. */
    (void)game;
    (void)tricks_team_0;
    (void)tricks_team_1;
    (void)trump_picker_team;
}

void play_match(Game *game)
{
    /* TODO: Repeat deals until a team reaches TARGET_SCORE.
       Per deal: initial deal, trump choice, remaining deal, eight tricks,
       score update, log, then rotate the picker/dealer as required. */
    (void)game;
    puts("Game loop is not implemented yet; see TODOs in game.c and README.");
}
