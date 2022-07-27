#ifndef HWABRO_H
#define HWABRO_H
/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */
#ifdef __cplusplus
extern "C"
{
#endif
#include <stdio.h>

//C code goes here
typedef struct {
  char A;
  char B;
  char R;
  char O;
  char _g6;
  char _g7;
  char _g8;
  char _g9;
  char _g12;
  char _g13;
  char _g14;
  char _g15;
  char _g16;
  char _g17;
  char _g18;
  char _g22;
  char _g23;
  char _g27;
  char _GO;
  char _cg8;
  char _cg6;
  char _cg14;
  char _cg12;
  char _cg16;
  char _cg21;
  char _g7_e1;
  char _g13_e2;
  char _g17_e1;
  char _g22_e2;
  char _TERM;
  char _pg17_e1;
  char _pg22_e2;
  char _pg13;
  char _pg23;
} TickData;

void reset(TickData* d);
void logic(TickData* d);
void tick(TickData* d);

#ifdef __cplusplus
} // extern "C"
#endif


#endif /* !HWABRO_H */
