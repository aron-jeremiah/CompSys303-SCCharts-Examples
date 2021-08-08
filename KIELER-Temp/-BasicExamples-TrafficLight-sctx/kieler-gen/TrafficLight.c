/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */

#include "TrafficLight.h"

void logic(TickData* d) {
  d->sigG = 0;
  d->sigY = 0;
  d->sigR = 0;
  d->_g60 = d->_pg40;
  if (d->_g60) {
    d->x += d->deltaT;
  }
  d->_g61_e1 = !d->_g60;
  d->_g75 = d->_pg35;
  d->_cg75 = d->x == 5;
  d->_g76 = d->_g75 && d->_cg75;
  if (d->_g76) {
    d->_TrafficLight_local__Atrig3 = 1;
  }
  d->_cg60 = d->_TrafficLight_local__Atrig3;
  d->_g61 = d->_g60 && d->_cg60;
  d->_g71 = d->_pg47;
  d->_g65 = d->_pg47_e2;
  d->_g68_e2 = !(d->_g71 || d->_g65);
  d->sleepT = 1000.0;
  d->_g71 = d->_g65 || d->_g71;
  d->_cg66 = d->x < 0.0;
  d->_g65 = d->_g71 && d->_cg66;
  if (d->_g65) {
    d->sleepT = (d->sleepT < (0.0 - d->x)) ? d->sleepT : (0.0 - d->x);
  }
  d->_cg67 = d->_TrafficLight_local__Atrig3;
  d->_g66 = d->_g71 && !d->_cg66;
  d->_cg69 = d->_TrafficLight_local__Atrig3;
  d->_g68 = d->_g65 && d->_cg67 || d->_g66 && d->_cg69;
  d->_g76_e3 = !d->_g75;
  d->_g76_e3 = (d->_g61_e1 || d->_g61) && (d->_g68_e2 || d->_g68) && (d->_g76_e3 || d->_g76) && (d->_g61 || d->_g68 || d->_g76);
  if (d->_g76_e3) {
    d->x = 0;
    d->sigR |= 1;
    d->_taken_transitions[3] += 1;
  }
  d->_g61_e1 = d->_GO || d->_g76_e3;
  if (d->_g61_e1) {
    d->_TrafficLight_local__Atrig = 0;
  }
  d->_cg4 = d->_TrafficLight_local__Atrig;
  d->_g76 = d->_pg61;
  if (d->_g76) {
    d->x += d->deltaT;
  }
  d->_g68_e2 = d->_pg18;
  d->_cg21 = d->x >= 60;
  d->_g68 = d->_g68_e2 && d->_cg21;
  if (d->_g68) {
    d->_TrafficLight_local__Atrig = 1;
  }
  d->_cg6 = d->_TrafficLight_local__Atrig;
  d->_g61 = d->_g61_e1 && !d->_cg4 || d->_g76 && !d->_cg6;
  d->_g77 = d->_g76 && d->_cg6;
  d->_cg8 = d->x < 60.0;
  d->_g9 = d->_g61_e1 && d->_cg8;
  if (d->_g9) {
    d->sleepT = (d->sleepT < (60.0 - d->x)) ? d->sleepT : (60.0 - d->x);
  }
  d->_cg9 = d->_TrafficLight_local__Atrig;
  d->_g11 = d->_pg9;
  d->_g17 = d->_pg15;
  d->_g12 = d->_g11 || d->_g17;
  d->_cg12 = d->x < 60.0;
  d->_g13 = d->_g12 && d->_cg12;
  if (d->_g13) {
    d->sleepT = (d->sleepT < (60.0 - d->x)) ? d->sleepT : (60.0 - d->x);
  }
  d->_cg13 = d->_TrafficLight_local__Atrig;
  d->_g9 = d->_g9 && !d->_cg9 || d->_g13 && !d->_cg13;
  d->_g12 = d->_g12 && !d->_cg12;
  d->_cg15 = d->_TrafficLight_local__Atrig;
  d->_g13 = d->_g13 && d->_cg13 || d->_g12 && d->_cg15;
  d->_g18 = d->_g61_e1 && !d->_cg8;
  d->_cg18 = d->_TrafficLight_local__Atrig;
  d->_g15 = d->_g12 && !d->_cg15 || d->_g18 && !d->_cg18;
  d->_g18 = d->_g61_e1 || d->_g68_e2 && !d->_cg21;
  d->_g3 = !d->_g76;
  d->_g6 = !(d->_g17 || d->_g11);
  d->_g11 = !d->_g68_e2;
  d->_g17 = (d->_g3 || d->_g77) && (d->_g6 || d->_g13) && (d->_g11 || d->_g68) && (d->_g77 || d->_g13 || d->_g68);
  if (d->_g17) {
    d->x = 0;
    d->sigG |= 1;
    d->_taken_transitions[0] += 1;
    d->_TrafficLight_local__Atrig1 = 0;
    d->_TrafficLight_local__Atrig2 = 0;
  }
  d->_cg24 = d->_TrafficLight_local__Atrig1 || d->_TrafficLight_local__Atrig2;
  d->_g21 = d->_pg14;
  if (d->_g21) {
    d->x += d->deltaT;
  }
  d->_g22 = d->_pg33;
  d->_cg30 = d->pedestrian && d->x < 60;
  d->_g7_e1 = d->_g22 && d->_cg30;
  if (d->_g7_e1) {
    d->_TrafficLight_local__Atrig1 = 1;
  }
  d->_g7 = d->_g22 && !d->_cg30;
  d->_cg33 = d->pedestrian && d->x >= 60;
  d->_g22_e3 = d->_g7 && d->_cg33;
  if (d->_g22_e3) {
    d->_TrafficLight_local__Atrig2 = 1;
  }
  d->_cg26 = d->_TrafficLight_local__Atrig1 || d->_TrafficLight_local__Atrig2;
  d->_g14 = d->_g17 && !d->_cg24 || d->_g21 && !d->_cg26;
  d->_g14_e2 = d->_g21 && d->_cg26;
  d->_g33 = d->_g17 || d->_g7 && !d->_cg33;
  d->_g23 = d->_g7_e1 || d->_g22_e3;
  d->_g34 = !d->_g21;
  d->_g31 = !d->_g22;
  d->_g26 = (d->_g34 || d->_g14_e2) && (d->_g31 || d->_g23) && (d->_g14_e2 || d->_g23);
  d->_cg35 = d->_TrafficLight_local__Atrig1;
  d->_g30 = d->_g26 && d->_cg35;
  if (d->_g30) {
    d->_taken_transitions[1] += 1;
    d->_TrafficLight_local__Atrig4 = 0;
  }
  d->_cg37 = d->_TrafficLight_local__Atrig4;
  d->_g27_e1 = d->_pg32_e2;
  if (d->_g27_e1) {
    d->x += d->deltaT;
  }
  d->_g27 = d->_pg48;
  d->_cg54 = d->x >= 60;
  d->_g32 = d->_g27 && d->_cg54;
  if (d->_g32) {
    d->_TrafficLight_local__Atrig4 = 1;
  }
  d->_cg39 = d->_TrafficLight_local__Atrig4;
  d->_g32_e2 = d->_g30 && !d->_cg37 || d->_g27_e1 && !d->_cg39;
  d->_g40 = d->_g27_e1 && d->_cg39;
  d->_cg41 = d->x < 60.0;
  d->_g42 = d->_g30 && d->_cg41;
  if (d->_g42) {
    d->sleepT = (d->sleepT < (60.0 - d->x)) ? d->sleepT : (60.0 - d->x);
  }
  d->_cg42 = d->_TrafficLight_local__Atrig4;
  d->_g44 = d->_pg42;
  d->_g50 = d->_pg51;
  d->_g45 = d->_g44 || d->_g50;
  d->_cg45 = d->x < 60.0;
  d->_g46 = d->_g45 && d->_cg45;
  if (d->_g46) {
    d->sleepT = (d->sleepT < (60.0 - d->x)) ? d->sleepT : (60.0 - d->x);
  }
  d->_cg46 = d->_TrafficLight_local__Atrig4;
  d->_g42 = d->_g42 && !d->_cg42 || d->_g46 && !d->_cg46;
  d->_g45 = d->_g45 && !d->_cg45;
  d->_cg48 = d->_TrafficLight_local__Atrig4;
  d->_g46 = d->_g46 && d->_cg46 || d->_g45 && d->_cg48;
  d->_g51 = d->_g30 && !d->_cg41;
  d->_cg51 = d->_TrafficLight_local__Atrig4;
  d->_g51 = d->_g45 && !d->_cg48 || d->_g51 && !d->_cg51;
  d->_g48 = d->_g30 || d->_g27 && !d->_cg54;
  d->_g36 = !d->_g27_e1;
  d->_g39 = !(d->_g50 || d->_g44);
  d->_g44 = !d->_g27;
  d->_g50 = (d->_g36 || d->_g40) && (d->_g39 || d->_g46) && (d->_g44 || d->_g32) && (d->_g40 || d->_g46 || d->_g32);
  if (d->_g50) {
    d->x = 0;
    d->sigY |= 1;
    d->_taken_transitions[4] += 1;
  }
  d->_g54 = d->_g26 && !d->_cg35;
  if (d->_g54) {
    d->x = 0;
    d->_taken_transitions[2] += 1;
  }
  d->_g40_e1 = d->_g50 || d->_g54;
  if (d->_g40_e1) {
    d->_TrafficLight_local__Atrig3 = 0;
  }
  d->_cg58 = d->_TrafficLight_local__Atrig3;
  d->_g40 = d->_g40_e1 && !d->_cg58 || d->_g60 && !d->_cg60;
  d->_cg62 = d->x < 0.0;
  d->_g55_e3 = d->_g40_e1 && d->_cg62;
  if (d->_g55_e3) {
    d->sleepT = (d->sleepT < (0.0 - d->x)) ? d->sleepT : (0.0 - d->x);
  }
  d->_cg63 = d->_TrafficLight_local__Atrig3;
  d->_g47_e2 = d->_g55_e3 && !d->_cg63 || d->_g65 && !d->_cg67;
  d->_g55 = d->_g40_e1 && !d->_cg62;
  d->_cg72 = d->_TrafficLight_local__Atrig3;
  d->_g47 = d->_g66 && !d->_cg69 || d->_g55 && !d->_cg72;
  d->_g35 = d->_g40_e1 || d->_g75 && !d->_cg75;
}

