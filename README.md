# Omi game: learning starter

## Important
The attached SE1012 specification says students must not copy programs from AI tools and that the implementation will be assessed in a demonstration and viva. This folder is therefore a commented learning scaffold, not a finished game. Complete and understand each TODO yourself, and follow your instructor's rules for permitted assistance.

## Files
- `main.c`: initializes the match and starts it.
- `omi.h`: shared card, hand, game types, constants, and function declarations.
- `cards.c`: deck creation, shuffling, dealing, and hand display.
- `input.c`: human input and trump choice.
- `computer.c`: computer partner/opponent move selection.
- `game.c`: match loop, trick winner, and scoring.
- `logger.c`: game log file operations.

## Suggested implementation order
1. Finish `create_deck`, `shuffle_deck`, and card dealing.
2. Implement legal-card checking (follow the led suit when possible).
3. Implement human input validation and basic computer choices.
4. Implement trick winner evaluation, including trump.
5. Implement scoring and draw special scoring.
6. Add the eight-trick deal loop, rotating responsibilities, and match end.
7. Log trump selections, card plays, trick/deal results, scores, and final result.

Player IDs in the code are zero-based: 0 = human/Player 1, 1 = opponent/Player 2, 2 = partner/Player 3, 3 = opponent/Player 4. Team 0 is players 0 and 2; Team 1 is players 1 and 3.

Temporary placeholder functions do not implement the rules; replace them as you work. Compile all `.c` files together with a C compiler after completing the functions. For example: `gcc -std=c11 -Wall -Wextra main.c cards.c input.c computer.c game.c logger.c -o omi`.
