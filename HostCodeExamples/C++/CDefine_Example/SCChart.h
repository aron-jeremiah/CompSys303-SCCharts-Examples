#ifndef SCCHART_H
#define SCCHART_H
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
#include "timing.h"


typedef struct {
  double c;
  int AVI_Constraint;
  double deltaT;
  double sleepT;
  char pace;
  char n_pace;
  char _SCChart_local__Atrig;
  char _g4;
  char _g5;
  char _g7;
  char _g9;
  char _g10;
  char _g11;
  char _g13;
  char _g14;
  char _g16;
  char _g19;
  char _g20;
  char _g24;
  char _g28;
  char _GO;
  char _cg4;
  char _cg9;
  char _cg10;
  char _cg14;
  char _cg19;
  char _g5_e1;
  char _g11_e2;
  char _g20_e3;
  char _TERM;
  char _pg20;
  char _pg19;
  char _pg4;
  char _pg10;
  char _pg14;
  char _pg24;
} TickData;

void reset(TickData* d);
void logic(TickData* d);
void tick(TickData* d);
#ifdef __cplusplus
} // extern "C"
#endif

#endif /* !SCCHART_H */
