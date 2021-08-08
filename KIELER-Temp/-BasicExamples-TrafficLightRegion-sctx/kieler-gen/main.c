

#include "lib/ticktime.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "lib/cJSON.h"

#include "TrafficLight.h"

// The data for the model
TickData model;

double _ticktime;


void receiveVariables() {
    size_t blocksize = 2048;
    char *buffer = realloc(NULL, sizeof(char) * blocksize);
    size_t i = 0;
    
    // read next line
    int c = getchar();
    while (c != EOF && c != '\n') {
        buffer[i++] = (char) c;
        if (i == blocksize) {
            buffer = realloc(buffer, sizeof(char) * (blocksize += 2048));
        }
        c = getchar();
    }
    buffer[i++] = '\0';
    
    if (c == EOF) {
        exit(EOF);
    }
    
    cJSON *root = cJSON_Parse(buffer);
    cJSON *item = NULL;
    if(root != NULL) {
        // Receive deltaT
        item = cJSON_GetObjectItemCaseSensitive(root, "deltaT");
        if(item != NULL) {
            model.deltaT = item->valuedouble;
        }
        // Receive pedestrian
        item = cJSON_GetObjectItemCaseSensitive(root, "pedestrian");
        if(item != NULL) {
            model.pedestrian = item->valueint;
        }
        // Receive _TrafficLight_local__region0_red_sigR
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local__region0_red_sigR");
        if(item != NULL) {
            model._TrafficLight_local__region0_red_sigR = item->valueint;
        }
        // Receive _TrafficLight_local__region1_green_sigG
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local__region1_green_sigG");
        if(item != NULL) {
            model._TrafficLight_local__region1_green_sigG = item->valueint;
        }
        // Receive _TrafficLight_local__region2_yellow_sigY
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local__region2_yellow_sigY");
        if(item != NULL) {
            model._TrafficLight_local__region2_yellow_sigY = item->valueint;
        }
        // Receive sleepT
        item = cJSON_GetObjectItemCaseSensitive(root, "sleepT");
        if(item != NULL) {
            model.sleepT = item->valuedouble;
        }
        // Receive #ticktime
        item = cJSON_GetObjectItemCaseSensitive(root, "#ticktime");
        if(item != NULL) {
            _ticktime = item->valuedouble;
        }
        // Receive _GO
        item = cJSON_GetObjectItemCaseSensitive(root, "_GO");
        if(item != NULL) {
            model._GO = item->valueint;
        }
        // Receive _TERM
        item = cJSON_GetObjectItemCaseSensitive(root, "_TERM");
        if(item != NULL) {
            model._TERM = item->valueint;
        }
        // Receive _TrafficLight_local_G
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local_G");
        if(item != NULL) {
            model._TrafficLight_local_G = item->valueint;
        }
        // Receive _TrafficLight_local_R
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local_R");
        if(item != NULL) {
            model._TrafficLight_local_R = item->valueint;
        }
        // Receive _TrafficLight_local_Y
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local_Y");
        if(item != NULL) {
            model._TrafficLight_local_Y = item->valueint;
        }
        // Receive _TrafficLight_local__Atrig
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local__Atrig");
        if(item != NULL) {
            model._TrafficLight_local__Atrig = item->valueint;
        }
        // Receive _TrafficLight_local__Atrig1
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local__Atrig1");
        if(item != NULL) {
            model._TrafficLight_local__Atrig1 = item->valueint;
        }
        // Receive _TrafficLight_local__Atrig10
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local__Atrig10");
        if(item != NULL) {
            model._TrafficLight_local__Atrig10 = item->valueint;
        }
        // Receive _TrafficLight_local__Atrig11
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local__Atrig11");
        if(item != NULL) {
            model._TrafficLight_local__Atrig11 = item->valueint;
        }
        // Receive _TrafficLight_local__Atrig12
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local__Atrig12");
        if(item != NULL) {
            model._TrafficLight_local__Atrig12 = item->valueint;
        }
        // Receive _TrafficLight_local__Atrig2
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local__Atrig2");
        if(item != NULL) {
            model._TrafficLight_local__Atrig2 = item->valueint;
        }
        // Receive _TrafficLight_local__Atrig3
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local__Atrig3");
        if(item != NULL) {
            model._TrafficLight_local__Atrig3 = item->valueint;
        }
        // Receive _TrafficLight_local__Atrig4
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local__Atrig4");
        if(item != NULL) {
            model._TrafficLight_local__Atrig4 = item->valueint;
        }
        // Receive _TrafficLight_local__Atrig5
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local__Atrig5");
        if(item != NULL) {
            model._TrafficLight_local__Atrig5 = item->valueint;
        }
        // Receive _TrafficLight_local__Atrig6
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local__Atrig6");
        if(item != NULL) {
            model._TrafficLight_local__Atrig6 = item->valueint;
        }
        // Receive _TrafficLight_local__Atrig7
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local__Atrig7");
        if(item != NULL) {
            model._TrafficLight_local__Atrig7 = item->valueint;
        }
        // Receive _TrafficLight_local__Atrig8
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local__Atrig8");
        if(item != NULL) {
            model._TrafficLight_local__Atrig8 = item->valueint;
        }
        // Receive _TrafficLight_local__Atrig9
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local__Atrig9");
        if(item != NULL) {
            model._TrafficLight_local__Atrig9 = item->valueint;
        }
        // Receive _TrafficLight_local__region0_red_x
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local__region0_red_x");
        if(item != NULL) {
            model._TrafficLight_local__region0_red_x = item->valuedouble;
        }
        // Receive _TrafficLight_local__region1_green_x
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local__region1_green_x");
        if(item != NULL) {
            model._TrafficLight_local__region1_green_x = item->valuedouble;
        }
        // Receive _TrafficLight_local__region2_yellow_x
        item = cJSON_GetObjectItemCaseSensitive(root, "_TrafficLight_local__region2_yellow_x");
        if(item != NULL) {
            model._TrafficLight_local__region2_yellow_x = item->valuedouble;
        }
        // Receive _cg100
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg100");
        if(item != NULL) {
            model._cg100 = item->valueint;
        }
        // Receive _cg102
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg102");
        if(item != NULL) {
            model._cg102 = item->valueint;
        }
        // Receive _cg105
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg105");
        if(item != NULL) {
            model._cg105 = item->valueint;
        }
        // Receive _cg108
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg108");
        if(item != NULL) {
            model._cg108 = item->valueint;
        }
        // Receive _cg111
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg111");
        if(item != NULL) {
            model._cg111 = item->valueint;
        }
        // Receive _cg113
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg113");
        if(item != NULL) {
            model._cg113 = item->valueint;
        }
        // Receive _cg116
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg116");
        if(item != NULL) {
            model._cg116 = item->valueint;
        }
        // Receive _cg118
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg118");
        if(item != NULL) {
            model._cg118 = item->valueint;
        }
        // Receive _cg12
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg12");
        if(item != NULL) {
            model._cg12 = item->valueint;
        }
        // Receive _cg124
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg124");
        if(item != NULL) {
            model._cg124 = item->valueint;
        }
        // Receive _cg126
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg126");
        if(item != NULL) {
            model._cg126 = item->valueint;
        }
        // Receive _cg13
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg13");
        if(item != NULL) {
            model._cg13 = item->valueint;
        }
        // Receive _cg130
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg130");
        if(item != NULL) {
            model._cg130 = item->valueint;
        }
        // Receive _cg134
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg134");
        if(item != NULL) {
            model._cg134 = item->valueint;
        }
        // Receive _cg136
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg136");
        if(item != NULL) {
            model._cg136 = item->valueint;
        }
        // Receive _cg138
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg138");
        if(item != NULL) {
            model._cg138 = item->valueint;
        }
        // Receive _cg139
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg139");
        if(item != NULL) {
            model._cg139 = item->valueint;
        }
        // Receive _cg142
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg142");
        if(item != NULL) {
            model._cg142 = item->valueint;
        }
        // Receive _cg143
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg143");
        if(item != NULL) {
            model._cg143 = item->valueint;
        }
        // Receive _cg145
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg145");
        if(item != NULL) {
            model._cg145 = item->valueint;
        }
        // Receive _cg148
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg148");
        if(item != NULL) {
            model._cg148 = item->valueint;
        }
        // Receive _cg15
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg15");
        if(item != NULL) {
            model._cg15 = item->valueint;
        }
        // Receive _cg151
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg151");
        if(item != NULL) {
            model._cg151 = item->valueint;
        }
        // Receive _cg154
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg154");
        if(item != NULL) {
            model._cg154 = item->valueint;
        }
        // Receive _cg156
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg156");
        if(item != NULL) {
            model._cg156 = item->valueint;
        }
        // Receive _cg18
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg18");
        if(item != NULL) {
            model._cg18 = item->valueint;
        }
        // Receive _cg21
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg21");
        if(item != NULL) {
            model._cg21 = item->valueint;
        }
        // Receive _cg24
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg24");
        if(item != NULL) {
            model._cg24 = item->valueint;
        }
        // Receive _cg26
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg26");
        if(item != NULL) {
            model._cg26 = item->valueint;
        }
        // Receive _cg29
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg29");
        if(item != NULL) {
            model._cg29 = item->valueint;
        }
        // Receive _cg31
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg31");
        if(item != NULL) {
            model._cg31 = item->valueint;
        }
        // Receive _cg35
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg35");
        if(item != NULL) {
            model._cg35 = item->valueint;
        }
        // Receive _cg4
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg4");
        if(item != NULL) {
            model._cg4 = item->valueint;
        }
        // Receive _cg41
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg41");
        if(item != NULL) {
            model._cg41 = item->valueint;
        }
        // Receive _cg43
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg43");
        if(item != NULL) {
            model._cg43 = item->valueint;
        }
        // Receive _cg47
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg47");
        if(item != NULL) {
            model._cg47 = item->valueint;
        }
        // Receive _cg51
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg51");
        if(item != NULL) {
            model._cg51 = item->valueint;
        }
        // Receive _cg53
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg53");
        if(item != NULL) {
            model._cg53 = item->valueint;
        }
        // Receive _cg55
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg55");
        if(item != NULL) {
            model._cg55 = item->valueint;
        }
        // Receive _cg56
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg56");
        if(item != NULL) {
            model._cg56 = item->valueint;
        }
        // Receive _cg59
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg59");
        if(item != NULL) {
            model._cg59 = item->valueint;
        }
        // Receive _cg6
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg6");
        if(item != NULL) {
            model._cg6 = item->valueint;
        }
        // Receive _cg60
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg60");
        if(item != NULL) {
            model._cg60 = item->valueint;
        }
        // Receive _cg62
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg62");
        if(item != NULL) {
            model._cg62 = item->valueint;
        }
        // Receive _cg65
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg65");
        if(item != NULL) {
            model._cg65 = item->valueint;
        }
        // Receive _cg66
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg66");
        if(item != NULL) {
            model._cg66 = item->valueint;
        }
        // Receive _cg67
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg67");
        if(item != NULL) {
            model._cg67 = item->valueint;
        }
        // Receive _cg70
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg70");
        if(item != NULL) {
            model._cg70 = item->valueint;
        }
        // Receive _cg71
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg71");
        if(item != NULL) {
            model._cg71 = item->valueint;
        }
        // Receive _cg73
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg73");
        if(item != NULL) {
            model._cg73 = item->valueint;
        }
        // Receive _cg76
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg76");
        if(item != NULL) {
            model._cg76 = item->valueint;
        }
        // Receive _cg79
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg79");
        if(item != NULL) {
            model._cg79 = item->valueint;
        }
        // Receive _cg8
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg8");
        if(item != NULL) {
            model._cg8 = item->valueint;
        }
        // Receive _cg82
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg82");
        if(item != NULL) {
            model._cg82 = item->valueint;
        }
        // Receive _cg84
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg84");
        if(item != NULL) {
            model._cg84 = item->valueint;
        }
        // Receive _cg86
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg86");
        if(item != NULL) {
            model._cg86 = item->valueint;
        }
        // Receive _cg88
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg88");
        if(item != NULL) {
            model._cg88 = item->valueint;
        }
        // Receive _cg9
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg9");
        if(item != NULL) {
            model._cg9 = item->valueint;
        }
        // Receive _cg91
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg91");
        if(item != NULL) {
            model._cg91 = item->valueint;
        }
        // Receive _cg93
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg93");
        if(item != NULL) {
            model._cg93 = item->valueint;
        }
        // Receive _cg95
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg95");
        if(item != NULL) {
            model._cg95 = item->valueint;
        }
        // Receive _cg96
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg96");
        if(item != NULL) {
            model._cg96 = item->valueint;
        }
        // Receive _cg99
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg99");
        if(item != NULL) {
            model._cg99 = item->valueint;
        }
        // Receive _g100
        item = cJSON_GetObjectItemCaseSensitive(root, "_g100");
        if(item != NULL) {
            model._g100 = item->valueint;
        }
        // Receive _g101
        item = cJSON_GetObjectItemCaseSensitive(root, "_g101");
        if(item != NULL) {
            model._g101 = item->valueint;
        }
        // Receive _g101_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g101_e2");
        if(item != NULL) {
            model._g101_e2 = item->valueint;
        }
        // Receive _g102
        item = cJSON_GetObjectItemCaseSensitive(root, "_g102");
        if(item != NULL) {
            model._g102 = item->valueint;
        }
        // Receive _g104
        item = cJSON_GetObjectItemCaseSensitive(root, "_g104");
        if(item != NULL) {
            model._g104 = item->valueint;
        }
        // Receive _g105
        item = cJSON_GetObjectItemCaseSensitive(root, "_g105");
        if(item != NULL) {
            model._g105 = item->valueint;
        }
        // Receive _g108
        item = cJSON_GetObjectItemCaseSensitive(root, "_g108");
        if(item != NULL) {
            model._g108 = item->valueint;
        }
        // Receive _g109
        item = cJSON_GetObjectItemCaseSensitive(root, "_g109");
        if(item != NULL) {
            model._g109 = item->valueint;
        }
        // Receive _g11
        item = cJSON_GetObjectItemCaseSensitive(root, "_g11");
        if(item != NULL) {
            model._g11 = item->valueint;
        }
        // Receive _g110
        item = cJSON_GetObjectItemCaseSensitive(root, "_g110");
        if(item != NULL) {
            model._g110 = item->valueint;
        }
        // Receive _g110_e3
        item = cJSON_GetObjectItemCaseSensitive(root, "_g110_e3");
        if(item != NULL) {
            model._g110_e3 = item->valueint;
        }
        // Receive _g111
        item = cJSON_GetObjectItemCaseSensitive(root, "_g111");
        if(item != NULL) {
            model._g111 = item->valueint;
        }
        // Receive _g112
        item = cJSON_GetObjectItemCaseSensitive(root, "_g112");
        if(item != NULL) {
            model._g112 = item->valueint;
        }
        // Receive _g113
        item = cJSON_GetObjectItemCaseSensitive(root, "_g113");
        if(item != NULL) {
            model._g113 = item->valueint;
        }
        // Receive _g114
        item = cJSON_GetObjectItemCaseSensitive(root, "_g114");
        if(item != NULL) {
            model._g114 = item->valueint;
        }
        // Receive _g115
        item = cJSON_GetObjectItemCaseSensitive(root, "_g115");
        if(item != NULL) {
            model._g115 = item->valueint;
        }
        // Receive _g116
        item = cJSON_GetObjectItemCaseSensitive(root, "_g116");
        if(item != NULL) {
            model._g116 = item->valueint;
        }
        // Receive _g117
        item = cJSON_GetObjectItemCaseSensitive(root, "_g117");
        if(item != NULL) {
            model._g117 = item->valueint;
        }
        // Receive _g118
        item = cJSON_GetObjectItemCaseSensitive(root, "_g118");
        if(item != NULL) {
            model._g118 = item->valueint;
        }
        // Receive _g119
        item = cJSON_GetObjectItemCaseSensitive(root, "_g119");
        if(item != NULL) {
            model._g119 = item->valueint;
        }
        // Receive _g12
        item = cJSON_GetObjectItemCaseSensitive(root, "_g12");
        if(item != NULL) {
            model._g12 = item->valueint;
        }
        // Receive _g120
        item = cJSON_GetObjectItemCaseSensitive(root, "_g120");
        if(item != NULL) {
            model._g120 = item->valueint;
        }
        // Receive _g123
        item = cJSON_GetObjectItemCaseSensitive(root, "_g123");
        if(item != NULL) {
            model._g123 = item->valueint;
        }
        // Receive _g126
        item = cJSON_GetObjectItemCaseSensitive(root, "_g126");
        if(item != NULL) {
            model._g126 = item->valueint;
        }
        // Receive _g127
        item = cJSON_GetObjectItemCaseSensitive(root, "_g127");
        if(item != NULL) {
            model._g127 = item->valueint;
        }
        // Receive _g127_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g127_e1");
        if(item != NULL) {
            model._g127_e1 = item->valueint;
        }
        // Receive _g13
        item = cJSON_GetObjectItemCaseSensitive(root, "_g13");
        if(item != NULL) {
            model._g13 = item->valueint;
        }
        // Receive _g130
        item = cJSON_GetObjectItemCaseSensitive(root, "_g130");
        if(item != NULL) {
            model._g130 = item->valueint;
        }
        // Receive _g131_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g131_e2");
        if(item != NULL) {
            model._g131_e2 = item->valueint;
        }
        // Receive _g137
        item = cJSON_GetObjectItemCaseSensitive(root, "_g137");
        if(item != NULL) {
            model._g137 = item->valueint;
        }
        // Receive _g137_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g137_e1");
        if(item != NULL) {
            model._g137_e1 = item->valueint;
        }
        // Receive _g14
        item = cJSON_GetObjectItemCaseSensitive(root, "_g14");
        if(item != NULL) {
            model._g14 = item->valueint;
        }
        // Receive _g141
        item = cJSON_GetObjectItemCaseSensitive(root, "_g141");
        if(item != NULL) {
            model._g141 = item->valueint;
        }
        // Receive _g142
        item = cJSON_GetObjectItemCaseSensitive(root, "_g142");
        if(item != NULL) {
            model._g142 = item->valueint;
        }
        // Receive _g144
        item = cJSON_GetObjectItemCaseSensitive(root, "_g144");
        if(item != NULL) {
            model._g144 = item->valueint;
        }
        // Receive _g144_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g144_e2");
        if(item != NULL) {
            model._g144_e2 = item->valueint;
        }
        // Receive _g147
        item = cJSON_GetObjectItemCaseSensitive(root, "_g147");
        if(item != NULL) {
            model._g147 = item->valueint;
        }
        // Receive _g14_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g14_e2");
        if(item != NULL) {
            model._g14_e2 = item->valueint;
        }
        // Receive _g15
        item = cJSON_GetObjectItemCaseSensitive(root, "_g15");
        if(item != NULL) {
            model._g15 = item->valueint;
        }
        // Receive _g151
        item = cJSON_GetObjectItemCaseSensitive(root, "_g151");
        if(item != NULL) {
            model._g151 = item->valueint;
        }
        // Receive _g152
        item = cJSON_GetObjectItemCaseSensitive(root, "_g152");
        if(item != NULL) {
            model._g152 = item->valueint;
        }
        // Receive _g153
        item = cJSON_GetObjectItemCaseSensitive(root, "_g153");
        if(item != NULL) {
            model._g153 = item->valueint;
        }
        // Receive _g153_e3
        item = cJSON_GetObjectItemCaseSensitive(root, "_g153_e3");
        if(item != NULL) {
            model._g153_e3 = item->valueint;
        }
        // Receive _g154
        item = cJSON_GetObjectItemCaseSensitive(root, "_g154");
        if(item != NULL) {
            model._g154 = item->valueint;
        }
        // Receive _g155
        item = cJSON_GetObjectItemCaseSensitive(root, "_g155");
        if(item != NULL) {
            model._g155 = item->valueint;
        }
        // Receive _g158
        item = cJSON_GetObjectItemCaseSensitive(root, "_g158");
        if(item != NULL) {
            model._g158 = item->valueint;
        }
        // Receive _g17
        item = cJSON_GetObjectItemCaseSensitive(root, "_g17");
        if(item != NULL) {
            model._g17 = item->valueint;
        }
        // Receive _g18
        item = cJSON_GetObjectItemCaseSensitive(root, "_g18");
        if(item != NULL) {
            model._g18 = item->valueint;
        }
        // Receive _g21
        item = cJSON_GetObjectItemCaseSensitive(root, "_g21");
        if(item != NULL) {
            model._g21 = item->valueint;
        }
        // Receive _g22
        item = cJSON_GetObjectItemCaseSensitive(root, "_g22");
        if(item != NULL) {
            model._g22 = item->valueint;
        }
        // Receive _g23
        item = cJSON_GetObjectItemCaseSensitive(root, "_g23");
        if(item != NULL) {
            model._g23 = item->valueint;
        }
        // Receive _g23_e3
        item = cJSON_GetObjectItemCaseSensitive(root, "_g23_e3");
        if(item != NULL) {
            model._g23_e3 = item->valueint;
        }
        // Receive _g24
        item = cJSON_GetObjectItemCaseSensitive(root, "_g24");
        if(item != NULL) {
            model._g24 = item->valueint;
        }
        // Receive _g25
        item = cJSON_GetObjectItemCaseSensitive(root, "_g25");
        if(item != NULL) {
            model._g25 = item->valueint;
        }
        // Receive _g26
        item = cJSON_GetObjectItemCaseSensitive(root, "_g26");
        if(item != NULL) {
            model._g26 = item->valueint;
        }
        // Receive _g27
        item = cJSON_GetObjectItemCaseSensitive(root, "_g27");
        if(item != NULL) {
            model._g27 = item->valueint;
        }
        // Receive _g28
        item = cJSON_GetObjectItemCaseSensitive(root, "_g28");
        if(item != NULL) {
            model._g28 = item->valueint;
        }
        // Receive _g3
        item = cJSON_GetObjectItemCaseSensitive(root, "_g3");
        if(item != NULL) {
            model._g3 = item->valueint;
        }
        // Receive _g31
        item = cJSON_GetObjectItemCaseSensitive(root, "_g31");
        if(item != NULL) {
            model._g31 = item->valueint;
        }
        // Receive _g32
        item = cJSON_GetObjectItemCaseSensitive(root, "_g32");
        if(item != NULL) {
            model._g32 = item->valueint;
        }
        // Receive _g32_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g32_e1");
        if(item != NULL) {
            model._g32_e1 = item->valueint;
        }
        // Receive _g35
        item = cJSON_GetObjectItemCaseSensitive(root, "_g35");
        if(item != NULL) {
            model._g35 = item->valueint;
        }
        // Receive _g36
        item = cJSON_GetObjectItemCaseSensitive(root, "_g36");
        if(item != NULL) {
            model._g36 = item->valueint;
        }
        // Receive _g36_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g36_e2");
        if(item != NULL) {
            model._g36_e2 = item->valueint;
        }
        // Receive _g37
        item = cJSON_GetObjectItemCaseSensitive(root, "_g37");
        if(item != NULL) {
            model._g37 = item->valueint;
        }
        // Receive _g40
        item = cJSON_GetObjectItemCaseSensitive(root, "_g40");
        if(item != NULL) {
            model._g40 = item->valueint;
        }
        // Receive _g43
        item = cJSON_GetObjectItemCaseSensitive(root, "_g43");
        if(item != NULL) {
            model._g43 = item->valueint;
        }
        // Receive _g44
        item = cJSON_GetObjectItemCaseSensitive(root, "_g44");
        if(item != NULL) {
            model._g44 = item->valueint;
        }
        // Receive _g44_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g44_e1");
        if(item != NULL) {
            model._g44_e1 = item->valueint;
        }
        // Receive _g47
        item = cJSON_GetObjectItemCaseSensitive(root, "_g47");
        if(item != NULL) {
            model._g47 = item->valueint;
        }
        // Receive _g48
        item = cJSON_GetObjectItemCaseSensitive(root, "_g48");
        if(item != NULL) {
            model._g48 = item->valueint;
        }
        // Receive _g48_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g48_e2");
        if(item != NULL) {
            model._g48_e2 = item->valueint;
        }
        // Receive _g49
        item = cJSON_GetObjectItemCaseSensitive(root, "_g49");
        if(item != NULL) {
            model._g49 = item->valueint;
        }
        // Receive _g50
        item = cJSON_GetObjectItemCaseSensitive(root, "_g50");
        if(item != NULL) {
            model._g50 = item->valueint;
        }
        // Receive _g53
        item = cJSON_GetObjectItemCaseSensitive(root, "_g53");
        if(item != NULL) {
            model._g53 = item->valueint;
        }
        // Receive _g54
        item = cJSON_GetObjectItemCaseSensitive(root, "_g54");
        if(item != NULL) {
            model._g54 = item->valueint;
        }
        // Receive _g54_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g54_e1");
        if(item != NULL) {
            model._g54_e1 = item->valueint;
        }
        // Receive _g56
        item = cJSON_GetObjectItemCaseSensitive(root, "_g56");
        if(item != NULL) {
            model._g56 = item->valueint;
        }
        // Receive _g58
        item = cJSON_GetObjectItemCaseSensitive(root, "_g58");
        if(item != NULL) {
            model._g58 = item->valueint;
        }
        // Receive _g59
        item = cJSON_GetObjectItemCaseSensitive(root, "_g59");
        if(item != NULL) {
            model._g59 = item->valueint;
        }
        // Receive _g6
        item = cJSON_GetObjectItemCaseSensitive(root, "_g6");
        if(item != NULL) {
            model._g6 = item->valueint;
        }
        // Receive _g60
        item = cJSON_GetObjectItemCaseSensitive(root, "_g60");
        if(item != NULL) {
            model._g60 = item->valueint;
        }
        // Receive _g61
        item = cJSON_GetObjectItemCaseSensitive(root, "_g61");
        if(item != NULL) {
            model._g61 = item->valueint;
        }
        // Receive _g61_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g61_e2");
        if(item != NULL) {
            model._g61_e2 = item->valueint;
        }
        // Receive _g62
        item = cJSON_GetObjectItemCaseSensitive(root, "_g62");
        if(item != NULL) {
            model._g62 = item->valueint;
        }
        // Receive _g64
        item = cJSON_GetObjectItemCaseSensitive(root, "_g64");
        if(item != NULL) {
            model._g64 = item->valueint;
        }
        // Receive _g65
        item = cJSON_GetObjectItemCaseSensitive(root, "_g65");
        if(item != NULL) {
            model._g65 = item->valueint;
        }
        // Receive _g67
        item = cJSON_GetObjectItemCaseSensitive(root, "_g67");
        if(item != NULL) {
            model._g67 = item->valueint;
        }
        // Receive _g69
        item = cJSON_GetObjectItemCaseSensitive(root, "_g69");
        if(item != NULL) {
            model._g69 = item->valueint;
        }
        // Receive _g7
        item = cJSON_GetObjectItemCaseSensitive(root, "_g7");
        if(item != NULL) {
            model._g7 = item->valueint;
        }
        // Receive _g70
        item = cJSON_GetObjectItemCaseSensitive(root, "_g70");
        if(item != NULL) {
            model._g70 = item->valueint;
        }
        // Receive _g71
        item = cJSON_GetObjectItemCaseSensitive(root, "_g71");
        if(item != NULL) {
            model._g71 = item->valueint;
        }
        // Receive _g72
        item = cJSON_GetObjectItemCaseSensitive(root, "_g72");
        if(item != NULL) {
            model._g72 = item->valueint;
        }
        // Receive _g72_e3
        item = cJSON_GetObjectItemCaseSensitive(root, "_g72_e3");
        if(item != NULL) {
            model._g72_e3 = item->valueint;
        }
        // Receive _g73
        item = cJSON_GetObjectItemCaseSensitive(root, "_g73");
        if(item != NULL) {
            model._g73 = item->valueint;
        }
        // Receive _g75
        item = cJSON_GetObjectItemCaseSensitive(root, "_g75");
        if(item != NULL) {
            model._g75 = item->valueint;
        }
        // Receive _g76
        item = cJSON_GetObjectItemCaseSensitive(root, "_g76");
        if(item != NULL) {
            model._g76 = item->valueint;
        }
        // Receive _g79
        item = cJSON_GetObjectItemCaseSensitive(root, "_g79");
        if(item != NULL) {
            model._g79 = item->valueint;
        }
        // Receive _g7_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g7_e1");
        if(item != NULL) {
            model._g7_e1 = item->valueint;
        }
        // Receive _g80
        item = cJSON_GetObjectItemCaseSensitive(root, "_g80");
        if(item != NULL) {
            model._g80 = item->valueint;
        }
        // Receive _g81
        item = cJSON_GetObjectItemCaseSensitive(root, "_g81");
        if(item != NULL) {
            model._g81 = item->valueint;
        }
        // Receive _g81_e4
        item = cJSON_GetObjectItemCaseSensitive(root, "_g81_e4");
        if(item != NULL) {
            model._g81_e4 = item->valueint;
        }
        // Receive _g82
        item = cJSON_GetObjectItemCaseSensitive(root, "_g82");
        if(item != NULL) {
            model._g82 = item->valueint;
        }
        // Receive _g83
        item = cJSON_GetObjectItemCaseSensitive(root, "_g83");
        if(item != NULL) {
            model._g83 = item->valueint;
        }
        // Receive _g84
        item = cJSON_GetObjectItemCaseSensitive(root, "_g84");
        if(item != NULL) {
            model._g84 = item->valueint;
        }
        // Receive _g85
        item = cJSON_GetObjectItemCaseSensitive(root, "_g85");
        if(item != NULL) {
            model._g85 = item->valueint;
        }
        // Receive _g86
        item = cJSON_GetObjectItemCaseSensitive(root, "_g86");
        if(item != NULL) {
            model._g86 = item->valueint;
        }
        // Receive _g87
        item = cJSON_GetObjectItemCaseSensitive(root, "_g87");
        if(item != NULL) {
            model._g87 = item->valueint;
        }
        // Receive _g88
        item = cJSON_GetObjectItemCaseSensitive(root, "_g88");
        if(item != NULL) {
            model._g88 = item->valueint;
        }
        // Receive _g89
        item = cJSON_GetObjectItemCaseSensitive(root, "_g89");
        if(item != NULL) {
            model._g89 = item->valueint;
        }
        // Receive _g9
        item = cJSON_GetObjectItemCaseSensitive(root, "_g9");
        if(item != NULL) {
            model._g9 = item->valueint;
        }
        // Receive _g90
        item = cJSON_GetObjectItemCaseSensitive(root, "_g90");
        if(item != NULL) {
            model._g90 = item->valueint;
        }
        // Receive _g93
        item = cJSON_GetObjectItemCaseSensitive(root, "_g93");
        if(item != NULL) {
            model._g93 = item->valueint;
        }
        // Receive _g94
        item = cJSON_GetObjectItemCaseSensitive(root, "_g94");
        if(item != NULL) {
            model._g94 = item->valueint;
        }
        // Receive _g94_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g94_e1");
        if(item != NULL) {
            model._g94_e1 = item->valueint;
        }
        // Receive _g96
        item = cJSON_GetObjectItemCaseSensitive(root, "_g96");
        if(item != NULL) {
            model._g96 = item->valueint;
        }
        // Receive _g98
        item = cJSON_GetObjectItemCaseSensitive(root, "_g98");
        if(item != NULL) {
            model._g98 = item->valueint;
        }
        // Receive _g99
        item = cJSON_GetObjectItemCaseSensitive(root, "_g99");
        if(item != NULL) {
            model._g99 = item->valueint;
        }
        // Receive _pg100
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg100");
        if(item != NULL) {
            model._pg100 = item->valueint;
        }
        // Receive _pg116
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg116");
        if(item != NULL) {
            model._pg116 = item->valueint;
        }
        // Receive _pg120
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg120");
        if(item != NULL) {
            model._pg120 = item->valueint;
        }
        // Receive _pg123
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg123");
        if(item != NULL) {
            model._pg123 = item->valueint;
        }
        // Receive _pg127
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg127");
        if(item != NULL) {
            model._pg127 = item->valueint;
        }
        // Receive _pg127_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg127_e1");
        if(item != NULL) {
            model._pg127_e1 = item->valueint;
        }
        // Receive _pg13
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg13");
        if(item != NULL) {
            model._pg13 = item->valueint;
        }
        // Receive _pg130
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg130");
        if(item != NULL) {
            model._pg130 = item->valueint;
        }
        // Receive _pg15
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg15");
        if(item != NULL) {
            model._pg15 = item->valueint;
        }
        // Receive _pg27
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg27");
        if(item != NULL) {
            model._pg27 = item->valueint;
        }
        // Receive _pg32
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg32");
        if(item != NULL) {
            model._pg32 = item->valueint;
        }
        // Receive _pg36
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg36");
        if(item != NULL) {
            model._pg36 = item->valueint;
        }
        // Receive _pg44
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg44");
        if(item != NULL) {
            model._pg44 = item->valueint;
        }
        // Receive _pg47
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg47");
        if(item != NULL) {
            model._pg47 = item->valueint;
        }
        // Receive _pg48_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg48_e2");
        if(item != NULL) {
            model._pg48_e2 = item->valueint;
        }
        // Receive _pg50
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg50");
        if(item != NULL) {
            model._pg50 = item->valueint;
        }
        // Receive _pg53
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg53");
        if(item != NULL) {
            model._pg53 = item->valueint;
        }
        // Receive _pg56
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg56");
        if(item != NULL) {
            model._pg56 = item->valueint;
        }
        // Receive _pg6
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg6");
        if(item != NULL) {
            model._pg6 = item->valueint;
        }
        // Receive _pg61
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg61");
        if(item != NULL) {
            model._pg61 = item->valueint;
        }
        // Receive _pg67
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg67");
        if(item != NULL) {
            model._pg67 = item->valueint;
        }
        // Receive _pg73
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg73");
        if(item != NULL) {
            model._pg73 = item->valueint;
        }
        // Receive _pg86
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg86");
        if(item != NULL) {
            model._pg86 = item->valueint;
        }
        // Receive _pg93
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg93");
        if(item != NULL) {
            model._pg93 = item->valueint;
        }
        // Receive _taken_transitions
        item = cJSON_GetObjectItemCaseSensitive(root, "_taken_transitions");
        if(item != NULL) {
            for (int i0 = 0; i0 < cJSON_GetArraySize(item); i0++) {
                cJSON *item0 = cJSON_GetArrayItem(item, i0);
                model._taken_transitions[i0] = item0->valueint;
            }
        }
    }
  
    cJSON_Delete(root);
    free(buffer);
}

