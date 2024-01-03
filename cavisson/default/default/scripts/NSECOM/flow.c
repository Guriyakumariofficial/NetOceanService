/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: Arpita
    Date of recording: 05/22/2023 10:24:29
    Flow details:
    Build details: 4.11.0 (build# 50)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{
    ns_start_transaction("index");
    ns_web_url ("index",
        "URL=https://192.210.134.139:7901/nsecom/",
        "HEADER=Host:192.210.134.139:7901",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36",
        "HEADER=Accept:text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Encoding:gzip, deflate, br",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://192.210.134.139:7901/nsecom/images/logo.png", "HEADER=Host:192.210.134.139:7901", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Accept:image/avif,image/webp,image/apng,image/svg+xml,image/*,*/*;q=0.8", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Referer:https://192.210.134.139:7901/nsecom/", "HEADER=Accept-Encoding:gzip, deflate, br", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=CavNV", END_INLINE,
            "URL=https://192.210.134.139:7901/favicon.ico", "HEADER=Host:192.210.134.139:7901", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Accept:image/avif,image/webp,image/apng,image/svg+xml,image/*,*/*;q=0.8", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Referer:https://192.210.134.139:7901/nsecom/", "HEADER=Accept-Encoding:gzip, deflate, br", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=CavNV", END_INLINE,
            "URL=https://192.210.134.139:7901/favicon.ico", END_INLINE
    );

    ns_end_transaction("index", NS_AUTO_STATUS);
    ns_page_think_time(8.93);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("home");
    ns_web_url ("home",
        "URL=https://192.210.134.139:7901/nsecom/home",
        "HEADER=Host:192.210.134.139:7901",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36",
        "HEADER=Accept:text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Referer:https://192.210.134.139:7901/nsecom/",
        "HEADER=Accept-Encoding:gzip, deflate, br",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=CavNV",
        INLINE_URLS,
            "URL=https://192.210.134.139:7901/nsecom/images/nsecomlogo.png", "HEADER=Host:192.210.134.139:7901", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Accept:image/avif,image/webp,image/apng,image/svg+xml,image/*,*/*;q=0.8", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Referer:https://192.210.134.139:7901/nsecom/home", "HEADER=Accept-Encoding:gzip, deflate, br", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=CavNV", END_INLINE,
            "URL=https://192.210.134.139:7901/nsecom/images/nsecomlogo.png", END_INLINE
    );

    ns_end_transaction("home", NS_AUTO_STATUS);
    ns_page_think_time(12.745);

    //Page Auto split for Button 'search' Clicked by User
    ns_start_transaction("searchProduct");
    ns_web_url ("searchProduct",
        "URL=https://192.210.134.139:7901/nsecom/searchProduct?keyword=jeans",
        "HEADER=Host:192.210.134.139:7901",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36",
        "HEADER=Accept:text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Referer:https://192.210.134.139:7901/nsecom/home",
        "HEADER=Accept-Encoding:gzip, deflate, br",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=CavNV",
        INLINE_URLS,
            "URL=https://192.210.134.139:7901/nsecom/images/jeans1.png", "HEADER=Host:192.210.134.139:7901", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Accept:image/avif,image/webp,image/apng,image/svg+xml,image/*,*/*;q=0.8", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Referer:https://192.210.134.139:7901/nsecom/searchProduct?keyword=jeans", "HEADER=Accept-Encoding:gzip, deflate, br", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=CavNV", END_INLINE,
            "URL=https://192.210.134.139:7901/nsecom/images/jeans2.png", "HEADER=Host:192.210.134.139:7901", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Accept:image/avif,image/webp,image/apng,image/svg+xml,image/*,*/*;q=0.8", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Referer:https://192.210.134.139:7901/nsecom/searchProduct?keyword=jeans", "HEADER=Accept-Encoding:gzip, deflate, br", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=CavNV", END_INLINE,
            "URL=https://192.210.134.139:7901/nsecom/images/jeans3.png", "HEADER=Host:192.210.134.139:7901", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Accept:image/avif,image/webp,image/apng,image/svg+xml,image/*,*/*;q=0.8", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Referer:https://192.210.134.139:7901/nsecom/searchProduct?keyword=jeans", "HEADER=Accept-Encoding:gzip, deflate, br", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=CavNV", END_INLINE,
            "URL=https://192.210.134.139:7901/nsecom/images/jeans4.png", "HEADER=Host:192.210.134.139:7901", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Accept:image/avif,image/webp,image/apng,image/svg+xml,image/*,*/*;q=0.8", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Referer:https://192.210.134.139:7901/nsecom/searchProduct?keyword=jeans", "HEADER=Accept-Encoding:gzip, deflate, br", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=CavNV", END_INLINE,
            "URL=https://192.210.134.139:7901/nsecom/images/jeans5.png", "HEADER=Host:192.210.134.139:7901", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Accept:image/avif,image/webp,image/apng,image/svg+xml,image/*,*/*;q=0.8", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Referer:https://192.210.134.139:7901/nsecom/searchProduct?keyword=jeans", "HEADER=Accept-Encoding:gzip, deflate, br", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=CavNV", END_INLINE,
            "URL=https://192.210.134.139:7901/nsecom/images/jeans6.png", "HEADER=Host:192.210.134.139:7901", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Accept:image/avif,image/webp,image/apng,image/svg+xml,image/*,*/*;q=0.8", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Referer:https://192.210.134.139:7901/nsecom/searchProduct?keyword=jeans", "HEADER=Accept-Encoding:gzip, deflate, br", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=CavNV", END_INLINE,
            "URL=https://192.210.134.139:7901/nsecom/images/jeans1.png", END_INLINE,
            "URL=https://192.210.134.139:7901/nsecom/images/jeans7.png", "HEADER=Host:192.210.134.139:7901", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Accept:image/avif,image/webp,image/apng,image/svg+xml,image/*,*/*;q=0.8", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Referer:https://192.210.134.139:7901/nsecom/searchProduct?keyword=jeans", "HEADER=Accept-Encoding:gzip, deflate, br", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=CavNV", END_INLINE,
            "URL=https://192.210.134.139:7901/nsecom/images/jeans3.png", END_INLINE,
            "URL=https://192.210.134.139:7901/nsecom/images/jeans8.png", "HEADER=Host:192.210.134.139:7901", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Accept:image/avif,image/webp,image/apng,image/svg+xml,image/*,*/*;q=0.8", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Referer:https://192.210.134.139:7901/nsecom/searchProduct?keyword=jeans", "HEADER=Accept-Encoding:gzip, deflate, br", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=CavNV", END_INLINE,
            "URL=https://192.210.134.139:7901/nsecom/images/jeans2.png", END_INLINE,
            "URL=https://192.210.134.139:7901/nsecom/images/jeans9.png", "HEADER=Host:192.210.134.139:7901", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Accept:image/avif,image/webp,image/apng,image/svg+xml,image/*,*/*;q=0.8", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Referer:https://192.210.134.139:7901/nsecom/searchProduct?keyword=jeans", "HEADER=Accept-Encoding:gzip, deflate, br", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=CavNV", END_INLINE,
            "URL=https://192.210.134.139:7901/nsecom/images/jeans4.png", END_INLINE,
            "URL=https://192.210.134.139:7901/nsecom/images/jeans5.png", END_INLINE,
            "URL=https://192.210.134.139:7901/nsecom/images/jeans6.png", END_INLINE
    );

    ns_end_transaction("searchProduct", NS_AUTO_STATUS);
    ns_page_think_time(5.1);

    //Page Auto split for Image Link '' Clicked by User
    ns_start_transaction("productPage");
    ns_web_url ("productPage",
        "URL=https://192.210.134.139:7901/nsecom/productPage?productid=Jeans001&upc=JeansUPC11111&prodImage=jeans1.png&prodPrice=19.99",
        "HEADER=Host:192.210.134.139:7901",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36",
        "HEADER=Accept:text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Referer:https://192.210.134.139:7901/nsecom/searchProduct?keyword=jeans",
        "HEADER=Accept-Encoding:gzip, deflate, br",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=CavNV"
    );

    ns_end_transaction("productPage", NS_AUTO_STATUS);
    ns_page_think_time(10.317);

    //Page Auto split for Button 'Add to cart' Clicked by User
    ns_start_transaction("addToBag");
    ns_web_url ("addToBag",
        "URL=https://192.210.134.139:7901/nsecom/addToBag?size=2&productid=NA&price=19.99&upc=JeansUPC11111&prodImage=jeans1.png&quantity=5",
        "HEADER=Host:192.210.134.139:7901",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36",
        "HEADER=Accept:text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Referer:https://192.210.134.139:7901/nsecom/productPage?productid=Jeans001&upc=JeansUPC11111&prodImage=jeans1.png&prodPrice=19.99",
        "HEADER=Accept-Encoding:gzip, deflate, br",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=CavNV"
    );

    ns_end_transaction("addToBag", NS_AUTO_STATUS);
    ns_page_think_time(3.967);

    //Page Auto split for Button 'Continue Checkout' Clicked by User
    ns_start_transaction("shippingAddress");
    ns_web_url ("shippingAddress",
        "URL=https://192.210.134.139:7901/nsecom/shippingAddress?productid=NA&upc=JeansUPC11111&size=2&color=blue&quantity=5&price=99.95&status=true&cartId=Cart20230522085351757",
        "HEADER=Host:192.210.134.139:7901",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36",
        "HEADER=Accept:text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Referer:https://192.210.134.139:7901/nsecom/addToBag?size=2&productid=NA&price=19.99&upc=JeansUPC11111&prodImage=jeans1.png&quantity=5",
        "HEADER=Accept-Encoding:gzip, deflate, br",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=CARTID;CavNV",
        INLINE_URLS,
            "URL=https://192.210.134.139:7901/nsecom/images/logo.png", "HEADER=Host:192.210.134.139:7901", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Accept:image/avif,image/webp,image/apng,image/svg+xml,image/*,*/*;q=0.8", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Referer:https://192.210.134.139:7901/nsecom/shippingAddress?productid=NA&upc=JeansUPC11111&size=2&color=blue&quantity=5&price=99.95&status=true&cartId=Cart20230522085351757", "HEADER=Accept-Encoding:gzip, deflate, br", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=CARTID;CavNV", END_INLINE,
            "URL=https://192.210.134.139:7901/nsecom/images/logo.png", END_INLINE
    );

    ns_end_transaction("shippingAddress", NS_AUTO_STATUS);
    ns_page_think_time(26.855);

    //Page Auto split for Button 'Place Order' Clicked by User
    ns_start_transaction("checkOut");
    ns_web_url ("checkOut",
        "URL=https://192.210.134.139:7901/nsecom/checkOut?name=Arpita&address=C139&city=Noida&PostalCode=201301&country=US&productid=NA&upc=JeansUPC11111&size=2&color=blue&quantity=5&price=99.95&status=true&cartId=Cart20230522085351757",
        "HEADER=Host:192.210.134.139:7901",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36",
        "HEADER=Accept:text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Referer:https://192.210.134.139:7901/nsecom/shippingAddress?productid=NA&upc=JeansUPC11111&size=2&color=blue&quantity=5&price=99.95&status=true&cartId=Cart20230522085351757",
        "HEADER=Accept-Encoding:gzip, deflate, br",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=CARTID;CavNV",
        INLINE_URLS,
            "URL=https://192.210.134.139:7901/nsecom/images/nsecomlogo.png", "HEADER=Host:192.210.134.139:7901", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=User-Agent:Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Accept:image/avif,image/webp,image/apng,image/svg+xml,image/*,*/*;q=0.8", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Referer:https://192.210.134.139:7901/nsecom/checkOut?name=Arpita&address=C139&city=Noida&PostalCode=201301&country=US&productid=NA&upc=JeansUPC11111&size=2&color=blue&quantity=5&price=99.95&status=true&cartId=Cart20230522085351757", "HEADER=Accept-Encoding:gzip, deflate, br", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=CARTID;CavNV", END_INLINE,
            "URL=https://192.210.134.139:7901/nsecom/images/nsecomlogo.png", END_INLINE
    );

    ns_end_transaction("checkOut", NS_AUTO_STATUS);
    ns_page_think_time(6.038);

}
