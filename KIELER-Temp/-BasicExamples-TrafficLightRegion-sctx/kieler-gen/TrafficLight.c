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
  d->_g6 = d->_pg32;
  if (d->_g6) {
    d->_TrafficLight_local__region0_red_x += d->deltaT;
  }
  d->_g7_e1 = !d->_g6;
  d->_g21 = d->_pg6;
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
  d->_g11 = d->_pg36;
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
  d->_g23 = d->_pg13;
  if (d->_g23) {
    d->_TrafficLight_local__region0_red_x += d->deltaT;
  }
  d->_g7 = !d->_g23;
  d->_g7_e1 = d->_pg123;
  if (d->_g7_e1) {
    d->_TrafficLight_local__region2_yellow_x += d->deltaT;
  }
  d->_g14 = !d->_g7_e1;
  d->_g14_e2 = d->_pg127_e1;
  d->_cg151 = d->_TrafficLight_local__region2_yellow_x < 10;
  d->_g152 = d->_g14_e2 && d->_cg151;
  if (d->_g152) {
    d->_TrafficLight_local__Atrig11 = 1;
  }
  d->_g154 = d->_g14_e2 && !d->_cg151;
  d->_cg154 = d->_TrafficLight_local__region2_yellow_x >= 10;
  d->_g155 = d->_g154 && d->_cg154;
  if (d->_g155) {
    d->_TrafficLight_local__Atrig12 = 1;
  }
  d->_cg136 = d->_TrafficLight_local__Atrig11 || d->_TrafficLight_local__Atrig12;
  d->_g137 = d->_g7_e1 && d->_cg136;
  d->_g147 = d->_pg127;
  d->_g141 = d->_pg130;
  d->_g144_e2 = !(d->_g147 || d->_g141);
  d->_g141 = d->_g141 || d->_g147;
  d->_cg142 = d->_TrafficLight_local__region2_yellow_x < 10.0;
  d->_g147 = d->_g141 && d->_cg142;
  if (d->_g147) {
    d->sleepT = (d->sleepT < (10.0 - d->_TrafficLight_local__region2_yellow_x)) ? d->sleepT : (10.0 - d->_TrafficLight_local__region2_yellow_x);
  }
  d->_cg143 = d->_TrafficLight_local__Atrig11 || d->_TrafficLight_local__Atrig12;
  d->_g142 = d->_g141 && !d->_cg142;
  d->_cg145 = d->_TrafficLight_local__Atrig11 || d->_TrafficLight_local__Atrig12;
  d->_g144 = d->_g147 && d->_cg143 || d->_g142 && d->_cg145;
  d->_g151 = !d->_g14_e2;
  d->_g152 = d->_g152 || d->_g155;
  d->_g155 = (d->_g14 || d->_g137) && (d->_g144_e2 || d->_g144) && (d->_g151 || d->_g152) && (d->_g137 || d->_g144 || d->_g152);
  d->_cg156 = d->_TrafficLight_local__Atrig11;
  d->_g144 = d->_g155 && !d->_cg156;
  if (d->_g144) {
    d->_TrafficLight_local_R |= 1;
    d->_taken_transitions[12] += 1;
  }
  d->_g153_e3 = d->_pg15;
  d->_cg35 = d->_TrafficLight_local_R;
  d->_g153 = d->_g153_e3 && d->_cg35;
  if (d->_g153) {
    d->_TrafficLight_local__Atrig2 = 1;
  }
  d->_cg31 = d->_TrafficLight_local__Atrig2;
  d->_g137_e1 = d->_g23 && d->_cg31;
  d->_g137 = !d->_g153_e3;
  d->_g144_e2 = (d->_g7 || d->_g137_e1) && (d->_g137 || d->_g153) && (d->_g137_e1 || d->_g153);
  if (d->_g144_e2) {
    d->_TrafficLight_local__region0_red_x = 0;
    d->_TrafficLight_local__region0_red_sigR |= 1;
    d->_taken_transitions[2] += 1;
  }
  d->_g36_e2 = d->_GO || d->_g23_e3 || d->_g144_e2;
  if (d->_g36_e2) {
    d->_TrafficLight_local__Atrig = 0;
    d->_TrafficLight_local__Atrig1 = 0;
  }
  d->_cg4 = d->_TrafficLight_local__Atrig || d->_TrafficLight_local__Atrig1;
  d->_g32 = d->_g36_e2 && !d->_cg4 || d->_g6 && !d->_cg6;
  d->_cg8 = d->_TrafficLight_local__region0_red_x < 60.0;
  d->_g32_e1 = d->_g36_e2 && d->_cg8;
  if (d->_g32_e1) {
    d->sleepT = (d->sleepT < (60.0 - d->_TrafficLight_local__region0_red_x)) ? d->sleepT : (60.0 - d->_TrafficLight_local__region0_red_x);
  }
  d->_cg9 = d->_TrafficLight_local__Atrig || d->_TrafficLight_local__Atrig1;
  d->_g36 = d->_g32_e1 && !d->_cg9 || d->_g17 && !d->_cg13;
  d->_g37 = d->_g36_e2 && !d->_cg8;
  d->_cg18 = d->_TrafficLight_local__Atrig || d->_TrafficLight_local__Atrig1;
  d->_g27 = d->_g12 && !d->_cg15 || d->_g37 && !d->_cg18;
  d->_g6 = d->_g36_e2 || d->_g24 && !d->_cg24;
  d->_g9 = d->_g25 && !d->_cg26;
  if (d->_g9) {
    d->_TrafficLight_local_G |= 1;
    d->_taken_transitions[1] += 1;
    d->_TrafficLight_local__Atrig2 = 0;
  }
  d->_cg29 = d->_TrafficLight_local__Atrig2;
  d->_g13 = d->_g9 && !d->_cg29 || d->_g23 && !d->_cg31;
  d->_g15 = d->_g9 || d->_g153_e3 && !d->_cg35;
  d->_g18 = d->_pg67;
  if (d->_g18) {
    d->_TrafficLight_local__region1_green_x += d->deltaT;
  }
  d->_g24 = !d->_g18;
  d->_g3 = d->_pg50;
  d->_cg108 = d->_TrafficLight_local__region1_green_x < 60;
  d->_g26 = d->_g3 && d->_cg108;
  if (d->_g26) {
    d->_TrafficLight_local__Atrig8 = 1;
  }
  d->_g31 = d->_g3 && !d->_cg108;
  d->_cg111 = d->_TrafficLight_local__region1_green_x >= 60;
  d->_g28 = d->_g31 && d->_cg111;
  if (d->_g28) {
    d->_TrafficLight_local__Atrig9 = 1;
  }
  d->_cg93 = d->_TrafficLight_local__Atrig8 || d->_TrafficLight_local__Atrig9;
  d->_g35 = d->_g18 && d->_cg93;
  d->_g104 = d->_pg86;
  d->_g98 = d->_pg73;
  d->_g101_e2 = !(d->_g104 || d->_g98);
  d->_g98 = d->_g98 || d->_g104;
  d->_cg99 = d->_TrafficLight_local__region1_green_x < 60.0;
  d->_g104 = d->_g98 && d->_cg99;
  if (d->_g104) {
    d->sleepT = (d->sleepT < (60.0 - d->_TrafficLight_local__region1_green_x)) ? d->sleepT : (60.0 - d->_TrafficLight_local__region1_green_x);
  }
  d->_cg100 = d->_TrafficLight_local__Atrig8 || d->_TrafficLight_local__Atrig9;
  d->_g99 = d->_g98 && !d->_cg99;
  d->_cg102 = d->_TrafficLight_local__Atrig8 || d->_TrafficLight_local__Atrig9;
  d->_g101 = d->_g104 && d->_cg100 || d->_g99 && d->_cg102;
  d->_g108 = !d->_g3;
  d->_g112 = d->_g26 || d->_g28;
  d->_g109 = (d->_g24 || d->_g35) && (d->_g101_e2 || d->_g101) && (d->_g108 || d->_g112) && (d->_g35 || d->_g101 || d->_g112);
  d->_cg113 = d->_TrafficLight_local__Atrig8;
  d->_g101 = d->_g109 && !d->_cg113;
  if (d->_g101) {
    d->_TrafficLight_local_Y |= 1;
    d->_taken_transitions[9] += 1;
  }
  d->_g101_e2 = d->_pg47;
  if (d->_g101_e2) {
    d->_TrafficLight_local__region1_green_x += d->deltaT;
  }
  d->_g110 = !d->_g101_e2;
  d->_g110_e3 = d->_pg56;
  d->_cg79 = d->pedestrian && d->_TrafficLight_local__region1_green_x < 60;
  d->_g94 = d->_g110_e3 && d->_cg79;
  if (d->_g94) {
    d->_TrafficLight_local__Atrig4 = 1;
  }
  d->_g94_e1 = d->_g110_e3 && !d->_cg79;
  d->_cg82 = d->pedestrian && d->_TrafficLight_local__region1_green_x >= 60;
  d->_g83 = d->_g94_e1 && d->_cg82;
  if (d->_g83) {
    d->_TrafficLight_local__Atrig5 = 1;
  }
  d->_g82 = d->_g94_e1 && !d->_cg82;
  d->_cg84 = d->_TrafficLight_local__region1_green_x >= 60 && !d->pedestrian;
  d->_g85 = d->_g82 && d->_cg84;
  if (d->_g85) {
    d->_TrafficLight_local__Atrig6 = 1;
  }
  d->_g84 = d->_g82 && !d->_cg84;
  d->_cg86 = d->_TrafficLight_local__region1_green_x <= 60;
  d->_g87 = d->_g84 && d->_cg86;
  if (d->_g87) {
    d->_TrafficLight_local__Atrig7 = 1;
  }
  d->_cg53 = d->_TrafficLight_local__Atrig4 || d->_TrafficLight_local__Atrig5 || d->_TrafficLight_local__Atrig6 || d->_TrafficLight_local__Atrig7;
  d->_g54 = d->_g101_e2 && d->_cg53;
  d->_g64 = d->_pg44;
  d->_g58 = d->_pg48_e2;
  d->_g61_e2 = !(d->_g64 || d->_g58);
  d->_g64 = d->_g58 || d->_g64;
  d->_cg59 = d->_TrafficLight_local__region1_green_x < 60.0;
  d->_g58 = d->_g64 && d->_cg59;
  if (d->_g58) {
    d->sleepT = (d->sleepT < (60.0 - d->_TrafficLight_local__region1_green_x)) ? d->sleepT : (60.0 - d->_TrafficLight_local__region1_green_x);
  }
  d->_cg60 = d->_TrafficLight_local__Atrig4 || d->_TrafficLight_local__Atrig5 || d->_TrafficLight_local__Atrig6 || d->_TrafficLight_local__Atrig7;
  d->_g59 = d->_g64 && !d->_cg59;
  d->_cg62 = d->_TrafficLight_local__Atrig4 || d->_TrafficLight_local__Atrig5 || d->_TrafficLight_local__Atrig6 || d->_TrafficLight_local__Atrig7;
  d->_g61 = d->_g58 && d->_cg60 || d->_g59 && d->_cg62;
  d->_g75 = d->_pg53;
  d->_g69 = d->_pg120;
  d->_g72_e3 = !(d->_g75 || d->_g69);
  d->_g75 = d->_g69 || d->_g75;
  d->_cg70 = d->_TrafficLight_local__region1_green_x < 60.0;
  d->_g69 = d->_g75 && d->_cg70;
  if (d->_g69) {
    d->sleepT = (d->sleepT < (60.0 - d->_TrafficLight_local__region1_green_x)) ? d->sleepT : (60.0 - d->_TrafficLight_local__region1_green_x);
  }
  d->_cg71 = d->_TrafficLight_local__Atrig4 || d->_TrafficLight_local__Atrig5 || d->_TrafficLight_local__Atrig6 || d->_TrafficLight_local__Atrig7;
  d->_g70 = d->_g75 && !d->_cg70;
  d->_cg73 = d->_TrafficLight_local__Atrig4 || d->_TrafficLight_local__Atrig5 || d->_TrafficLight_local__Atrig6 || d->_TrafficLight_local__Atrig7;
  d->_g72 = d->_g69 && d->_cg71 || d->_g70 && d->_cg73;
  d->_g79 = !d->_g110_e3;
  d->_g85 = d->_g94 || d->_g83 || d->_g85 || d->_g87;
  d->_g87 = (d->_g110 || d->_g54) && (d->_g61_e2 || d->_g61) && (d->_g72_e3 || d->_g72) && (d->_g79 || d->_g85) && (d->_g54 || d->_g61 || d->_g72 || d->_g85);
  d->_cg88 = d->_TrafficLight_local__Atrig4;
  d->_g80 = d->_g87 && !d->_cg88;
  d->_cg116 = d->_TrafficLight_local__Atrig5;
  d->_g83 = d->_g80 && d->_cg116;
  if (d->_g83) {
    d->_TrafficLight_local_Y |= 1;
    d->_taken_transitions[5] += 1;
  }
  d->_g54_e1 = d->_g80 && !d->_cg116;
  d->_cg118 = d->_TrafficLight_local__Atrig6;
  d->_g72_e3 = d->_g54_e1 && d->_cg118;
  if (d->_g72_e3) {
    d->_taken_transitions[6] += 1;
  }
  d->_g61_e2 = d->_GO || d->_g101 || d->_g83 || d->_g72_e3;
  if (d->_g61_e2) {
    d->_TrafficLight_local__Atrig3 = 0;
  }
  d->_cg41 = d->_TrafficLight_local__Atrig3;
  d->_g54 = d->_pg116;
  d->_cg47 = d->_TrafficLight_local_G;
  d->_g81 = d->_g54 && d->_cg47;
  if (d->_g81) {
    d->_TrafficLight_local__Atrig3 = 1;
  }
  d->_g81_e4 = d->_pg61;
  if (d->_g81_e4) {
    d->_TrafficLight_local__region1_green_x += d->deltaT;
  }
  d->_cg43 = d->_TrafficLight_local__Atrig3;
  d->_g61 = d->_g61_e2 && !d->_cg41 || d->_g81_e4 && !d->_cg43;
  d->_g72 = d->_g81_e4 && d->_cg43;
  d->_g116 = d->_g61_e2 || d->_g54 && !d->_cg47;
  d->_g117 = !d->_g81_e4;
  d->_g115 = !d->_g54;
  d->_g119 = (d->_g117 || d->_g72) && (d->_g115 || d->_g81) && (d->_g72 || d->_g81);
  if (d->_g119) {
    d->_TrafficLight_local__region1_green_x = 0;
    d->_TrafficLight_local__region1_green_sigG |= 1;
    d->_taken_transitions[3] += 1;
  }
  d->_g40 = d->_g54_e1 && !d->_cg118;
  if (d->_g40) {
    d->_TrafficLight_local__region1_green_sigG |= 1;
    d->_taken_transitions[7] += 1;
  }
  d->_g43 = d->_g119 || d->_g40;
  if (d->_g43) {
    d->_TrafficLight_local__Atrig4 = 0;
    d->_TrafficLight_local__Atrig5 = 0;
    d->_TrafficLight_local__Atrig6 = 0;
    d->_TrafficLight_local__Atrig7 = 0;
  }
  d->_cg51 = d->_TrafficLight_local__Atrig4 || d->_TrafficLight_local__Atrig5 || d->_TrafficLight_local__Atrig6 || d->_TrafficLight_local__Atrig7;
  d->_g47 = d->_g43 && !d->_cg51 || d->_g101_e2 && !d->_cg53;
  d->_cg55 = d->_TrafficLight_local__region1_green_x < 60.0;
  d->_g48 = d->_g43 && d->_cg55;
  if (d->_g48) {
    d->sleepT = (d->sleepT < (60.0 - d->_TrafficLight_local__region1_green_x)) ? d->sleepT : (60.0 - d->_TrafficLight_local__region1_green_x);
  }
  d->_cg56 = d->_TrafficLight_local__Atrig4 || d->_TrafficLight_local__Atrig5 || d->_TrafficLight_local__Atrig6 || d->_TrafficLight_local__Atrig7;
  d->_g48_e2 = d->_g48 && !d->_cg56 || d->_g58 && !d->_cg60;
  d->_g44_e1 = d->_g43 && !d->_cg55;
  d->_cg65 = d->_TrafficLight_local__Atrig4 || d->_TrafficLight_local__Atrig5 || d->_TrafficLight_local__Atrig6 || d->_TrafficLight_local__Atrig7;
  d->_g44 = d->_g59 && !d->_cg62 || d->_g44_e1 && !d->_cg65;
  d->_cg66 = d->_TrafficLight_local__region1_green_x < 60.0;
  d->_g118 = d->_g43 && d->_cg66;
  if (d->_g118) {
    d->sleepT = (d->sleepT < (60.0 - d->_TrafficLight_local__region1_green_x)) ? d->sleepT : (60.0 - d->_TrafficLight_local__region1_green_x);
  }
  d->_cg67 = d->_TrafficLight_local__Atrig4 || d->_TrafficLight_local__Atrig5 || d->_TrafficLight_local__Atrig6 || d->_TrafficLight_local__Atrig7;
  d->_g120 = d->_g118 && !d->_cg67 || d->_g69 && !d->_cg71;
  d->_g49 = d->_g43 && !d->_cg66;
  d->_cg76 = d->_TrafficLight_local__Atrig4 || d->_TrafficLight_local__Atrig5 || d->_TrafficLight_local__Atrig6 || d->_TrafficLight_local__Atrig7;
  d->_g53 = d->_g70 && !d->_cg73 || d->_g49 && !d->_cg76;
  d->_g56 = d->_g43 || d->_g84 && !d->_cg86;
  d->_g60 = d->_g87 && d->_cg88;
  if (d->_g60) {
    d->_taken_transitions[4] += 1;
  }
  d->_g62 = d->_g109 && d->_cg113;
  if (d->_g62) {
    d->_TrafficLight_local__region1_green_sigG |= 1;
    d->_taken_transitions[8] += 1;
  }
  d->_g65 = d->_g60 || d->_g62;
  if (d->_g65) {
    d->_TrafficLight_local__Atrig8 = 0;
    d->_TrafficLight_local__Atrig9 = 0;
  }
  d->_cg91 = d->_TrafficLight_local__Atrig8 || d->_TrafficLight_local__Atrig9;
  d->_g67 = d->_g65 && !d->_cg91 || d->_g18 && !d->_cg93;
  d->_cg95 = d->_TrafficLight_local__region1_green_x < 60.0;
  d->_g71 = d->_g65 && d->_cg95;
  if (d->_g71) {
    d->sleepT = (d->sleepT < (60.0 - d->_TrafficLight_local__region1_green_x)) ? d->sleepT : (60.0 - d->_TrafficLight_local__region1_green_x);
  }
  d->_cg96 = d->_TrafficLight_local__Atrig8 || d->_TrafficLight_local__Atrig9;
  d->_g73 = d->_g71 && !d->_cg96 || d->_g104 && !d->_cg100;
  d->_g76 = d->_g65 && !d->_cg95;
  d->_cg105 = d->_TrafficLight_local__Atrig8 || d->_TrafficLight_local__Atrig9;
  d->_g86 = d->_g99 && !d->_cg102 || d->_g76 && !d->_cg105;
  d->_g50 = d->_g65 || d->_g31 && !d->_cg111;
  d->_g88 = d->_GO || d->_g144;
  if (d->_g88) {
    d->_TrafficLight_local__Atrig10 = 0;
  }
  d->_cg124 = d->_TrafficLight_local__Atrig10;
  d->_g113 = d->_pg100;
  d->_cg130 = d->_TrafficLight_local_Y;
  d->_g89 = d->_g113 && d->_cg130;
  if (d->_g89) {
    d->_TrafficLight_local__Atrig10 = 1;
  }
  d->_g114 = d->_pg93;
  if (d->_g114) {
    d->_TrafficLight_local__region2_yellow_x += d->deltaT;
  }
  d->_cg126 = d->_TrafficLight_local__Atrig10;
  d->_g93 = d->_g88 && !d->_cg124 || d->_g114 && !d->_cg126;
  d->_g96 = d->_g114 && d->_cg126;
  d->_g100 = d->_g88 || d->_g113 && !d->_cg130;
  d->_g105 = !d->_g114;
  d->_g102 = !d->_g113;
  d->_g111 = (d->_g105 || d->_g96) && (d->_g102 || d->_g89) && (d->_g96 || d->_g89);
  if (d->_g111) {
    d->_TrafficLight_local__region2_yellow_x = 0;
    d->_TrafficLight_local__region2_yellow_sigY |= 1;
    d->_taken_transitions[10] += 1;
  }
  d->_g90 = d->_g155 && d->_cg156;
  if (d->_g90) {
    d->_TrafficLight_local__region2_yellow_sigY |= 1;
    d->_taken_transitions[11] += 1;
  }
  d->_g158 = d->_g111 || d->_g90;
  if (d->_g158) {
    d->_TrafficLight_local__Atrig11 = 0;
    d->_TrafficLight_local__Atrig12 = 0;
  }
  d->_cg134 = d->_TrafficLight_local__Atrig11 || d->_TrafficLight_local__Atrig12;
  d->_g123 = d->_g158 && !d->_cg134 || d->_g7_e1 && !d->_cg136;
  d->_cg138 = d->_TrafficLight_local__region2_yellow_x < 10.0;
  d->_g126 = d->_g158 && d->_cg138;
  if (d->_g126) {
    d->sleepT = (d->sleepT < (10.0 - d->_TrafficLight_local__region2_yellow_x)) ? d->sleepT : (10.0 - d->_TrafficLight_local__region2_yellow_x);
  }
  d->_cg139 = d->_TrafficLight_local__Atrig11 || d->_TrafficLight_local__Atrig12;
  d->_g130 = d->_g126 && !d->_cg139 || d->_g147 && !d->_cg143;
  d->_g131_e2 = d->_g158 && !d->_cg138;
  d->_cg148 = d->_TrafficLight_local__Atrig11 || d->_TrafficLight_local__Atrig12;
  d->_g127 = d->_g142 && !d->_cg145 || d->_g131_e2 && !d->_cg148;
  d->_g127_e1 = d->_g158 || d->_g154 && !d->_cg154;
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
  d->_taken_transitions[9] = 0;
  d->_taken_transitions[10] = 0;
  d->_taken_transitions[11] = 0;
  d->_taken_transitions[12] = 0;
  d->_TrafficLight_local__region0_red_x = 0;
  d->_TrafficLight_local__region1_green_x = 70;
  d->_TrafficLight_local__region2_yellow_x = 70;
  d->_pg32 = 0;
  d->_pg6 = 0;
  d->_pg27 = 0;
  d->_pg36 = 0;
  d->_pg13 = 0;
  d->_pg123 = 0;
  d->_pg127_e1 = 0;
  d->_pg127 = 0;
  d->_pg130 = 0;
  d->_pg15 = 0;
  d->_pg67 = 0;
  d->_pg50 = 0;
  d->_pg86 = 0;
  d->_pg73 = 0;
  d->_pg47 = 0;
  d->_pg56 = 0;
  d->_pg44 = 0;
  d->_pg48_e2 = 0;
  d->_pg53 = 0;
  d->_pg120 = 0;
  d->_pg116 = 0;
  d->_pg61 = 0;
  d->_pg100 = 0;
  d->_pg93 = 0;
}

void tick(TickData* d) {
  logic(d);

  d->_pg32 = d->_g32;
  d->_pg6 = d->_g6;
  d->_pg27 = d->_g27;
  d->_pg36 = d->_g36;
  d->_pg13 = d->_g13;
  d->_pg123 = d->_g123;
  d->_pg127_e1 = d->_g127_e1;
  d->_pg127 = d->_g127;
  d->_pg130 = d->_g130;
  d->_pg15 = d->_g15;
  d->_pg67 = d->_g67;
  d->_pg50 = d->_g50;
  d->_pg86 = d->_g86;
  d->_pg73 = d->_g73;
  d->_pg47 = d->_g47;
  d->_pg56 = d->_g56;
  d->_pg44 = d->_g44;
  d->_pg48_e2 = d->_g48_e2;
  d->_pg53 = d->_g53;
  d->_pg120 = d->_g120;
  d->_pg116 = d->_g116;
  d->_pg61 = d->_g61;
  d->_pg100 = d->_g100;
  d->_pg93 = d->_g93;
  d->_GO = 0;
}