void reset(TickData* d) {
  d->_GO = 1;
  d->_TERM = 0;
  d->x = 0.0;
  d->deltaT = 0.0;
  d->sleepT = 0.0;
  d->_taken_transitions[0] = 0;
  d->_taken_transitions[1] = 0;
  d->_taken_transitions[2] = 0;
  d->_taken_transitions[3] = 0;
  d->_taken_transitions[4] = 0;
  d->_pg40 = 0;
  d->_pg35 = 0;
  d->_pg47 = 0;
  d->_pg47_e2 = 0;
  d->_pg61 = 0;
  d->_pg18 = 0;
  d->_pg9 = 0;
  d->_pg15 = 0;
  d->_pg14 = 0;
  d->_pg33 = 0;
  d->_pg32_e2 = 0;
  d->_pg48 = 0;
  d->_pg42 = 0;
  d->_pg51 = 0;
}

void tick(TickData* d) {
  logic(d);

  d->_pg40 = d->_g40;
  d->_pg35 = d->_g35;
  d->_pg47 = d->_g47;
  d->_pg47_e2 = d->_g47_e2;
  d->_pg61 = d->_g61;
  d->_pg18 = d->_g18;
  d->_pg9 = d->_g9;
  d->_pg15 = d->_g15;
  d->_pg14 = d->_g14;
  d->_pg33 = d->_g33;
  d->_pg32_e2 = d->_g32_e2;
  d->_pg48 = d->_g48;
  d->_pg42 = d->_g42;
  d->_pg51 = d->_g51;
  d->_GO = 0;
}
