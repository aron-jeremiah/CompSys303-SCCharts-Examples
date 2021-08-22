/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */

#include "timing.h"
#include <stdio.h>

#include "SCChart.h"

void logic(TickData* d) {
  d->_g33 = d->_pg22_e3;
  d->_g27 = d->_pg22;
  d->_g30_e1 = !(d->_g33 || d->_g27);
  d->_g47 = d->_pg14_e2;
  if (d->_g47) {
    d->c += d->deltaT;
  }
  d->_g37 = d->_pg7_e1;
  d->_cg37 = d->c >= TimeoutA;
  d->_g38 = d->_g37 && d->_cg37;
  if (d->_g38) {
    d->_SCChart_local__Atrig1 = 1;
  }
  d->sleepT = 1000.0;
  d->_g33 = d->_g27 || d->_g33;
  d->_cg28 = d->c < TimeoutA;
  d->_g27 = d->_g33 && d->_cg28;
  if (d->_g27) {
    d->sleepT = (d->sleepT < (TimeoutA - d->c)) ? d->sleepT : (TimeoutA - d->c);
  }
  d->_cg29 = d->_SCChart_local__Atrig1;
  d->_g28 = d->_g33 && !d->_cg28;
  d->_cg31 = d->_SCChart_local__Atrig1;
  d->_g30 = d->_g27 && d->_cg29 || d->_g28 && d->_cg31;
  d->_g38_e2 = !d->_g37;
  d->_g38 = (d->_g30_e1 || d->_g30) && (d->_g38_e2 || d->_g38) && (d->_g30 || d->_g38);
  d->_g30 = d->_GO || d->_g38;
  if (d->_g30) {
    d->_SCChart_local__Atrig = 0;
  }
  d->_cg4 = d->_SCChart_local__Atrig;
  d->_g38_e2 = d->_pg30_e1;
  d->_g30_e1 = d->_GO || d->_g38_e2;
  if (d->_g30_e1) {
    d->pace = 0;
    d->n_pace = 0;
  }
  d->_g39 = d->_pg5;
  if (d->_g39) {
    d->n_pace |= 1;
  }
  d->_g52 = d->_pg18;
  d->_cg21 = d->c >= d->AVI_Constraint;
  d->_g22 = d->_g52 && d->_cg21;
  if (d->_g22) {
    d->_SCChart_local__Atrig = 1;
  }
  d->_cg6 = d->_SCChart_local__Atrig;
  d->_g5 = d->_g30 && !d->_cg4 || d->_g39 && !d->_cg6;
  d->_g7 = d->_g39 && d->_cg6;
  d->_cg8 = d->c < d->AVI_Constraint;
  d->_g9 = d->_g30 && d->_cg8;
  if (d->_g9) {
    d->sleepT = (d->sleepT < (d->AVI_Constraint - d->c)) ? d->sleepT : (d->AVI_Constraint - d->c);
  }
  d->_cg9 = d->_SCChart_local__Atrig;
  d->_g11 = d->_pg9;
  d->_g17 = d->_pg15;
  d->_g12 = d->_g11 || d->_g17;
  d->_cg12 = d->c < d->AVI_Constraint;
  d->_g13 = d->_g12 && d->_cg12;
  if (d->_g13) {
    d->sleepT = (d->sleepT < (d->AVI_Constraint - d->c)) ? d->sleepT : (d->AVI_Constraint - d->c);
  }
  d->_cg13 = d->_SCChart_local__Atrig;
  d->_g9 = d->_g9 && !d->_cg9 || d->_g13 && !d->_cg13;
  d->_g12 = d->_g12 && !d->_cg12;
  d->_cg15 = d->_SCChart_local__Atrig;
  d->_g13 = d->_g13 && d->_cg13 || d->_g12 && d->_cg15;
  d->_g18 = d->_g30 && !d->_cg8;
  d->_cg18 = d->_SCChart_local__Atrig;
  d->_g15 = d->_g12 && !d->_cg15 || d->_g18 && !d->_cg18;
  d->_g18 = d->_g30 || d->_g52 && !d->_cg21;
  d->_g3 = !d->_g39;
  d->_g6 = !(d->_g17 || d->_g11);
  d->_g11 = !d->_g52;
  d->_g17 = (d->_g3 || d->_g7) && (d->_g6 || d->_g13) && (d->_g11 || d->_g22) && (d->_g7 || d->_g13 || d->_g22);
  if (d->_g17) {
    d->c = 0;
    printf("Pace\n");
    d->_SCChart_local__Atrig1 = 0;
  }
  d->_cg24 = d->c < TimeoutA;
  d->_g21 = d->_g17 && d->_cg24;
  if (d->_g21) {
    d->sleepT = (d->sleepT < (TimeoutA - d->c)) ? d->sleepT : (TimeoutA - d->c);
  }
  d->_cg25 = d->_SCChart_local__Atrig1;
  d->_g22 = d->_g21 && !d->_cg25 || d->_g27 && !d->_cg29;
  d->_g7 = d->_g17 && !d->_cg24;
  d->_cg34 = d->_SCChart_local__Atrig1;
  d->_g22_e3 = d->_g28 && !d->_cg31 || d->_g7 && !d->_cg34;
  d->_g7_e1 = d->_g17 || d->_g37 && !d->_cg37;
  d->_g14_e2 = d->_GO || d->_g47;
}

void reset(TickData* d) {
  d->_GO = 1;
  d->_TERM = 0;
  d->c = 0.0;
  d->AVI_Constraint = AVI;
  d->deltaT = 0.0;
  d->sleepT = 0.0;
  d->_pg22_e3 = 0;
  d->_pg22 = 0;
  d->_pg14_e2 = 0;
  d->_pg7_e1 = 0;
  d->_pg30_e1 = 0;
  d->_pg5 = 0;
  d->_pg18 = 0;
  d->_pg9 = 0;
  d->_pg15 = 0;
}

void tick(TickData* d) {
  logic(d);

  d->_pg22_e3 = d->_g22_e3;
  d->_pg22 = d->_g22;
  d->_pg14_e2 = d->_g14_e2;
  d->_pg7_e1 = d->_g7_e1;
  d->_pg30_e1 = d->_g30_e1;
  d->_pg5 = d->_g5;
  d->_pg18 = d->_g18;
  d->_pg9 = d->_g9;
  d->_pg15 = d->_g15;
  d->_GO = 0;
}