void sendVariables(int send_interface) {
    cJSON* root = cJSON_CreateObject();
    cJSON *array;
    
    // Send deltaT
    cJSON_AddItemToObject(root, "deltaT", cJSON_CreateNumber(model.deltaT));
    // Send pedestrian
    cJSON_AddItemToObject(root, "pedestrian", cJSON_CreateBool(model.pedestrian));
    // Send _TrafficLight_local__region0_red_sigR
    cJSON_AddItemToObject(root, "_TrafficLight_local__region0_red_sigR", cJSON_CreateBool(model._TrafficLight_local__region0_red_sigR));
    // Send _TrafficLight_local__region1_green_sigG
    cJSON_AddItemToObject(root, "_TrafficLight_local__region1_green_sigG", cJSON_CreateBool(model._TrafficLight_local__region1_green_sigG));
    // Send _TrafficLight_local__region2_yellow_sigY
    cJSON_AddItemToObject(root, "_TrafficLight_local__region2_yellow_sigY", cJSON_CreateBool(model._TrafficLight_local__region2_yellow_sigY));
    // Send sleepT
    cJSON_AddItemToObject(root, "sleepT", cJSON_CreateNumber(model.sleepT));
    // Send #ticktime
    cJSON_AddItemToObject(root, "#ticktime", cJSON_CreateNumber(_ticktime));
    // Send _GO
    cJSON_AddItemToObject(root, "_GO", cJSON_CreateBool(model._GO));
    // Send _TERM
    cJSON_AddItemToObject(root, "_TERM", cJSON_CreateBool(model._TERM));
    // Send _TrafficLight_local_G
    cJSON_AddItemToObject(root, "_TrafficLight_local_G", cJSON_CreateBool(model._TrafficLight_local_G));
    // Send _TrafficLight_local_R
    cJSON_AddItemToObject(root, "_TrafficLight_local_R", cJSON_CreateBool(model._TrafficLight_local_R));
    // Send _TrafficLight_local_Y
    cJSON_AddItemToObject(root, "_TrafficLight_local_Y", cJSON_CreateBool(model._TrafficLight_local_Y));
    // Send _TrafficLight_local__Atrig
    cJSON_AddItemToObject(root, "_TrafficLight_local__Atrig", cJSON_CreateBool(model._TrafficLight_local__Atrig));
    // Send _TrafficLight_local__Atrig1
    cJSON_AddItemToObject(root, "_TrafficLight_local__Atrig1", cJSON_CreateBool(model._TrafficLight_local__Atrig1));
    // Send _TrafficLight_local__Atrig10
    cJSON_AddItemToObject(root, "_TrafficLight_local__Atrig10", cJSON_CreateBool(model._TrafficLight_local__Atrig10));
    // Send _TrafficLight_local__Atrig11
    cJSON_AddItemToObject(root, "_TrafficLight_local__Atrig11", cJSON_CreateBool(model._TrafficLight_local__Atrig11));
    // Send _TrafficLight_local__Atrig12
    cJSON_AddItemToObject(root, "_TrafficLight_local__Atrig12", cJSON_CreateBool(model._TrafficLight_local__Atrig12));
    // Send _TrafficLight_local__Atrig2
    cJSON_AddItemToObject(root, "_TrafficLight_local__Atrig2", cJSON_CreateBool(model._TrafficLight_local__Atrig2));
    // Send _TrafficLight_local__Atrig3
    cJSON_AddItemToObject(root, "_TrafficLight_local__Atrig3", cJSON_CreateBool(model._TrafficLight_local__Atrig3));
    // Send _TrafficLight_local__Atrig4
    cJSON_AddItemToObject(root, "_TrafficLight_local__Atrig4", cJSON_CreateBool(model._TrafficLight_local__Atrig4));
    // Send _TrafficLight_local__Atrig5
    cJSON_AddItemToObject(root, "_TrafficLight_local__Atrig5", cJSON_CreateBool(model._TrafficLight_local__Atrig5));
    // Send _TrafficLight_local__Atrig6
    cJSON_AddItemToObject(root, "_TrafficLight_local__Atrig6", cJSON_CreateBool(model._TrafficLight_local__Atrig6));
    // Send _TrafficLight_local__Atrig7
    cJSON_AddItemToObject(root, "_TrafficLight_local__Atrig7", cJSON_CreateBool(model._TrafficLight_local__Atrig7));
    // Send _TrafficLight_local__Atrig8
    cJSON_AddItemToObject(root, "_TrafficLight_local__Atrig8", cJSON_CreateBool(model._TrafficLight_local__Atrig8));
    // Send _TrafficLight_local__Atrig9
    cJSON_AddItemToObject(root, "_TrafficLight_local__Atrig9", cJSON_CreateBool(model._TrafficLight_local__Atrig9));
    // Send _TrafficLight_local__region0_red_x
    cJSON_AddItemToObject(root, "_TrafficLight_local__region0_red_x", cJSON_CreateNumber(model._TrafficLight_local__region0_red_x));
    // Send _TrafficLight_local__region1_green_x
    cJSON_AddItemToObject(root, "_TrafficLight_local__region1_green_x", cJSON_CreateNumber(model._TrafficLight_local__region1_green_x));
    // Send _TrafficLight_local__region2_yellow_x
    cJSON_AddItemToObject(root, "_TrafficLight_local__region2_yellow_x", cJSON_CreateNumber(model._TrafficLight_local__region2_yellow_x));
    // Send _cg100
    cJSON_AddItemToObject(root, "_cg100", cJSON_CreateBool(model._cg100));
    // Send _cg102
    cJSON_AddItemToObject(root, "_cg102", cJSON_CreateBool(model._cg102));
    // Send _cg105
    cJSON_AddItemToObject(root, "_cg105", cJSON_CreateBool(model._cg105));
    // Send _cg108
    cJSON_AddItemToObject(root, "_cg108", cJSON_CreateBool(model._cg108));
    // Send _cg111
    cJSON_AddItemToObject(root, "_cg111", cJSON_CreateBool(model._cg111));
    // Send _cg113
    cJSON_AddItemToObject(root, "_cg113", cJSON_CreateBool(model._cg113));
    // Send _cg116
    cJSON_AddItemToObject(root, "_cg116", cJSON_CreateBool(model._cg116));
    // Send _cg118
    cJSON_AddItemToObject(root, "_cg118", cJSON_CreateBool(model._cg118));
    // Send _cg12
    cJSON_AddItemToObject(root, "_cg12", cJSON_CreateBool(model._cg12));
    // Send _cg124
    cJSON_AddItemToObject(root, "_cg124", cJSON_CreateBool(model._cg124));
    // Send _cg126
    cJSON_AddItemToObject(root, "_cg126", cJSON_CreateBool(model._cg126));
    // Send _cg13
    cJSON_AddItemToObject(root, "_cg13", cJSON_CreateBool(model._cg13));
    // Send _cg130
    cJSON_AddItemToObject(root, "_cg130", cJSON_CreateBool(model._cg130));
    // Send _cg134
    cJSON_AddItemToObject(root, "_cg134", cJSON_CreateBool(model._cg134));
    // Send _cg136
    cJSON_AddItemToObject(root, "_cg136", cJSON_CreateBool(model._cg136));
    // Send _cg138
    cJSON_AddItemToObject(root, "_cg138", cJSON_CreateBool(model._cg138));
    // Send _cg139
    cJSON_AddItemToObject(root, "_cg139", cJSON_CreateBool(model._cg139));
    // Send _cg142
    cJSON_AddItemToObject(root, "_cg142", cJSON_CreateBool(model._cg142));
    // Send _cg143
    cJSON_AddItemToObject(root, "_cg143", cJSON_CreateBool(model._cg143));
    // Send _cg145
    cJSON_AddItemToObject(root, "_cg145", cJSON_CreateBool(model._cg145));
    // Send _cg148
    cJSON_AddItemToObject(root, "_cg148", cJSON_CreateBool(model._cg148));
    // Send _cg15
    cJSON_AddItemToObject(root, "_cg15", cJSON_CreateBool(model._cg15));
    // Send _cg151
    cJSON_AddItemToObject(root, "_cg151", cJSON_CreateBool(model._cg151));
    // Send _cg154
    cJSON_AddItemToObject(root, "_cg154", cJSON_CreateBool(model._cg154));
    // Send _cg156
    cJSON_AddItemToObject(root, "_cg156", cJSON_CreateBool(model._cg156));
    // Send _cg18
    cJSON_AddItemToObject(root, "_cg18", cJSON_CreateBool(model._cg18));
    // Send _cg21
    cJSON_AddItemToObject(root, "_cg21", cJSON_CreateBool(model._cg21));
    // Send _cg24
    cJSON_AddItemToObject(root, "_cg24", cJSON_CreateBool(model._cg24));
    // Send _cg26
    cJSON_AddItemToObject(root, "_cg26", cJSON_CreateBool(model._cg26));
    // Send _cg29
    cJSON_AddItemToObject(root, "_cg29", cJSON_CreateBool(model._cg29));
    // Send _cg31
    cJSON_AddItemToObject(root, "_cg31", cJSON_CreateBool(model._cg31));
    // Send _cg35
    cJSON_AddItemToObject(root, "_cg35", cJSON_CreateBool(model._cg35));
    // Send _cg4
    cJSON_AddItemToObject(root, "_cg4", cJSON_CreateBool(model._cg4));
    // Send _cg41
    cJSON_AddItemToObject(root, "_cg41", cJSON_CreateBool(model._cg41));
    // Send _cg43
    cJSON_AddItemToObject(root, "_cg43", cJSON_CreateBool(model._cg43));
    // Send _cg47
    cJSON_AddItemToObject(root, "_cg47", cJSON_CreateBool(model._cg47));
    // Send _cg51
    cJSON_AddItemToObject(root, "_cg51", cJSON_CreateBool(model._cg51));
    // Send _cg53
    cJSON_AddItemToObject(root, "_cg53", cJSON_CreateBool(model._cg53));
    // Send _cg55
    cJSON_AddItemToObject(root, "_cg55", cJSON_CreateBool(model._cg55));
    // Send _cg56
    cJSON_AddItemToObject(root, "_cg56", cJSON_CreateBool(model._cg56));
    // Send _cg59
    cJSON_AddItemToObject(root, "_cg59", cJSON_CreateBool(model._cg59));
    // Send _cg6
    cJSON_AddItemToObject(root, "_cg6", cJSON_CreateBool(model._cg6));
    // Send _cg60
    cJSON_AddItemToObject(root, "_cg60", cJSON_CreateBool(model._cg60));
    // Send _cg62
    cJSON_AddItemToObject(root, "_cg62", cJSON_CreateBool(model._cg62));
    // Send _cg65
    cJSON_AddItemToObject(root, "_cg65", cJSON_CreateBool(model._cg65));
    // Send _cg66
    cJSON_AddItemToObject(root, "_cg66", cJSON_CreateBool(model._cg66));
    // Send _cg67
    cJSON_AddItemToObject(root, "_cg67", cJSON_CreateBool(model._cg67));
    // Send _cg70
    cJSON_AddItemToObject(root, "_cg70", cJSON_CreateBool(model._cg70));
    // Send _cg71
    cJSON_AddItemToObject(root, "_cg71", cJSON_CreateBool(model._cg71));
    // Send _cg73
    cJSON_AddItemToObject(root, "_cg73", cJSON_CreateBool(model._cg73));
    // Send _cg76
    cJSON_AddItemToObject(root, "_cg76", cJSON_CreateBool(model._cg76));
    // Send _cg79
    cJSON_AddItemToObject(root, "_cg79", cJSON_CreateBool(model._cg79));
    // Send _cg8
    cJSON_AddItemToObject(root, "_cg8", cJSON_CreateBool(model._cg8));
    // Send _cg82
    cJSON_AddItemToObject(root, "_cg82", cJSON_CreateBool(model._cg82));
    // Send _cg84
    cJSON_AddItemToObject(root, "_cg84", cJSON_CreateBool(model._cg84));
    // Send _cg86
    cJSON_AddItemToObject(root, "_cg86", cJSON_CreateBool(model._cg86));
    // Send _cg88
    cJSON_AddItemToObject(root, "_cg88", cJSON_CreateBool(model._cg88));
    // Send _cg9
    cJSON_AddItemToObject(root, "_cg9", cJSON_CreateBool(model._cg9));
    // Send _cg91
    cJSON_AddItemToObject(root, "_cg91", cJSON_CreateBool(model._cg91));
    // Send _cg93
    cJSON_AddItemToObject(root, "_cg93", cJSON_CreateBool(model._cg93));
    // Send _cg95
    cJSON_AddItemToObject(root, "_cg95", cJSON_CreateBool(model._cg95));
    // Send _cg96
    cJSON_AddItemToObject(root, "_cg96", cJSON_CreateBool(model._cg96));
    // Send _cg99
    cJSON_AddItemToObject(root, "_cg99", cJSON_CreateBool(model._cg99));
    // Send _g100
    cJSON_AddItemToObject(root, "_g100", cJSON_CreateBool(model._g100));
    // Send _g101
    cJSON_AddItemToObject(root, "_g101", cJSON_CreateBool(model._g101));
    // Send _g101_e2
    cJSON_AddItemToObject(root, "_g101_e2", cJSON_CreateBool(model._g101_e2));
    // Send _g102
    cJSON_AddItemToObject(root, "_g102", cJSON_CreateBool(model._g102));
    // Send _g104
    cJSON_AddItemToObject(root, "_g104", cJSON_CreateBool(model._g104));
    // Send _g105
    cJSON_AddItemToObject(root, "_g105", cJSON_CreateBool(model._g105));
    // Send _g108
    cJSON_AddItemToObject(root, "_g108", cJSON_CreateBool(model._g108));
    // Send _g109
    cJSON_AddItemToObject(root, "_g109", cJSON_CreateBool(model._g109));
    // Send _g11
    cJSON_AddItemToObject(root, "_g11", cJSON_CreateBool(model._g11));
    // Send _g110
    cJSON_AddItemToObject(root, "_g110", cJSON_CreateBool(model._g110));
    // Send _g110_e3
    cJSON_AddItemToObject(root, "_g110_e3", cJSON_CreateBool(model._g110_e3));
    // Send _g111
    cJSON_AddItemToObject(root, "_g111", cJSON_CreateBool(model._g111));
    // Send _g112
    cJSON_AddItemToObject(root, "_g112", cJSON_CreateBool(model._g112));
    // Send _g113
    cJSON_AddItemToObject(root, "_g113", cJSON_CreateBool(model._g113));
    // Send _g114
    cJSON_AddItemToObject(root, "_g114", cJSON_CreateBool(model._g114));
    // Send _g115
    cJSON_AddItemToObject(root, "_g115", cJSON_CreateBool(model._g115));
    // Send _g116
    cJSON_AddItemToObject(root, "_g116", cJSON_CreateBool(model._g116));
    // Send _g117
    cJSON_AddItemToObject(root, "_g117", cJSON_CreateBool(model._g117));
    // Send _g118
    cJSON_AddItemToObject(root, "_g118", cJSON_CreateBool(model._g118));
    // Send _g119
    cJSON_AddItemToObject(root, "_g119", cJSON_CreateBool(model._g119));
    // Send _g12
    cJSON_AddItemToObject(root, "_g12", cJSON_CreateBool(model._g12));
    // Send _g120
    cJSON_AddItemToObject(root, "_g120", cJSON_CreateBool(model._g120));
    // Send _g123
    cJSON_AddItemToObject(root, "_g123", cJSON_CreateBool(model._g123));
    // Send _g126
    cJSON_AddItemToObject(root, "_g126", cJSON_CreateBool(model._g126));
    // Send _g127
    cJSON_AddItemToObject(root, "_g127", cJSON_CreateBool(model._g127));
    // Send _g127_e1
    cJSON_AddItemToObject(root, "_g127_e1", cJSON_CreateBool(model._g127_e1));
    // Send _g13
    cJSON_AddItemToObject(root, "_g13", cJSON_CreateBool(model._g13));
    // Send _g130
    cJSON_AddItemToObject(root, "_g130", cJSON_CreateBool(model._g130));
    // Send _g131_e2
    cJSON_AddItemToObject(root, "_g131_e2", cJSON_CreateBool(model._g131_e2));
    // Send _g137
    cJSON_AddItemToObject(root, "_g137", cJSON_CreateBool(model._g137));
    // Send _g137_e1
    cJSON_AddItemToObject(root, "_g137_e1", cJSON_CreateBool(model._g137_e1));
    // Send _g14
    cJSON_AddItemToObject(root, "_g14", cJSON_CreateBool(model._g14));
    // Send _g141
    cJSON_AddItemToObject(root, "_g141", cJSON_CreateBool(model._g141));
    // Send _g142
    cJSON_AddItemToObject(root, "_g142", cJSON_CreateBool(model._g142));
    // Send _g144
    cJSON_AddItemToObject(root, "_g144", cJSON_CreateBool(model._g144));
    // Send _g144_e2
    cJSON_AddItemToObject(root, "_g144_e2", cJSON_CreateBool(model._g144_e2));
    // Send _g147
    cJSON_AddItemToObject(root, "_g147", cJSON_CreateBool(model._g147));
    // Send _g14_e2
    cJSON_AddItemToObject(root, "_g14_e2", cJSON_CreateBool(model._g14_e2));
    // Send _g15
    cJSON_AddItemToObject(root, "_g15", cJSON_CreateBool(model._g15));
    // Send _g151
    cJSON_AddItemToObject(root, "_g151", cJSON_CreateBool(model._g151));
    // Send _g152
    cJSON_AddItemToObject(root, "_g152", cJSON_CreateBool(model._g152));
    // Send _g153
    cJSON_AddItemToObject(root, "_g153", cJSON_CreateBool(model._g153));
    // Send _g153_e3
    cJSON_AddItemToObject(root, "_g153_e3", cJSON_CreateBool(model._g153_e3));
    // Send _g154
    cJSON_AddItemToObject(root, "_g154", cJSON_CreateBool(model._g154));
    // Send _g155
    cJSON_AddItemToObject(root, "_g155", cJSON_CreateBool(model._g155));
    // Send _g158
    cJSON_AddItemToObject(root, "_g158", cJSON_CreateBool(model._g158));
    // Send _g17
    cJSON_AddItemToObject(root, "_g17", cJSON_CreateBool(model._g17));
    // Send _g18
    cJSON_AddItemToObject(root, "_g18", cJSON_CreateBool(model._g18));
    // Send _g21
    cJSON_AddItemToObject(root, "_g21", cJSON_CreateBool(model._g21));
    // Send _g22
    cJSON_AddItemToObject(root, "_g22", cJSON_CreateBool(model._g22));
    // Send _g23
    cJSON_AddItemToObject(root, "_g23", cJSON_CreateBool(model._g23));
    // Send _g23_e3
    cJSON_AddItemToObject(root, "_g23_e3", cJSON_CreateBool(model._g23_e3));
    // Send _g24
    cJSON_AddItemToObject(root, "_g24", cJSON_CreateBool(model._g24));
    // Send _g25
    cJSON_AddItemToObject(root, "_g25", cJSON_CreateBool(model._g25));
    // Send _g26
    cJSON_AddItemToObject(root, "_g26", cJSON_CreateBool(model._g26));
    // Send _g27
    cJSON_AddItemToObject(root, "_g27", cJSON_CreateBool(model._g27));
    // Send _g28
    cJSON_AddItemToObject(root, "_g28", cJSON_CreateBool(model._g28));
    // Send _g3
    cJSON_AddItemToObject(root, "_g3", cJSON_CreateBool(model._g3));
    // Send _g31
    cJSON_AddItemToObject(root, "_g31", cJSON_CreateBool(model._g31));
    // Send _g32
    cJSON_AddItemToObject(root, "_g32", cJSON_CreateBool(model._g32));
    // Send _g32_e1
    cJSON_AddItemToObject(root, "_g32_e1", cJSON_CreateBool(model._g32_e1));
    // Send _g35
    cJSON_AddItemToObject(root, "_g35", cJSON_CreateBool(model._g35));
    // Send _g36
    cJSON_AddItemToObject(root, "_g36", cJSON_CreateBool(model._g36));
    // Send _g36_e2
    cJSON_AddItemToObject(root, "_g36_e2", cJSON_CreateBool(model._g36_e2));
    // Send _g37
    cJSON_AddItemToObject(root, "_g37", cJSON_CreateBool(model._g37));
    // Send _g40
    cJSON_AddItemToObject(root, "_g40", cJSON_CreateBool(model._g40));
    // Send _g43
    cJSON_AddItemToObject(root, "_g43", cJSON_CreateBool(model._g43));
    // Send _g44
    cJSON_AddItemToObject(root, "_g44", cJSON_CreateBool(model._g44));
    // Send _g44_e1
    cJSON_AddItemToObject(root, "_g44_e1", cJSON_CreateBool(model._g44_e1));
    // Send _g47
    cJSON_AddItemToObject(root, "_g47", cJSON_CreateBool(model._g47));
    // Send _g48
    cJSON_AddItemToObject(root, "_g48", cJSON_CreateBool(model._g48));
    // Send _g48_e2
    cJSON_AddItemToObject(root, "_g48_e2", cJSON_CreateBool(model._g48_e2));
    // Send _g49
    cJSON_AddItemToObject(root, "_g49", cJSON_CreateBool(model._g49));
    // Send _g50
    cJSON_AddItemToObject(root, "_g50", cJSON_CreateBool(model._g50));
    // Send _g53
    cJSON_AddItemToObject(root, "_g53", cJSON_CreateBool(model._g53));
    // Send _g54
    cJSON_AddItemToObject(root, "_g54", cJSON_CreateBool(model._g54));
    // Send _g54_e1
    cJSON_AddItemToObject(root, "_g54_e1", cJSON_CreateBool(model._g54_e1));
    // Send _g56
    cJSON_AddItemToObject(root, "_g56", cJSON_CreateBool(model._g56));
    // Send _g58
    cJSON_AddItemToObject(root, "_g58", cJSON_CreateBool(model._g58));
    // Send _g59
    cJSON_AddItemToObject(root, "_g59", cJSON_CreateBool(model._g59));
    // Send _g6
    cJSON_AddItemToObject(root, "_g6", cJSON_CreateBool(model._g6));
    // Send _g60
    cJSON_AddItemToObject(root, "_g60", cJSON_CreateBool(model._g60));
    // Send _g61
    cJSON_AddItemToObject(root, "_g61", cJSON_CreateBool(model._g61));
    // Send _g61_e2
    cJSON_AddItemToObject(root, "_g61_e2", cJSON_CreateBool(model._g61_e2));
    // Send _g62
    cJSON_AddItemToObject(root, "_g62", cJSON_CreateBool(model._g62));
    // Send _g64
    cJSON_AddItemToObject(root, "_g64", cJSON_CreateBool(model._g64));
    // Send _g65
    cJSON_AddItemToObject(root, "_g65", cJSON_CreateBool(model._g65));
    // Send _g67
    cJSON_AddItemToObject(root, "_g67", cJSON_CreateBool(model._g67));
    // Send _g69
    cJSON_AddItemToObject(root, "_g69", cJSON_CreateBool(model._g69));
    // Send _g7
    cJSON_AddItemToObject(root, "_g7", cJSON_CreateBool(model._g7));
    // Send _g70
    cJSON_AddItemToObject(root, "_g70", cJSON_CreateBool(model._g70));
    // Send _g71
    cJSON_AddItemToObject(root, "_g71", cJSON_CreateBool(model._g71));
    // Send _g72
    cJSON_AddItemToObject(root, "_g72", cJSON_CreateBool(model._g72));
    // Send _g72_e3
    cJSON_AddItemToObject(root, "_g72_e3", cJSON_CreateBool(model._g72_e3));
    // Send _g73
    cJSON_AddItemToObject(root, "_g73", cJSON_CreateBool(model._g73));
    // Send _g75
    cJSON_AddItemToObject(root, "_g75", cJSON_CreateBool(model._g75));
    // Send _g76
    cJSON_AddItemToObject(root, "_g76", cJSON_CreateBool(model._g76));
    // Send _g79
    cJSON_AddItemToObject(root, "_g79", cJSON_CreateBool(model._g79));
    // Send _g7_e1
    cJSON_AddItemToObject(root, "_g7_e1", cJSON_CreateBool(model._g7_e1));
    // Send _g80
    cJSON_AddItemToObject(root, "_g80", cJSON_CreateBool(model._g80));
    // Send _g81
    cJSON_AddItemToObject(root, "_g81", cJSON_CreateBool(model._g81));
    // Send _g81_e4
    cJSON_AddItemToObject(root, "_g81_e4", cJSON_CreateBool(model._g81_e4));
    // Send _g82
    cJSON_AddItemToObject(root, "_g82", cJSON_CreateBool(model._g82));
    // Send _g83
    cJSON_AddItemToObject(root, "_g83", cJSON_CreateBool(model._g83));
    // Send _g84
    cJSON_AddItemToObject(root, "_g84", cJSON_CreateBool(model._g84));
    // Send _g85
    cJSON_AddItemToObject(root, "_g85", cJSON_CreateBool(model._g85));
    // Send _g86
    cJSON_AddItemToObject(root, "_g86", cJSON_CreateBool(model._g86));
    // Send _g87
    cJSON_AddItemToObject(root, "_g87", cJSON_CreateBool(model._g87));
    // Send _g88
    cJSON_AddItemToObject(root, "_g88", cJSON_CreateBool(model._g88));
    // Send _g89
    cJSON_AddItemToObject(root, "_g89", cJSON_CreateBool(model._g89));
    // Send _g9
    cJSON_AddItemToObject(root, "_g9", cJSON_CreateBool(model._g9));
    // Send _g90
    cJSON_AddItemToObject(root, "_g90", cJSON_CreateBool(model._g90));
    // Send _g93
    cJSON_AddItemToObject(root, "_g93", cJSON_CreateBool(model._g93));
    // Send _g94
    cJSON_AddItemToObject(root, "_g94", cJSON_CreateBool(model._g94));
    // Send _g94_e1
    cJSON_AddItemToObject(root, "_g94_e1", cJSON_CreateBool(model._g94_e1));
    // Send _g96
    cJSON_AddItemToObject(root, "_g96", cJSON_CreateBool(model._g96));
    // Send _g98
    cJSON_AddItemToObject(root, "_g98", cJSON_CreateBool(model._g98));
    // Send _g99
    cJSON_AddItemToObject(root, "_g99", cJSON_CreateBool(model._g99));
    // Send _pg100
    cJSON_AddItemToObject(root, "_pg100", cJSON_CreateBool(model._pg100));
    // Send _pg116
    cJSON_AddItemToObject(root, "_pg116", cJSON_CreateBool(model._pg116));
    // Send _pg120
    cJSON_AddItemToObject(root, "_pg120", cJSON_CreateBool(model._pg120));
    // Send _pg123
    cJSON_AddItemToObject(root, "_pg123", cJSON_CreateBool(model._pg123));
    // Send _pg127
    cJSON_AddItemToObject(root, "_pg127", cJSON_CreateBool(model._pg127));
    // Send _pg127_e1
    cJSON_AddItemToObject(root, "_pg127_e1", cJSON_CreateBool(model._pg127_e1));
    // Send _pg13
    cJSON_AddItemToObject(root, "_pg13", cJSON_CreateBool(model._pg13));
    // Send _pg130
    cJSON_AddItemToObject(root, "_pg130", cJSON_CreateBool(model._pg130));
    // Send _pg15
    cJSON_AddItemToObject(root, "_pg15", cJSON_CreateBool(model._pg15));
    // Send _pg27
    cJSON_AddItemToObject(root, "_pg27", cJSON_CreateBool(model._pg27));
    // Send _pg32
    cJSON_AddItemToObject(root, "_pg32", cJSON_CreateBool(model._pg32));
    // Send _pg36
    cJSON_AddItemToObject(root, "_pg36", cJSON_CreateBool(model._pg36));
    // Send _pg44
    cJSON_AddItemToObject(root, "_pg44", cJSON_CreateBool(model._pg44));
    // Send _pg47
    cJSON_AddItemToObject(root, "_pg47", cJSON_CreateBool(model._pg47));
    // Send _pg48_e2
    cJSON_AddItemToObject(root, "_pg48_e2", cJSON_CreateBool(model._pg48_e2));
    // Send _pg50
    cJSON_AddItemToObject(root, "_pg50", cJSON_CreateBool(model._pg50));
    // Send _pg53
    cJSON_AddItemToObject(root, "_pg53", cJSON_CreateBool(model._pg53));
    // Send _pg56
    cJSON_AddItemToObject(root, "_pg56", cJSON_CreateBool(model._pg56));
    // Send _pg6
    cJSON_AddItemToObject(root, "_pg6", cJSON_CreateBool(model._pg6));
    // Send _pg61
    cJSON_AddItemToObject(root, "_pg61", cJSON_CreateBool(model._pg61));
    // Send _pg67
    cJSON_AddItemToObject(root, "_pg67", cJSON_CreateBool(model._pg67));
    // Send _pg73
    cJSON_AddItemToObject(root, "_pg73", cJSON_CreateBool(model._pg73));
    // Send _pg86
    cJSON_AddItemToObject(root, "_pg86", cJSON_CreateBool(model._pg86));
    // Send _pg93
    cJSON_AddItemToObject(root, "_pg93", cJSON_CreateBool(model._pg93));
    // Send _taken_transitions
    array = cJSON_CreateArray();
    for (int i0 = 0; i0 < 13; i0++) {
        cJSON *item0 = cJSON_CreateNumber(model._taken_transitions[i0]);
        cJSON_AddItemToArray(array, item0);
    }
    cJSON_AddItemToObject(root, "_taken_transitions", array);
    
    if (send_interface) {
        cJSON *interface = cJSON_CreateObject();
        cJSON *info, *properties;
        
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("input"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("dynamic-ticks"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("float"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "deltaT", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("input"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("signal"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "pedestrian", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("output"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("signal"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local__region0_red_sigR", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("output"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("signal"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local__region1_green_sigG", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("output"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("signal"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local__region2_yellow_sigY", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("output"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("dynamic-ticks"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("float"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "sleepT", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("ticktime"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("float"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "#ticktime", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("goGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_GO", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("term"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TERM", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("signal"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local_G", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("signal"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local_R", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("signal"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local_Y", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local__Atrig", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local__Atrig1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local__Atrig10", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local__Atrig11", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local__Atrig12", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local__Atrig2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local__Atrig3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local__Atrig4", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local__Atrig5", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local__Atrig6", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local__Atrig7", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local__Atrig8", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local__Atrig9", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("float"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local__region0_red_x", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("float"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local__region1_green_x", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("float"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_TrafficLight_local__region2_yellow_x", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg100", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg102", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg105", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg108", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg111", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg113", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg116", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg118", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg12", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg124", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg126", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg13", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg130", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg134", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg136", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg138", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg139", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg142", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg143", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg145", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg148", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg15", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg151", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg154", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg156", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg18", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg21", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg24", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg26", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg29", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg31", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg35", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg4", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg41", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg43", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg47", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg51", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg53", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg55", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg56", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg59", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg6", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg60", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg62", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg65", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg66", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg67", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg70", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg71", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg73", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg76", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg79", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg8", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg82", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg84", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg86", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg88", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg9", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg91", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg93", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg95", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg96", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg99", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g100", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g101", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g101_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g102", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g104", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g105", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g108", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g109", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g11", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g110", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g110_e3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g111", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g112", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g113", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g114", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g115", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g116", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g117", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g118", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g119", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g12", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g120", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g123", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g126", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g127", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g127_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g13", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g130", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g131_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g137", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g137_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g14", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g141", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g142", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g144", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g144_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g147", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g14_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g15", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g151", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g152", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g153", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g153_e3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g154", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g155", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g158", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g17", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g18", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g21", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g22", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g23", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g23_e3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g24", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g25", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g26", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g27", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g28", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g31", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g32", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g32_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g35", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g36", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g36_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g37", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g40", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g43", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g44", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g44_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g47", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g48", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g48_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g49", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g50", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g53", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g54", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g54_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g56", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g58", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g59", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g6", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g60", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g61", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g61_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g62", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g64", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g65", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g67", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g69", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g7", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g70", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g71", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g72", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g72_e3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g73", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g75", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g76", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g79", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g7_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g80", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g81", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g81_e4", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g82", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g83", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g84", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g85", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g86", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g87", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g88", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g89", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g9", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g90", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g93", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g94", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g94_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g96", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g98", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g99", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg100", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg116", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg120", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg123", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg127", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg127_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg13", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg130", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg15", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg27", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg32", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg36", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg44", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg47", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg48_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg50", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg53", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg56", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg6", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg61", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg67", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg73", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg86", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg93", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("simulation"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("int"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_taken_transitions", info);
        
        cJSON_AddItemToObject(root, "#interface", interface);
    }

    // Get JSON object as string
    char* outString = cJSON_Print(root);
    cJSON_Minify(outString);
    // Flush to stdout
    printf("%s\n", outString);
    fflush(stdout);

    cJSON_Delete(root);
    free(outString);
}

int main(int argc, const char* argv[]) {
    

    // Initialize 
    reset(&model);
    
    sendVariables(1);

    
    // Tick loop
    while (1) {
        
    
        // Read inputs
        receiveVariables();

        
        resetticktime();

  
        // Reaction of model
        tick(&model);
        
        _ticktime = getticktime();

         
        // Send outputs
        sendVariables(0);

        
        
    }
    
}
