/*-----------------------------------------------------------------------------
    Name: flow
    Generated By: This is an auto generated script. You can, however, make a copy of this script using advanced script manager and enhance it.
    Date of generation: 12/04/2023 06:31:11
    Flow details:
    Build details: 4.11.0 (build# 121)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"



void Flow_1()
{
    ns_start_transaction("pick_the_best_package");
    ns_web_url ("pick_the_best_package",
        "URL=https://www.directv.com/pick-the-best-package/",
        "METHOD=GET",
    );
    ns_end_transaction("pick_the_best_package", NS_AUTO_STATUS);


    ns_page_think_time(0);

}
