
#ifndef KnuthMorrisPratt_h
#define KnuthMorrisPratt_h

#include <stdio.h>

int KnuthMorrisPratt(char* Text, int TextSize, int Start, char* Pattern, int PatternSize);

void Preprocess(char* Pattern, int PatternSize, int* Border);

#endif /* KnuthMorrisPratt_h */
