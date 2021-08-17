#ifndef ABRO_H
#define ABRO_H
/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */


typedef struct {
  int _taken_transitions[4];
  char A;
  char B;
  char R;
  char R1;
  char O;
  char _ABRO_local__Atrig;
  char _ABRO_local__Tterm;
  char _ABRO_local__Tterm1;
  char _ABRO_local__Atrig1;
  char _g6;
  char _g7;
  char _g8;
  char _g12;
  char _g13;
  char _g14;
  char _g18;
  char _g19;
  char _g20;
  char _g21;
  char _g22;
  char _g23;
  char _g27;
  char _g28;
  char _GO;
  char _cg4;
  char _cg9;
  char _cg6;
  char _cg10;
  char _cg15;
  char _cg12;
  char _cg20;
  char _cg18;
  char _cg22;
  char _cg27;
  char _g8_e1;
  char _g14_e2;
  char _g19_e3;
  char _g24_e1;
  char _g28_e2;
  char _TERM;
  char _pg23;
  char _pg14;
  char _pg22;
  char _pg28_e2;
} TickData;

void reset(TickData* d);
void logic(TickData* d);
void tick(TickData* d);

#endif /* !ABRO_H */
