/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */

#include "TrafficLight.h"

void logic(TickData* d) {
  d->_TrafficLight_local_G = 0;
  d->_TrafficLight_local_Y = 0;
  d->_TrafficLight_local_R = 0;
  d->_TrafficLight_local__region0_red_sigR = 0;
  d->_TrafficLight_local__region1_green_sigG = 0;
  d->_TrafficLight_local__region2_yellow_sigY = 0;
  d->_g6 = d->_pg7;
  if (d->_g6) {
    d->_TrafficLight_local__region0_red_x += d->deltaT;
  }
  d->_g7_e1 = !d->_g6;
  d->_g21 = d->_pg28;
  d->_cg21 = d->_TrafficLight_local__region0_red_x < 60;
  d->_g22 = d->_g21 && d->_cg21;
  if (d->_g22) {
    d->_TrafficLight_local__Atrig = 1;
  }
  d->_g24 = d->_g21 && !d->_cg21;
  d->_cg24 = d->_TrafficLight_local__region0_red_x >= 60;
  d->_g25 = d->_g24 && d->_cg24;
  if (d->_g25) {
    d->_TrafficLight_local__Atrig1 = 1;
  }
  d->_cg6 = d->_TrafficLight_local__Atrig || d->_TrafficLight_local__Atrig1;
  d->_g7 = d->_g6 && d->_cg6;
  d->_g17 = d->_pg27;
  d->_g11 = d->_pg14_e2;
  d->_g14_e2 = !(d->_g17 || d->_g11);
  d->sleepT = 1000.0;
  d->_g11 = d->_g11 || d->_g17;
  d->_cg12 = d->_TrafficLight_local__region0_red_x < 60.0;
  d->_g17 = d->_g11 && d->_cg12;
  if (d->_g17) {
    d->sleepT = (d->sleepT < (60.0 - d->_TrafficLight_local__region0_red_x)) ? d->sleepT : (60.0 - d->_TrafficLight_local__region0_red_x);
  }
  d->_cg13 = d->_TrafficLight_local__Atrig || d->_TrafficLight_local__Atrig1;
  d->_g12 = d->_g11 && !d->_cg12;
  d->_cg15 = d->_TrafficLight_local__Atrig || d->_TrafficLight_local__Atrig1;
  d->_g14 = d->_g17 && d->_cg13 || d->_g12 && d->_cg15;
  d->_g21 = !d->_g21;
  d->_g22 = d->_g22 || d->_g25;
  d->_g25 = (d->_g7_e1 || d->_g7) && (d->_g14_e2 || d->_g14) && (d->_g21 || d->_g22) && (d->_g7 || d->_g14 || d->_g22);
  d->_cg26 = d->_TrafficLight_local__Atrig;
  d->_g23_e3 = d->_g25 && d->_cg26;
  if (d->_g23_e3) {
    d->_TrafficLight_local__region0_red_sigR |= 1;
    d->_taken_transitions[0] += 1;
  }
  d->_g23 = d->_g25 && !d->_cg26;
  if (d->_g23) {
    d->_TrafficLight_local_G |= 1;
    d->_taken_transitions[1] += 1;
  }
  d->_g7_e1 = d->_GO || d->_g23_e3 || d->_g23;
  if (d->_g7_e1) {
    d->_TrafficLight_local__Atrig = 0;
    d->_TrafficLight_local__Atrig1 = 0;
  }
  d->_cg4 = d->_TrafficLight_local__Atrig || d->_TrafficLight_local__Atrig1;
  d->_g7 = d->_g7_e1 && !d->_cg4 || d->_g6 && !d->_cg6;
  d->_cg8 = d->_TrafficLight_local__region0_red_x < 60.0;
  d->_g14 = d->_g7_e1 && d->_cg8;
  if (d->_g14) {
    d->sleepT = (d->sleepT < (60.0 - d->_TrafficLight_local__region0_red_x)) ? d->sleepT : (60.0 - d->_TrafficLight_local__region0_red_x);
  }
  d->_cg9 = d->_TrafficLight_local__Atrig || d->_TrafficLight_local__Atrig1;
  d->_g14_e2 = d->_g14 && !d->_cg9 || d->_g17 && !d->_cg13;
  d->_g26 = d->_g7_e1 && !d->_cg8;
  d->_cg18 = d->_TrafficLight_local__Atrig || d->_TrafficLight_local__Atrig1;
  d->_g27 = d->_g12 && !d->_cg15 || d->_g26 && !d->_cg18;
  d->_g28 = d->_g7_e1 || d->_g24 && !d->_cg24;
  d->_g6 = d->_pg67_e3;
  if (d->_g6) {
    d->_TrafficLight_local__region1_green_x += d->deltaT;
  }
  d->_g9 = !d->_g6;
  d->_g13 = d->_pg67;
  d->_cg38 = d->_TrafficLight_local_G;
  d->_g15 = d->_g13 && d->_cg38;
  if (d->_g15) {
    d->_TrafficLight_local__Atrig2 = 1;
  }
  d->_g18 = d->_g13 && !d->_cg38;
  d->_cg41 = d->pedestrian && d->_TrafficLight_local__region1_green_x < 60;
  d->_g24 = d->_g18 && d->_cg41;
  if (d->_g24) {
    d->_TrafficLight_local__Atrig3 = 1;
  }
  d->_g3 = d->_g18 && !d->_cg41;
  d->_cg43 = d->pedestrian && d->_TrafficLight_local__region1_green_x == 60;
  d->_g41 = d->_g3 && d->_cg43;
  if (d->_g41) {
    d->_TrafficLight_local__Atrig4 = 1;
  }
  d->_cg34 = d->_TrafficLight_local__Atrig2 || d->_TrafficLight_local__Atrig3 || d->_TrafficLight_local__Atrig4;
  d->_g35 = d->_g6 && d->_cg34;
  d->_g38 = !d->_g13;
  d->_g44 = d->_g15 || d->_g24 || d->_g41;
  d->_g42 = (d->_g9 || d->_g35) && (d->_g38 || d->_g44) && (d->_g35 || d->_g44);
  d->_cg45 = d->_TrafficLight_local__Atrig2;
  d->_g39 = d->_g42 && d->_cg45;
  if (d->_g39) {
    d->_TrafficLight_local__region1_green_x = 0;
    d->_TrafficLight_local__region1_green_sigG |= 1;
    d->_taken_transitions[2] += 1;
  }
  d->_g40 = d->_pg68;
  if (d->_g40) {
    d->_TrafficLight_local__region1_green_x += d->deltaT;
  }
  d->_g35_e1 = !d->_g40;
  d->_g35 = d->_pg43;
  d->_cg66 = d->_TrafficLight_local__region1_green_x >= 60;
  d->_g40_e2 = d->_g35 && d->_cg66;
  if (d->_g40_e2) {
    d->_TrafficLight_local__Atrig5 = 1;
  }
  d->_cg51 = d->_TrafficLight_local__Atrig5;
  d->_g52 = d->_g40 && d->_cg51;
  d->_g62 = d->_pg31;
  d->_g56 = d->_pg69;
  d->_g59_e2 = !(d->_g62 || d->_g56);
  d->_g62 = d->_g56 || d->_g62;
  d->_cg57 = d->_TrafficLight_local__region1_green_x < 60.0;
  d->_g56 = d->_g62 && d->_cg57;
  if (d->_g56) {
    d->sleepT = (d->sleepT < (60.0 - d->_TrafficLight_local__region1_green_x)) ? d->sleepT : (60.0 - d->_TrafficLight_local__region1_green_x);
  }
  d->_cg58 = d->_TrafficLight_local__Atrig5;
  d->_g57 = d->_g62 && !d->_cg57;
  d->_cg60 = d->_TrafficLight_local__Atrig5;
  d->_g59 = d->_g56 && d->_cg58 || d->_g57 && d->_cg60;
  d->_g67_e3 = !d->_g35;
  d->_g59 = (d->_g35_e1 || d->_g52) && (d->_g59_e2 || d->_g59) && (d->_g67_e3 || d->_g40_e2) && (d->_g52 || d->_g59 || d->_g40_e2);
  if (d->_g59) {
    d->_TrafficLight_local_Y |= 1;
    d->_taken_transitions[5] += 1;
  }
  d->_g52_e1 = d->_g42 && !d->_cg45;
  d->_cg47 = d->_TrafficLight_local__Atrig3;
  d->_g52 = d->_g52_e1 && !d->_cg47;
  if (d->_g52) {
    d->_TrafficLight_local_Y |= 1;
    d->_taken_transitions[4] += 1;
  }
  d->_g59_e2 = d->_GO || d->_g39 || d->_g59 || d->_g52;
  if (d->_g59_e2) {
    d->_TrafficLight_local__Atrig2 = 0;
    d->_TrafficLight_local__Atrig3 = 0;
    d->_TrafficLight_local__Atrig4 = 0;
  }
  d->_cg32 = d->_TrafficLight_local__Atrig2 || d->_TrafficLight_local__Atrig3 || d->_TrafficLight_local__Atrig4;
  d->_g67_e3 = d->_g59_e2 && !d->_cg32 || d->_g6 && !d->_cg34;
  d->_g67 = d->_g59_e2 || d->_g3 && !d->_cg43;
  d->_g45 = d->_g52_e1 && d->_cg47;
  if (d->_g45) {
    d->_taken_transitions[3] += 1;
    d->_TrafficLight_local__Atrig5 = 0;
  }
  d->_cg49 = d->_TrafficLight_local__Atrig5;
  d->_g68 = d->_g45 && !d->_cg49 || d->_g40 && !d->_cg51;
  d->_cg53 = d->_TrafficLight_local__region1_green_x < 60.0;
  d->_g46 = d->_g45 && d->_cg53;
  if (d->_g46) {
    d->sleepT = (d->sleepT < (60.0 - d->_TrafficLight_local__region1_green_x)) ? d->sleepT : (60.0 - d->_TrafficLight_local__region1_green_x);
  }
  d->_cg54 = d->_TrafficLight_local__Atrig5;
  d->_g69 = d->_g46 && !d->_cg54 || d->_g56 && !d->_cg58;
  d->_g34 = d->_g45 && !d->_cg53;
  d->_cg63 = d->_TrafficLight_local__Atrig5;
  d->_g31 = d->_g57 && !d->_cg60 || d->_g34 && !d->_cg63;
  d->_g43 = d->_g45 || d->_g35 && !d->_cg66;
  d->_g47 = d->_pg86;
  if (d->_g47) {
    d->_TrafficLight_local__region2_yellow_x += d->deltaT;
  }
  d->_g51 = !d->_g47;
  d->_g58 = d->_pg88;
  d->_cg79 = d->_TrafficLight_local_Y;
  d->_g54 = d->_g58 && d->_cg79;
  if (d->_g54) {
    d->_TrafficLight_local__Atrig6 = 1;
  }
  d->_g63 = d->_g58 && !d->_cg79;
  d->_cg82 = d->_TrafficLight_local__region2_yellow_x < 10;
  d->_g60 = d->_g63 && d->_cg82;
  if (d->_g60) {
    d->_TrafficLight_local__Atrig7 = 1;
  }
  d->_g66 = d->_g63 && !d->_cg82;
  d->_cg84 = d->_TrafficLight_local__region2_yellow_x == 10;
  d->_g48 = d->_g66 && d->_cg84;
  if (d->_g48) {
    d->_TrafficLight_local__Atrig8 = 1;
  }
  d->_cg75 = d->_TrafficLight_local__Atrig6 || d->_TrafficLight_local__Atrig7 || d->_TrafficLight_local__Atrig8;
  d->_g82 = d->_g47 && d->_cg75;
  d->_g79 = !d->_g58;
  d->_g80 = d->_g54 || d->_g60 || d->_g48;
  d->_g85 = (d->_g51 || d->_g82) && (d->_g79 || d->_g80) && (d->_g82 || d->_g80);
  d->_cg86 = d->_TrafficLight_local__Atrig6;
  d->_g83 = d->_g85 && d->_cg86;
  if (d->_g83) {
    d->_TrafficLight_local__region2_yellow_x = 0;
    d->_TrafficLight_local__region2_yellow_sigY |= 1;
    d->_taken_transitions[6] += 1;
  }
  d->_g76_e1 = d->_g85 && !d->_cg86;
  d->_cg88 = d->_TrafficLight_local__Atrig7;
  d->_g76 = d->_g76_e1 && d->_cg88;
  if (d->_g76) {
    d->_TrafficLight_local__region2_yellow_sigY |= 1;
    d->_taken_transitions[7] += 1;
  }
  d->_g81_e2 = d->_g76_e1 && !d->_cg88;
  if (d->_g81_e2) {
    d->_TrafficLight_local_R |= 1;
    d->_taken_transitions[8] += 1;
  }
  d->_g81 = d->_GO || d->_g83 || d->_g76 || d->_g81_e2;
  if (d->_g81) {
    d->_TrafficLight_local__Atrig6 = 0;
    d->_TrafficLight_local__Atrig7 = 0;
    d->_TrafficLight_local__Atrig8 = 0;
  }
  d->_cg73 = d->_TrafficLight_local__Atrig6 || d->_TrafficLight_local__Atrig7 || d->_TrafficLight_local__Atrig8;
  d->_g86 = d->_g81 && !d->_cg73 || d->_g47 && !d->_cg75;
  d->_g88 = d->_g81 || d->_g66 && !d->_cg84;
}

