#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H
/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */


typedef struct {
  double x;
  int _taken_transitions[5];
  double deltaT;
  double sleepT;
  char pedestrian;
  char sigG;
  char sigY;
  char sigR;
  char _TrafficLight_local__Atrig;
  char _TrafficLight_local__Atrig1;
  char _TrafficLight_local__Atrig2;
  char _TrafficLight_local__Atrig3;
  char _TrafficLight_local__Atrig4;
  char _g3;
  char _g6;
  char _g7;
  char _g9;
  char _g11;
  char _g12;
  char _g13;
  char _g14;
  char _g15;
  char _g17;
  char _g18;
  char _g21;
  char _g22;
  char _g23;
  char _g26;
  char _g27;
  char _g30;
  char _g31;
  char _g32;
  char _g33;
  char _g34;
  char _g35;
  char _g36;
  char _g39;
  char _g40;
  char _g42;
  char _g44;
  char _g45;
  char _g46;
  char _g47;
  char _g48;
  char _g50;
  char _g51;
  char _g54;
  char _g55;
  char _g60;
  char _g61;
  char _g65;
  char _g66;
  char _g68;
  char _g71;
  char _g75;
  char _g76;
  char _g77;
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
  char _cg26;
  char _cg33;
  char _cg30;
  char _cg35;
  char _cg37;
  char _cg39;
  char _cg41;
  char _cg42;
  char _cg46;
  char _cg45;
  char _cg48;
  char _cg51;
  char _cg54;
  char _cg58;
  char _cg60;
  char _cg62;
  char _cg63;
  char _cg67;
  char _cg66;
  char _cg69;
  char _cg72;
  char _cg75;
  char _g7_e1;
  char _g14_e2;
  char _g22_e3;
  char _g27_e1;
  char _g32_e2;
  char _g40_e1;
  char _g47_e2;
  char _g55_e3;
  char _g61_e1;
  char _g68_e2;
  char _g76_e3;
  char _TERM;
  char _pg40;
  char _pg35;
  char _pg47;
  char _pg47_e2;
  char _pg61;
  char _pg18;
  char _pg9;
  char _pg15;
  char _pg14;
  char _pg33;
  char _pg32_e2;
  char _pg48;
  char _pg42;
  char _pg51;
} TickData;

void reset(TickData* d);
void logic(TickData* d);
void tick(TickData* d);

#endif /* !TRAFFICLIGHT_H */
