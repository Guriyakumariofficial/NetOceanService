/*-----------------------------------------------------------------------------
    Name: flow
    Created By: Himanshu
    Date of creation: 10/04/2023 12:42:22
    Flow details:
    Build details: 4.13.0 (build# 73)
    Modification History:
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include "ns_string.h"

void flow()
{
    ns_start_transaction("welcome");
    ns_web_url("welcome",
        "URL=https://192.3.3.233:8443/cgi-bin/welcome",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/banner_animated.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/sun_swede.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/login.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/images/banner_merctur.jpg", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/vep/images/velocigen.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://192.3.3.233:8443/favicon.ico", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("welcome", NS_AUTO_STATUS);
    ns_page_think_time(16.882);

    //Page Auto split for Image Link 'Login' Clicked by User
    ns_start_transaction("login");
    ns_web_url("login",
        "URL=https://192.3.3.233:8443/cgi-bin/login?userSession={sp}&username={username}&password={passwaord}&login.x=42&login.y=17&JSFormSubmit=off",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=IDPROOT-TEST",
        INLINE_URLS,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/banner_animated.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/sun_swede.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/flights.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/home.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/signoff.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/images/banner_merctur.jpg", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/vep/images/velocigen.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/favicon.ico", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE
    );

    ns_end_transaction("login", NS_AUTO_STATUS);
    ns_page_think_time(3.999);

    //Page Auto split for Image Link 'Search Flights Button' Clicked by User
    ns_start_transaction("reservation");
    ns_web_url("reservation",
        "URL=https://192.3.3.233:8443/cgi-bin/reservation",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=IDPROOT-TEST",
        INLINE_URLS,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/banner_animated.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/sun_swede.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/flights.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/home.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/signoff.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/images/continue.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/vep/images/velocigen.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/favicon.ico", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE
    );

    ns_end_transaction("reservation", NS_AUTO_STATUS);
    ns_page_think_time(2.026);

    //Page Auto split for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight");
    ns_web_url("findflight",
        "URL=https://192.3.3.233:8443/cgi-bin/findflight?depart=Acapulco&departDate=10-05-2023&arrive=Acapulco&returnDate=10-06-2023&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=76&findFlights.y=7",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=IDPROOT-TEST",
        INLINE_URLS,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/banner_animated.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/sun_swede.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/flights.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/home.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/signoff.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/images/splash_Searchresults.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/images/continue.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/images/startover.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/vep/images/velocigen.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/favicon.ico", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE
    );

    ns_end_transaction("findflight", NS_AUTO_STATUS);
    ns_page_think_time(2.529);

    //Page Auto split for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_2");
    ns_web_url("findflight_2",
        "URL=https://192.3.3.233:8443/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C10-05-2023&hidden_outboundFlight_button1=001%7C0%7C10-05-2023&hidden_outboundFlight_button2=002%7C0%7C10-05-2023&hidden_outboundFlight_button3=003%7C0%7C10-05-2023&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=72&reserveFlights.y=15",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=IDPROOT-TEST",
        INLINE_URLS,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/banner_animated.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/sun_swede.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/flights.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/home.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/signoff.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/images/splash_creditcard.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/images/purchaseflight.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/images/startover.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/vep/images/velocigen.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/favicon.ico", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE
    );

    ns_end_transaction("findflight_2", NS_AUTO_STATUS);
    ns_page_think_time(3.81);

    //Page Auto split for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_3");
    ns_web_url("findflight_3",
        "URL=https://192.3.3.233:8443/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C10-05-2023&advanceDiscount=&buyFlights.x=68&buyFlights.y=17&.cgifields=saveCC",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=IDPROOT-TEST",
        INLINE_URLS,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/banner_animated.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/sun_swede.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/flights.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/home.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/signoff.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/images/splash_flightconfirm.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/images/bookanother.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/vep/images/velocigen.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/favicon.ico", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE
    );

    ns_end_transaction("findflight_3", NS_AUTO_STATUS);
    ns_page_think_time(2.911);

    //Page Auto split for Image Link 'SignOff Button' Clicked by User
    ns_start_transaction("welcome_2");
    ns_web_url("welcome_2",
        "URL=https://192.3.3.233:8443/cgi-bin/welcome",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=IDPROOT-TEST",
        INLINE_URLS,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/banner_animated.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/sun_swede.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/Merc10-dev/images/login.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/images/banner_merctur.jpg", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/tours/vep/images/velocigen.gif", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE,
            "URL=https://192.3.3.233:8443/favicon.ico", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDPROOT-TEST", END_INLINE
    );

    ns_end_transaction("welcome_2", NS_AUTO_STATUS);
    ns_page_think_time(1.653);

}
