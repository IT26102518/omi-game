#include "omi.h"
#include <stdlib.h>
#include <time.h>

void create_deck(Card deck[DECK_SIZE])
{
    /* TODO: Fill 32 entries: eight ranks for each of four suits. */
    (void)deck;
}

void shuffle_deck(Card deck[DECK_SIZE])
{
    /* TODO: Implement an unbiased shuffle (for example, Fisher-Yates).
       Seed rand() once from main(), not every time this function is called. */
    (void)deck;
}

void deal_cards(Game *game, const Card deck[DECK_SIZE], int first_player)
{
    /* TODO: Clear hands, then deal four cards to each player in turn order.
       After trump is chosen, distribute the remaining four rounds. */
    (void)game;
    (void)deck;
    (void)first_player;
}

const char *suit_name(Suit suit)
{
    static const char *names[] = {"Clubs", "Diamonds", "Hearts", "Spades"};
    return (suit >= CLUBS && suit <= SPADES) ? names[suit] : "Unknown suit";
}

const char *rank_name(Rank rank)
{
    static const char *names[] = {"7", "8", "9", "10", "J", "Q", "K", "A"};
    return (rank >= SEVEN && rank <= ACE) ? names[rank] : "?";
}

void display_hand(const Hand *hand)
{
    /* TODO: Print each card with a clear 1-based selection number. */
    (void)hand;
}
