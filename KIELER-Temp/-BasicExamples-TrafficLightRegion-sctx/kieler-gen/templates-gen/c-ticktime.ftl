<#macro ticktime_imports position>            
#include "lib/ticktime.h"
</#macro>

<#macro ticktime_decl position>
double _ticktime;
</#macro>

<#macro ticktime_reset position>
resetticktime();
</#macro>

<#macro ticktime_store position>
_ticktime = getticktime();
</#macro>


