/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */

#include "ABRO.h"

void logic(TickData* d) {
  d->_g18 = d->_pg23;
  d->_g6 = d->_pg14;
  d->_g12 = d->_pg22;
  d->_g24_e1 = !(d->_g18 || d->_g6 || d->_g12);
  d->O = 0;
  d->_g8_e1 = !d->_g6;
  d->_g7 = d->_g6 && d->A;
  if (d->_g7) {
    d->_taken_transitions[2] += 1;
    d->_ABRO_local__Tterm = 1;
  }
  d->_g13 = d->_g12 && d->B;
  if (d->_g13) {
    d->_taken_transitions[3] += 1;
    d->_ABRO_local__Tterm1 = 1;
  }
  d->_g27 = d->_pg28_e2;
  d->_g28 = d->_g27 && d->R;
  if (d->_g28) {
    d->_ABRO_local__Atrig = 1;
  }
  d->_cg18 = d->_ABRO_local__Tterm && d->_ABRO_local__Tterm1;
  d->_g20 = d->_g18 && !d->_cg18;
  d->_cg20 = d->_ABRO_local__Atrig;
  d->_g21 = d->_g20 && d->_cg20;
  if (d->_g21) {
    d->_ABRO_local__Atrig1 = 1;
  }
  d->_g6 = d->_g6 && !d->A;
  d->_cg9 = d->_ABRO_local__Tterm && d->_ABRO_local__Tterm1 || d->_ABRO_local__Atrig1;
  d->_g7 = d->_g7 || d->_g6 && d->_cg9;
  d->_g14_e2 = !d->_g12;
  d->_g12 = d->_g12 && !d->B;
  d->_cg15 = d->_ABRO_local__Tterm && d->_ABRO_local__Tterm1 || d->_ABRO_local__Atrig1;
  d->_g13 = d->_g13 || d->_g12 && d->_cg15;
  d->_g19_e3 = !d->_g18;
  d->_g21 = d->_g18 && d->_cg18 || d->_g21;
  d->_g18 = (d->_g8_e1 || d->_g7) && (d->_g14_e2 || d->_g13) && (d->_g19_e3 || d->_g21) && (d->_g7 || d->_g13 || d->_g21);
  d->_cg22 = d->_ABRO_local__Tterm && d->_ABRO_local__Tterm1;
  d->_g8 = d->_g18 && d->_cg22;
  if (d->_g8) {
    d->O |= 1;
    d->_taken_transitions[1] += 1;
  }
  d->_g8_e1 = d->_g8 || d->_g18 && !d->_cg22;
  d->_g19 = !d->_g27;
  d->_g19_e3 = (d->_g24_e1 || d->_g8_e1) && (d->_g19 || d->_g28) && (d->_g8_e1 || d->_g28);
  if (d->_g19_e3) {
    d->_taken_transitions[0] += 1;
  }
  d->_g14_e2 = d->_GO || d->_g19_e3;
  if (d->_g14_e2) {
    d->_ABRO_local__Atrig = 0;
    d->_ABRO_local__Tterm = 0;
    d->_ABRO_local__Tterm1 = 0;
    d->_ABRO_local__Atrig1 = 0;
  }
  d->_cg4 = d->_ABRO_local__Tterm && d->_ABRO_local__Tterm1 || d->_ABRO_local__Atrig1;
  d->_g14 = d->_g14_e2 && !d->_cg4 || d->_g6 && !d->_cg9;
  d->_cg10 = d->_ABRO_local__Tterm && d->_ABRO_local__Tterm1 || d->_ABRO_local__Atrig1;
  d->_g22 = d->_g14_e2 && !d->_cg10 || d->_g12 && !d->_cg15;
  d->_g23 = d->_g14_e2 || d->_g20 && !d->_cg20;
  d->_g28_e2 = d->_g14_e2 || d->_g27 && !d->R;
}

void reset(TickData* d) {
  d->_GO = 1;
  d->_TERM = 0;
  d->_taken_transitions[0] = 0;
  d->_taken_transitions[1] = 0;
  d->_taken_transitions[2] = 0;
  d->_taken_transitions[3] = 0;
  d->_pg23 = 0;
  d->_pg14 = 0;
  d->_pg22 = 0;
  d->_pg28_e2 = 0;
}

void tick(TickData* d) {
  logic(d);

  d->_pg23 = d->_g23;
  d->_pg14 = d->_g14;
  d->_pg22 = d->_g22;
  d->_pg28_e2 = d->_g28_e2;
  d->_GO = 0;

  // reset inputs
  d->A = 0;
  d->B = 0;
  d->R = 0;
}
