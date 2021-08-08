

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
        // Receive sigG
        item = cJSON_GetObjectItemCaseSensitive(root, "sigG");
        if(item != NULL) {
            model.sigG = item->valueint;
        }
        // Receive sigR
        item = cJSON_GetObjectItemCaseSensitive(root, "sigR");
        if(item != NULL) {
            model.sigR = item->valueint;
        }
        // Receive sigY
        item = cJSON_GetObjectItemCaseSensitive(root, "sigY");
        if(item != NULL) {
            model.sigY = item->valueint;
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
        // Receive _cg12
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg12");
        if(item != NULL) {
            model._cg12 = item->valueint;
        }
        // Receive _cg13
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg13");
        if(item != NULL) {
            model._cg13 = item->valueint;
        }
        // Receive _cg15
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg15");
        if(item != NULL) {
            model._cg15 = item->valueint;
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
        // Receive _cg30
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg30");
        if(item != NULL) {
            model._cg30 = item->valueint;
        }
        // Receive _cg33
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg33");
        if(item != NULL) {
            model._cg33 = item->valueint;
        }
        // Receive _cg35
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg35");
        if(item != NULL) {
            model._cg35 = item->valueint;
        }
        // Receive _cg37
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg37");
        if(item != NULL) {
            model._cg37 = item->valueint;
        }
        // Receive _cg39
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg39");
        if(item != NULL) {
            model._cg39 = item->valueint;
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
        // Receive _cg42
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg42");
        if(item != NULL) {
            model._cg42 = item->valueint;
        }
        // Receive _cg45
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg45");
        if(item != NULL) {
            model._cg45 = item->valueint;
        }
        // Receive _cg46
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg46");
        if(item != NULL) {
            model._cg46 = item->valueint;
        }
        // Receive _cg48
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg48");
        if(item != NULL) {
            model._cg48 = item->valueint;
        }
        // Receive _cg51
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg51");
        if(item != NULL) {
            model._cg51 = item->valueint;
        }
        // Receive _cg54
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg54");
        if(item != NULL) {
            model._cg54 = item->valueint;
        }
        // Receive _cg58
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg58");
        if(item != NULL) {
            model._cg58 = item->valueint;
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
        // Receive _cg63
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg63");
        if(item != NULL) {
            model._cg63 = item->valueint;
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
        // Receive _cg69
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg69");
        if(item != NULL) {
            model._cg69 = item->valueint;
        }
        // Receive _cg72
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg72");
        if(item != NULL) {
            model._cg72 = item->valueint;
        }
        // Receive _cg75
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg75");
        if(item != NULL) {
            model._cg75 = item->valueint;
        }
        // Receive _cg8
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg8");
        if(item != NULL) {
            model._cg8 = item->valueint;
        }
        // Receive _cg9
        item = cJSON_GetObjectItemCaseSensitive(root, "_cg9");
        if(item != NULL) {
            model._cg9 = item->valueint;
        }
        // Receive _g11
        item = cJSON_GetObjectItemCaseSensitive(root, "_g11");
        if(item != NULL) {
            model._g11 = item->valueint;
        }
        // Receive _g12
        item = cJSON_GetObjectItemCaseSensitive(root, "_g12");
        if(item != NULL) {
            model._g12 = item->valueint;
        }
        // Receive _g13
        item = cJSON_GetObjectItemCaseSensitive(root, "_g13");
        if(item != NULL) {
            model._g13 = item->valueint;
        }
        // Receive _g14
        item = cJSON_GetObjectItemCaseSensitive(root, "_g14");
        if(item != NULL) {
            model._g14 = item->valueint;
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
        // Receive _g22_e3
        item = cJSON_GetObjectItemCaseSensitive(root, "_g22_e3");
        if(item != NULL) {
            model._g22_e3 = item->valueint;
        }
        // Receive _g23
        item = cJSON_GetObjectItemCaseSensitive(root, "_g23");
        if(item != NULL) {
            model._g23 = item->valueint;
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
        // Receive _g27_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g27_e1");
        if(item != NULL) {
            model._g27_e1 = item->valueint;
        }
        // Receive _g3
        item = cJSON_GetObjectItemCaseSensitive(root, "_g3");
        if(item != NULL) {
            model._g3 = item->valueint;
        }
        // Receive _g30
        item = cJSON_GetObjectItemCaseSensitive(root, "_g30");
        if(item != NULL) {
            model._g30 = item->valueint;
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
        // Receive _g32_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g32_e2");
        if(item != NULL) {
            model._g32_e2 = item->valueint;
        }
        // Receive _g33
        item = cJSON_GetObjectItemCaseSensitive(root, "_g33");
        if(item != NULL) {
            model._g33 = item->valueint;
        }
        // Receive _g34
        item = cJSON_GetObjectItemCaseSensitive(root, "_g34");
        if(item != NULL) {
            model._g34 = item->valueint;
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
        // Receive _g39
        item = cJSON_GetObjectItemCaseSensitive(root, "_g39");
        if(item != NULL) {
            model._g39 = item->valueint;
        }
        // Receive _g40
        item = cJSON_GetObjectItemCaseSensitive(root, "_g40");
        if(item != NULL) {
            model._g40 = item->valueint;
        }
        // Receive _g40_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g40_e1");
        if(item != NULL) {
            model._g40_e1 = item->valueint;
        }
        // Receive _g42
        item = cJSON_GetObjectItemCaseSensitive(root, "_g42");
        if(item != NULL) {
            model._g42 = item->valueint;
        }
        // Receive _g44
        item = cJSON_GetObjectItemCaseSensitive(root, "_g44");
        if(item != NULL) {
            model._g44 = item->valueint;
        }
        // Receive _g45
        item = cJSON_GetObjectItemCaseSensitive(root, "_g45");
        if(item != NULL) {
            model._g45 = item->valueint;
        }
        // Receive _g46
        item = cJSON_GetObjectItemCaseSensitive(root, "_g46");
        if(item != NULL) {
            model._g46 = item->valueint;
        }
        // Receive _g47
        item = cJSON_GetObjectItemCaseSensitive(root, "_g47");
        if(item != NULL) {
            model._g47 = item->valueint;
        }
        // Receive _g47_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g47_e2");
        if(item != NULL) {
            model._g47_e2 = item->valueint;
        }
        // Receive _g48
        item = cJSON_GetObjectItemCaseSensitive(root, "_g48");
        if(item != NULL) {
            model._g48 = item->valueint;
        }
        // Receive _g50
        item = cJSON_GetObjectItemCaseSensitive(root, "_g50");
        if(item != NULL) {
            model._g50 = item->valueint;
        }
        // Receive _g51
        item = cJSON_GetObjectItemCaseSensitive(root, "_g51");
        if(item != NULL) {
            model._g51 = item->valueint;
        }
        // Receive _g54
        item = cJSON_GetObjectItemCaseSensitive(root, "_g54");
        if(item != NULL) {
            model._g54 = item->valueint;
        }
        // Receive _g55
        item = cJSON_GetObjectItemCaseSensitive(root, "_g55");
        if(item != NULL) {
            model._g55 = item->valueint;
        }
        // Receive _g55_e3
        item = cJSON_GetObjectItemCaseSensitive(root, "_g55_e3");
        if(item != NULL) {
            model._g55_e3 = item->valueint;
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
        // Receive _g61_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g61_e1");
        if(item != NULL) {
            model._g61_e1 = item->valueint;
        }
        // Receive _g65
        item = cJSON_GetObjectItemCaseSensitive(root, "_g65");
        if(item != NULL) {
            model._g65 = item->valueint;
        }
        // Receive _g66
        item = cJSON_GetObjectItemCaseSensitive(root, "_g66");
        if(item != NULL) {
            model._g66 = item->valueint;
        }
        // Receive _g68
        item = cJSON_GetObjectItemCaseSensitive(root, "_g68");
        if(item != NULL) {
            model._g68 = item->valueint;
        }
        // Receive _g68_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_g68_e2");
        if(item != NULL) {
            model._g68_e2 = item->valueint;
        }
        // Receive _g7
        item = cJSON_GetObjectItemCaseSensitive(root, "_g7");
        if(item != NULL) {
            model._g7 = item->valueint;
        }
        // Receive _g71
        item = cJSON_GetObjectItemCaseSensitive(root, "_g71");
        if(item != NULL) {
            model._g71 = item->valueint;
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
        // Receive _g76_e3
        item = cJSON_GetObjectItemCaseSensitive(root, "_g76_e3");
        if(item != NULL) {
            model._g76_e3 = item->valueint;
        }
        // Receive _g77
        item = cJSON_GetObjectItemCaseSensitive(root, "_g77");
        if(item != NULL) {
            model._g77 = item->valueint;
        }
        // Receive _g7_e1
        item = cJSON_GetObjectItemCaseSensitive(root, "_g7_e1");
        if(item != NULL) {
            model._g7_e1 = item->valueint;
        }
        // Receive _g9
        item = cJSON_GetObjectItemCaseSensitive(root, "_g9");
        if(item != NULL) {
            model._g9 = item->valueint;
        }
        // Receive _pg14
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg14");
        if(item != NULL) {
            model._pg14 = item->valueint;
        }
        // Receive _pg15
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg15");
        if(item != NULL) {
            model._pg15 = item->valueint;
        }
        // Receive _pg18
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg18");
        if(item != NULL) {
            model._pg18 = item->valueint;
        }
        // Receive _pg32_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg32_e2");
        if(item != NULL) {
            model._pg32_e2 = item->valueint;
        }
        // Receive _pg33
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg33");
        if(item != NULL) {
            model._pg33 = item->valueint;
        }
        // Receive _pg35
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg35");
        if(item != NULL) {
            model._pg35 = item->valueint;
        }
        // Receive _pg40
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg40");
        if(item != NULL) {
            model._pg40 = item->valueint;
        }
        // Receive _pg42
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg42");
        if(item != NULL) {
            model._pg42 = item->valueint;
        }
        // Receive _pg47
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg47");
        if(item != NULL) {
            model._pg47 = item->valueint;
        }
        // Receive _pg47_e2
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg47_e2");
        if(item != NULL) {
            model._pg47_e2 = item->valueint;
        }
        // Receive _pg48
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg48");
        if(item != NULL) {
            model._pg48 = item->valueint;
        }
        // Receive _pg51
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg51");
        if(item != NULL) {
            model._pg51 = item->valueint;
        }
        // Receive _pg61
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg61");
        if(item != NULL) {
            model._pg61 = item->valueint;
        }
        // Receive _pg9
        item = cJSON_GetObjectItemCaseSensitive(root, "_pg9");
        if(item != NULL) {
            model._pg9 = item->valueint;
        }
        // Receive _taken_transitions
        item = cJSON_GetObjectItemCaseSensitive(root, "_taken_transitions");
        if(item != NULL) {
            for (int i0 = 0; i0 < cJSON_GetArraySize(item); i0++) {
                cJSON *item0 = cJSON_GetArrayItem(item, i0);
                model._taken_transitions[i0] = item0->valueint;
            }
        }
        // Receive x
        item = cJSON_GetObjectItemCaseSensitive(root, "x");
        if(item != NULL) {
            model.x = item->valuedouble;
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
    // Send sigG
    cJSON_AddItemToObject(root, "sigG", cJSON_CreateBool(model.sigG));
    // Send sigR
    cJSON_AddItemToObject(root, "sigR", cJSON_CreateBool(model.sigR));
    // Send sigY
    cJSON_AddItemToObject(root, "sigY", cJSON_CreateBool(model.sigY));
    // Send sleepT
    cJSON_AddItemToObject(root, "sleepT", cJSON_CreateNumber(model.sleepT));
    // Send #ticktime
    cJSON_AddItemToObject(root, "#ticktime", cJSON_CreateNumber(_ticktime));
    // Send _GO
    cJSON_AddItemToObject(root, "_GO", cJSON_CreateBool(model._GO));
    // Send _TERM
    cJSON_AddItemToObject(root, "_TERM", cJSON_CreateBool(model._TERM));
    // Send _TrafficLight_local__Atrig
    cJSON_AddItemToObject(root, "_TrafficLight_local__Atrig", cJSON_CreateBool(model._TrafficLight_local__Atrig));
    // Send _TrafficLight_local__Atrig1
    cJSON_AddItemToObject(root, "_TrafficLight_local__Atrig1", cJSON_CreateBool(model._TrafficLight_local__Atrig1));
    // Send _TrafficLight_local__Atrig2
    cJSON_AddItemToObject(root, "_TrafficLight_local__Atrig2", cJSON_CreateBool(model._TrafficLight_local__Atrig2));
    // Send _TrafficLight_local__Atrig3
    cJSON_AddItemToObject(root, "_TrafficLight_local__Atrig3", cJSON_CreateBool(model._TrafficLight_local__Atrig3));
    // Send _TrafficLight_local__Atrig4
    cJSON_AddItemToObject(root, "_TrafficLight_local__Atrig4", cJSON_CreateBool(model._TrafficLight_local__Atrig4));
    // Send _cg12
    cJSON_AddItemToObject(root, "_cg12", cJSON_CreateBool(model._cg12));
    // Send _cg13
    cJSON_AddItemToObject(root, "_cg13", cJSON_CreateBool(model._cg13));
    // Send _cg15
    cJSON_AddItemToObject(root, "_cg15", cJSON_CreateBool(model._cg15));
    // Send _cg18
    cJSON_AddItemToObject(root, "_cg18", cJSON_CreateBool(model._cg18));
    // Send _cg21
    cJSON_AddItemToObject(root, "_cg21", cJSON_CreateBool(model._cg21));
    // Send _cg24
    cJSON_AddItemToObject(root, "_cg24", cJSON_CreateBool(model._cg24));
    // Send _cg26
    cJSON_AddItemToObject(root, "_cg26", cJSON_CreateBool(model._cg26));
    // Send _cg30
    cJSON_AddItemToObject(root, "_cg30", cJSON_CreateBool(model._cg30));
    // Send _cg33
    cJSON_AddItemToObject(root, "_cg33", cJSON_CreateBool(model._cg33));
    // Send _cg35
    cJSON_AddItemToObject(root, "_cg35", cJSON_CreateBool(model._cg35));
    // Send _cg37
    cJSON_AddItemToObject(root, "_cg37", cJSON_CreateBool(model._cg37));
    // Send _cg39
    cJSON_AddItemToObject(root, "_cg39", cJSON_CreateBool(model._cg39));
    // Send _cg4
    cJSON_AddItemToObject(root, "_cg4", cJSON_CreateBool(model._cg4));
    // Send _cg41
    cJSON_AddItemToObject(root, "_cg41", cJSON_CreateBool(model._cg41));
    // Send _cg42
    cJSON_AddItemToObject(root, "_cg42", cJSON_CreateBool(model._cg42));
    // Send _cg45
    cJSON_AddItemToObject(root, "_cg45", cJSON_CreateBool(model._cg45));
    // Send _cg46
    cJSON_AddItemToObject(root, "_cg46", cJSON_CreateBool(model._cg46));
    // Send _cg48
    cJSON_AddItemToObject(root, "_cg48", cJSON_CreateBool(model._cg48));
    // Send _cg51
    cJSON_AddItemToObject(root, "_cg51", cJSON_CreateBool(model._cg51));
    // Send _cg54
    cJSON_AddItemToObject(root, "_cg54", cJSON_CreateBool(model._cg54));
    // Send _cg58
    cJSON_AddItemToObject(root, "_cg58", cJSON_CreateBool(model._cg58));
    // Send _cg6
    cJSON_AddItemToObject(root, "_cg6", cJSON_CreateBool(model._cg6));
    // Send _cg60
    cJSON_AddItemToObject(root, "_cg60", cJSON_CreateBool(model._cg60));
    // Send _cg62
    cJSON_AddItemToObject(root, "_cg62", cJSON_CreateBool(model._cg62));
    // Send _cg63
    cJSON_AddItemToObject(root, "_cg63", cJSON_CreateBool(model._cg63));
    // Send _cg66
    cJSON_AddItemToObject(root, "_cg66", cJSON_CreateBool(model._cg66));
    // Send _cg67
    cJSON_AddItemToObject(root, "_cg67", cJSON_CreateBool(model._cg67));
    // Send _cg69
    cJSON_AddItemToObject(root, "_cg69", cJSON_CreateBool(model._cg69));
    // Send _cg72
    cJSON_AddItemToObject(root, "_cg72", cJSON_CreateBool(model._cg72));
    // Send _cg75
    cJSON_AddItemToObject(root, "_cg75", cJSON_CreateBool(model._cg75));
    // Send _cg8
    cJSON_AddItemToObject(root, "_cg8", cJSON_CreateBool(model._cg8));
    // Send _cg9
    cJSON_AddItemToObject(root, "_cg9", cJSON_CreateBool(model._cg9));
    // Send _g11
    cJSON_AddItemToObject(root, "_g11", cJSON_CreateBool(model._g11));
    // Send _g12
    cJSON_AddItemToObject(root, "_g12", cJSON_CreateBool(model._g12));
    // Send _g13
    cJSON_AddItemToObject(root, "_g13", cJSON_CreateBool(model._g13));
    // Send _g14
    cJSON_AddItemToObject(root, "_g14", cJSON_CreateBool(model._g14));
    // Send _g14_e2
    cJSON_AddItemToObject(root, "_g14_e2", cJSON_CreateBool(model._g14_e2));
    // Send _g15
    cJSON_AddItemToObject(root, "_g15", cJSON_CreateBool(model._g15));
    // Send _g17
    cJSON_AddItemToObject(root, "_g17", cJSON_CreateBool(model._g17));
    // Send _g18
    cJSON_AddItemToObject(root, "_g18", cJSON_CreateBool(model._g18));
    // Send _g21
    cJSON_AddItemToObject(root, "_g21", cJSON_CreateBool(model._g21));
    // Send _g22
    cJSON_AddItemToObject(root, "_g22", cJSON_CreateBool(model._g22));
    // Send _g22_e3
    cJSON_AddItemToObject(root, "_g22_e3", cJSON_CreateBool(model._g22_e3));
    // Send _g23
    cJSON_AddItemToObject(root, "_g23", cJSON_CreateBool(model._g23));
    // Send _g26
    cJSON_AddItemToObject(root, "_g26", cJSON_CreateBool(model._g26));
    // Send _g27
    cJSON_AddItemToObject(root, "_g27", cJSON_CreateBool(model._g27));
    // Send _g27_e1
    cJSON_AddItemToObject(root, "_g27_e1", cJSON_CreateBool(model._g27_e1));
    // Send _g3
    cJSON_AddItemToObject(root, "_g3", cJSON_CreateBool(model._g3));
    // Send _g30
    cJSON_AddItemToObject(root, "_g30", cJSON_CreateBool(model._g30));
    // Send _g31
    cJSON_AddItemToObject(root, "_g31", cJSON_CreateBool(model._g31));
    // Send _g32
    cJSON_AddItemToObject(root, "_g32", cJSON_CreateBool(model._g32));
    // Send _g32_e2
    cJSON_AddItemToObject(root, "_g32_e2", cJSON_CreateBool(model._g32_e2));
    // Send _g33
    cJSON_AddItemToObject(root, "_g33", cJSON_CreateBool(model._g33));
    // Send _g34
    cJSON_AddItemToObject(root, "_g34", cJSON_CreateBool(model._g34));
    // Send _g35
    cJSON_AddItemToObject(root, "_g35", cJSON_CreateBool(model._g35));
    // Send _g36
    cJSON_AddItemToObject(root, "_g36", cJSON_CreateBool(model._g36));
    // Send _g39
    cJSON_AddItemToObject(root, "_g39", cJSON_CreateBool(model._g39));
    // Send _g40
    cJSON_AddItemToObject(root, "_g40", cJSON_CreateBool(model._g40));
    // Send _g40_e1
    cJSON_AddItemToObject(root, "_g40_e1", cJSON_CreateBool(model._g40_e1));
    // Send _g42
    cJSON_AddItemToObject(root, "_g42", cJSON_CreateBool(model._g42));
    // Send _g44
    cJSON_AddItemToObject(root, "_g44", cJSON_CreateBool(model._g44));
    // Send _g45
    cJSON_AddItemToObject(root, "_g45", cJSON_CreateBool(model._g45));
    // Send _g46
    cJSON_AddItemToObject(root, "_g46", cJSON_CreateBool(model._g46));
    // Send _g47
    cJSON_AddItemToObject(root, "_g47", cJSON_CreateBool(model._g47));
    // Send _g47_e2
    cJSON_AddItemToObject(root, "_g47_e2", cJSON_CreateBool(model._g47_e2));
    // Send _g48
    cJSON_AddItemToObject(root, "_g48", cJSON_CreateBool(model._g48));
    // Send _g50
    cJSON_AddItemToObject(root, "_g50", cJSON_CreateBool(model._g50));
    // Send _g51
    cJSON_AddItemToObject(root, "_g51", cJSON_CreateBool(model._g51));
    // Send _g54
    cJSON_AddItemToObject(root, "_g54", cJSON_CreateBool(model._g54));
    // Send _g55
    cJSON_AddItemToObject(root, "_g55", cJSON_CreateBool(model._g55));
    // Send _g55_e3
    cJSON_AddItemToObject(root, "_g55_e3", cJSON_CreateBool(model._g55_e3));
    // Send _g6
    cJSON_AddItemToObject(root, "_g6", cJSON_CreateBool(model._g6));
    // Send _g60
    cJSON_AddItemToObject(root, "_g60", cJSON_CreateBool(model._g60));
    // Send _g61
    cJSON_AddItemToObject(root, "_g61", cJSON_CreateBool(model._g61));
    // Send _g61_e1
    cJSON_AddItemToObject(root, "_g61_e1", cJSON_CreateBool(model._g61_e1));
    // Send _g65
    cJSON_AddItemToObject(root, "_g65", cJSON_CreateBool(model._g65));
    // Send _g66
    cJSON_AddItemToObject(root, "_g66", cJSON_CreateBool(model._g66));
    // Send _g68
    cJSON_AddItemToObject(root, "_g68", cJSON_CreateBool(model._g68));
    // Send _g68_e2
    cJSON_AddItemToObject(root, "_g68_e2", cJSON_CreateBool(model._g68_e2));
    // Send _g7
    cJSON_AddItemToObject(root, "_g7", cJSON_CreateBool(model._g7));
    // Send _g71
    cJSON_AddItemToObject(root, "_g71", cJSON_CreateBool(model._g71));
    // Send _g75
    cJSON_AddItemToObject(root, "_g75", cJSON_CreateBool(model._g75));
    // Send _g76
    cJSON_AddItemToObject(root, "_g76", cJSON_CreateBool(model._g76));
    // Send _g76_e3
    cJSON_AddItemToObject(root, "_g76_e3", cJSON_CreateBool(model._g76_e3));
    // Send _g77
    cJSON_AddItemToObject(root, "_g77", cJSON_CreateBool(model._g77));
    // Send _g7_e1
    cJSON_AddItemToObject(root, "_g7_e1", cJSON_CreateBool(model._g7_e1));
    // Send _g9
    cJSON_AddItemToObject(root, "_g9", cJSON_CreateBool(model._g9));
    // Send _pg14
    cJSON_AddItemToObject(root, "_pg14", cJSON_CreateBool(model._pg14));
    // Send _pg15
    cJSON_AddItemToObject(root, "_pg15", cJSON_CreateBool(model._pg15));
    // Send _pg18
    cJSON_AddItemToObject(root, "_pg18", cJSON_CreateBool(model._pg18));
    // Send _pg32_e2
    cJSON_AddItemToObject(root, "_pg32_e2", cJSON_CreateBool(model._pg32_e2));
    // Send _pg33
    cJSON_AddItemToObject(root, "_pg33", cJSON_CreateBool(model._pg33));
    // Send _pg35
    cJSON_AddItemToObject(root, "_pg35", cJSON_CreateBool(model._pg35));
    // Send _pg40
    cJSON_AddItemToObject(root, "_pg40", cJSON_CreateBool(model._pg40));
    // Send _pg42
    cJSON_AddItemToObject(root, "_pg42", cJSON_CreateBool(model._pg42));
    // Send _pg47
    cJSON_AddItemToObject(root, "_pg47", cJSON_CreateBool(model._pg47));
    // Send _pg47_e2
    cJSON_AddItemToObject(root, "_pg47_e2", cJSON_CreateBool(model._pg47_e2));
    // Send _pg48
    cJSON_AddItemToObject(root, "_pg48", cJSON_CreateBool(model._pg48));
    // Send _pg51
    cJSON_AddItemToObject(root, "_pg51", cJSON_CreateBool(model._pg51));
    // Send _pg61
    cJSON_AddItemToObject(root, "_pg61", cJSON_CreateBool(model._pg61));
    // Send _pg9
    cJSON_AddItemToObject(root, "_pg9", cJSON_CreateBool(model._pg9));
    // Send _taken_transitions
    array = cJSON_CreateArray();
    for (int i0 = 0; i0 < 5; i0++) {
        cJSON *item0 = cJSON_CreateNumber(model._taken_transitions[i0]);
        cJSON_AddItemToArray(array, item0);
    }
    cJSON_AddItemToObject(root, "_taken_transitions", array);
    // Send x
    cJSON_AddItemToObject(root, "x", cJSON_CreateNumber(model.x));
    
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
        cJSON_AddItemToObject(interface, "sigG", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("output"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("signal"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "sigR", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("output"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("signal"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "sigY", info);
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
        cJSON_AddItemToObject(interface, "_cg13", info);
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
        cJSON_AddItemToObject(interface, "_cg30", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg33", info);
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
        cJSON_AddItemToObject(interface, "_cg37", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg39", info);
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
        cJSON_AddItemToObject(interface, "_cg42", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg45", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg46", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg48", info);
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
        cJSON_AddItemToObject(interface, "_cg54", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg58", info);
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
        cJSON_AddItemToObject(interface, "_cg63", info);
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
        cJSON_AddItemToObject(interface, "_cg69", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg72", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("conditionalGuard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_cg75", info);
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
        cJSON_AddItemToObject(interface, "_cg9", info);
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
        cJSON_AddItemToObject(interface, "_g12", info);
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
        cJSON_AddItemToObject(interface, "_g14", info);
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
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g22_e3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g23", info);
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
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g27_e1", info);
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
        cJSON_AddItemToObject(interface, "_g30", info);
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
        cJSON_AddItemToObject(interface, "_g32_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g33", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g34", info);
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
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g39", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g40", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g40_e1", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g42", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g44", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g45", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g46", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g47", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g47_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g48", info);
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
        cJSON_AddItemToObject(interface, "_g51", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g54", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g55", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g55_e3", info);
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
        cJSON_AddItemToObject(interface, "_g61_e1", info);
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
        cJSON_AddItemToObject(interface, "_g66", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g68", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g68_e2", info);
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
        cJSON_AddItemToObject(interface, "_g71", info);
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
        cJSON_AddItemToArray(properties, cJSON_CreateString("emptyGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g76_e3", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_g77", info);
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
        cJSON_AddItemToObject(interface, "_g9", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg14", info);
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
        cJSON_AddItemToObject(interface, "_pg18", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg32_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg33", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg35", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg40", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg42", info);
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
        cJSON_AddItemToObject(interface, "_pg47_e2", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg48", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("preGuard"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("guard"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("bool"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_pg51", info);
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
        cJSON_AddItemToObject(interface, "_pg9", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToArray(properties, cJSON_CreateString("simulation"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("int"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "_taken_transitions", info);
        info = cJSON_CreateObject();
        properties = cJSON_CreateArray();
        cJSON_AddItemToArray(properties, cJSON_CreateString("sccharts-generated"));
        cJSON_AddItemToObject(info, "type", cJSON_CreateString("float"));
        cJSON_AddItemToObject(info, "properties", properties);
        cJSON_AddItemToObject(interface, "x", info);
        
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
