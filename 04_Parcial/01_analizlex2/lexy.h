#ifndef LEXY_H_INCLUDED
#define LEXY_H_INCLUDED

enum t_token { numero, suma, resta, eof, error_lexico};

extern enum t_token lexyer ();

#endif // LEXY_H_INCLUDED
