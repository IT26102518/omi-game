#ifndef OMI_H
#define OMI_H

#include <stdbool.h>
#include <stdio.h>

#define PLAYER_COUNT 4
#define HAND_SIZE 8
#define DECK_SIZE 32
#define TRICKS_PER_DEAL 8
#define TARGET_SCORE 10

typedef enum { CLUBS, DIAMONDS, HEARTS, SPADES } Suit;
typedef enum { SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE } Rank;

typedef struct {
    Rank rank;
    Suit suit;
} Card;

typedef struct {
    Card cards[HAND_SIZE];
    int count;
} Hand;

typedef struct {
    Hand hands[PLAYER_COUNT];
    int scores[2];
    int dealer;
    int next_leader;
    int trump_picker;
    Suit trump;
    bool has_trump;
    bool special_scoring;
} Game;

/* cards.c */
void create_deck(Card deck[DECK_SIZE]);
void shuffle_deck(Card deck[DECK_SIZE]);
void deal_cards(Game *game, const Card deck[DECK_SIZE], int first_player);
void display_hand(const Hand *hand);
const char *suit_name(Suit suit);
const char *rank_name(Rank rank);

/* input.c */
Suit choose_trump(int player);
int choose_human_card(const Hand *hand, Suit led_suit, bool has_led_suit);

/* computer.c */
int choose_computer_card(const Hand *hand, Suit led_suit,
                         bool has_led_suit, bool is_partner);

/* game.c */
int determine_trick_winner(const Card plays[PLAYER_COUNT], int leader,
                           Suit trump);
int team_for_player(int player);
void update_score(Game *game, int tricks_team_0, int tricks_team_1,
                  int trump_picker_team);
void play_match(Game *game);

/* logger.c */
FILE *open_game_log(void);
void log_message(FILE *log, const char *message);

#endif