void reset(TickData* d) {
  d->_GO = 1;
  d->_TERM = 0;
  d->deltaT = 0.0;
  d->sleepT = 0.0;
  d->_taken_transitions[0] = 0;
  d->_taken_transitions[1] = 0;
  d->_taken_transitions[2] = 0;
  d->_taken_transitions[3] = 0;
  d->_taken_transitions[4] = 0;
  d->_taken_transitions[5] = 0;
  d->_taken_transitions[6] = 0;
  d->_taken_transitions[7] = 0;
  d->_taken_transitions[8] = 0;
  d->_TrafficLight_local__region0_red_x = 0;
  d->_TrafficLight_local__region1_green_x = 70;
  d->_TrafficLight_local__region2_yellow_x = 70;
  d->_pg7 = 0;
  d->_pg28 = 0;
  d->_pg27 = 0;
  d->_pg14_e2 = 0;
  d->_pg67_e3 = 0;
  d->_pg67 = 0;
  d->_pg68 = 0;
  d->_pg43 = 0;
  d->_pg31 = 0;
  d->_pg69 = 0;
  d->_pg86 = 0;
  d->_pg88 = 0;
}

void tick(TickData* d) {
  logic(d);

  d->_pg7 = d->_g7;
  d->_pg28 = d->_g28;
  d->_pg27 = d->_g27;
  d->_pg14_e2 = d->_g14_e2;
  d->_pg67_e3 = d->_g67_e3;
  d->_pg67 = d->_g67;
  d->_pg68 = d->_g68;
  d->_pg43 = d->_g43;
  d->_pg31 = d->_g31;
  d->_pg69 = d->_g69;
  d->_pg86 = d->_g86;
  d->_pg88 = d->_g88;
  d->_GO = 0;
}
