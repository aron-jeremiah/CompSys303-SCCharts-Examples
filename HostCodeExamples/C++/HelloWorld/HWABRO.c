/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */
#include "HWABRO.h"

void logic(TickData* d) {
  d->_g6 = d->_pg17_e1;
  d->_g12 = d->_pg22_e2;
  d->_g17_e1 = !(d->_g6 || d->_g12);
  d->_g7_e1 = !d->_g6;
  d->_g8 = d->_g6 && !d->R;
  d->_g9 = d->_g8 && d->A;
  if (d->_g9) {
    printf("Entered A state\n");
  }
  d->_g9 = d->_g6 && d->R || d->_g9;
  d->_g6 = !d->_g12;
  d->_g14 = d->_g12 && !d->R;
  d->_g15 = d->_g14 && d->B;
  if (d->_g15) {
    printf("Entered B state\n");
  }
  d->_g15 = d->_g12 && d->R || d->_g15;
  d->_g12 = (d->_g7_e1 || d->_g9) && (d->_g6 || d->_g15) && (d->_g9 || d->_g15);
  d->_g13_e2 = d->_pg13;
  d->_g13 = d->_GO || d->_g13_e2;
  if (d->_g13) {
    d->O = 0;
  }
  d->_g7 = d->_g12 && !d->R;
  if (d->_g7) {
    d->O |= 1;
    printf("done!!\n");
  }
  d->_g7_e1 = d->_g12 && d->R || d->_g7;
  d->_g27 = d->_pg23;
  d->_g16 = !d->_g27;
  d->_g18 = d->_g27 && d->R;
  d->_g17 = (d->_g17_e1 || d->_g7_e1) && (d->_g16 || d->_g18) && (d->_g7_e1 || d->_g18);
  d->_g22 = d->_GO || d->_g17;
  d->_g17_e1 = d->_g22 || d->_g8 && !d->A;
  d->_g22_e2 = d->_g22 || d->_g14 && !d->B;
  d->_g23 = d->_g22 || d->_g27 && !d->R;
}

void reset(TickData* d) {
  d->_GO = 1;
  d->_TERM = 0;
  d->_pg17_e1 = 0;
  d->_pg22_e2 = 0;
  d->_pg13 = 0;
  d->_pg23 = 0;
}

void tick(TickData* d) {
  logic(d);

  d->_pg17_e1 = d->_g17_e1;
  d->_pg22_e2 = d->_g22_e2;
  d->_pg13 = d->_g13;
  d->_pg23 = d->_g23;
  d->_GO = 0;

  // Reset
  d->A = 0;
  d->B = 0;
  d->R = 0;
}
