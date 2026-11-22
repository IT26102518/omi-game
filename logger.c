#include "omi.h"

FILE *open_game_log(void)
{
    /* TODO: Open a clearly named text log in append or write mode and
       handle fopen failure without crashing. */
    return NULL;
}

void log_message(FILE *log, const char *message)
{
    /* TODO: Write a line only when log is not NULL; flush/close at match end. */
    (void)log;
    (void)message;
}
