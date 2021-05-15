// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/     /*Update Interval*/ /*Update Signal*/
    {"",        "cat /tmp/recordingicon 2>/dev/null",  0,  9},
    /* {"",        "music",        0,                  11}, */
    {"",	    "pacpackages",	0,	                8},
    {"",        "memory",       10,                 14},
    {"",        "cpu",          10,                 18},
    {"",        "disk",         10800,              6},
    {"",        "bright",       0,                  19},
    {"",        "moonphase",    18000,              17},
    {"",        "weather",      18000,              5},
    {"",        "mailbox",      180,                12},
    {"",        "volume",       0,                  10},
    {"",        "battery",      5,                  3},
    {"",        "internet",     5,                  4},
    {"",        "clock",        60,                 1},
};

// Sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 3;

// Sets delimiters around the full statusbar. NULL character ('\0') means no delimeter.
static char leftpad[]  = " ";
static char rightpad[] = "\0";