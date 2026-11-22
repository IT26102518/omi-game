#include "omi.h"

Suit choose_trump(int player)
{
    /* TODO: For player 0, read and validate a human choice.
       For computer players, use a simple documented strategy. */
    (void)player;
    return CLUBS; /* Temporary placeholder; replace before playing. */
}

int choose_human_card(const Hand *hand, Suit led_suit, bool has_led_suit)
{
    /* TODO: Show the hand, accept a 1-based choice, and reject illegal cards.
       Return a 0-based hand index. */
    (void)hand;
    (void)led_suit;
    (void)has_led_suit;
    return 0; /* Temporary placeholder. */
}
