#ifndef SCCHART_H
#define SCCHART_H
/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */

#include "timing.h"
#include <stdio.h>


typedef struct {
  double c;
  int AVI_Constraint;
  double deltaT;
  double sleepT;
  char pace;
  char n_pace;
  char _SCChart_local__Atrig;
  char _SCChart_local__Atrig1;
  char _g3;
  char _g5;
  char _g6;
  char _g7;
  char _g9;
  char _g11;
  char _g12;
  char _g13;
  char _g15;
  char _g17;
  char _g18;
  char _g21;
  char _g22;
  char _g27;
  char _g28;
  char _g30;
  char _g33;
  char _g37;
  char _g38;
  char _g39;
  char _g47;
  char _g52;
  char _GO;
  char _cg4;
  char _cg6;
  char _cg8;
  char _cg9;
  char _cg13;
  char _cg12;
  char _cg15;
  char _cg18;
  char _cg21;
  char _cg24;
  char _cg25;
  char _cg29;
  char _cg28;
  char _cg31;
  char _cg34;
  char _cg37;
  char _g7_e1;
  char _g14_e2;
  char _g22_e3;
  char _g30_e1;
  char _g38_e2;
  char _TERM;
  char _pg22_e3;
  char _pg22;
  char _pg14_e2;
  char _pg7_e1;
  char _pg30_e1;
  char _pg5;
  char _pg18;
  char _pg9;
  char _pg15;
} TickData;

void reset(TickData* d);
void logic(TickData* d);
void tick(TickData* d);

#endif /* !SCCHART_H */
