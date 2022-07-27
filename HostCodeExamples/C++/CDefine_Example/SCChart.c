/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */

#include "timing.h"

#include "SCChart.h"

void logic(TickData* d) {
  d->_g28 = d->_pg20;
  if (d->_g28) {
    d->c += d->deltaT;
  }
  d->_g19 = d->_pg19;
  d->_cg19 = d->c >= d->AVI_Constraint;
  d->_g20 = d->_g19 && d->_cg19;
  if (d->_g20) {
    d->_SCChart_local__Atrig = 1;
  }
  d->pace = 0;
  d->n_pace = 0;
  d->_g7 = d->_pg4;
  if (d->_g7) {
    d->n_pace |= 1;
  }
  d->_g7 = d->_GO || d->_g7;
  d->_cg4 = d->_SCChart_local__Atrig;
  d->_g5 = d->_g7 && d->_cg4;
  d->_g4 = d->_g7 && !d->_cg4;
  d->_g13 = d->_pg10;
  d->_g16 = d->_pg14;
  d->_g16 = d->_GO || d->_g13 || d->_g16;
  d->_g13 = d->_pg24;
  d->_g24 = d->_GO || d->_g13;
  if (d->_g24) {
    d->sleepT = 1000.0;
  }
  d->_cg9 = d->c < d->AVI_Constraint;
  d->_g10 = d->_g16 && d->_cg9;
  if (d->_g10) {
    d->sleepT = (d->sleepT < (d->AVI_Constraint - d->c)) ? d->sleepT : (d->AVI_Constraint - d->c);
  }
  d->_cg10 = d->_SCChart_local__Atrig;
  d->_g9 = d->_g16 && !d->_cg9;
  d->_cg14 = d->_SCChart_local__Atrig;
  d->_g11 = d->_g10 && d->_cg10 || d->_g9 && d->_cg14;
  d->_g10 = d->_g10 && !d->_cg10;
  d->_g14 = d->_g9 && !d->_cg14;
  d->_g19 = d->_GO || d->_g19 && !d->_cg19;
  d->_g5_e1 = !d->_g4;
  d->_g11_e2 = !(d->_g14 || d->_g10);
  d->_g20_e3 = !d->_g19;
  d->_g11_e2 = (d->_g5_e1 || d->_g5) && (d->_g11_e2 || d->_g11) && (d->_g20_e3 || d->_g20) && (d->_g5 || d->_g11 || d->_g20);
  if (d->_g11_e2) {
    d->pace |= 1;
  }
  d->_g20 = d->_GO || d->_g28;
}

void reset(TickData* d) {
  d->_GO = 1;
  d->_TERM = 0;
  d->c = 0.0;
  d->AVI_Constraint = AVI;
  d->deltaT = 0.0;
  d->sleepT = 0.0;
  d->_SCChart_local__Atrig = 0;
  d->_pg20 = 0;
  d->_pg19 = 0;
  d->_pg4 = 0;
  d->_pg10 = 0;
  d->_pg14 = 0;
  d->_pg24 = 0;
}

void tick(TickData* d) {
  logic(d);

  d->_pg20 = d->_g20;
  d->_pg19 = d->_g19;
  d->_pg4 = d->_g4;
  d->_pg10 = d->_g10;
  d->_pg14 = d->_g14;
  d->_pg24 = d->_g24;
  d->_GO = 0;
}
