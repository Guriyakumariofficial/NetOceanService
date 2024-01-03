nsl_static_var(username:2,passwaord:3, File=file.dat, Refresh=SESSION, Mode=WEIGHTED_RANDOM, FirstDataLine=2, EncodeMode=All);
nsl_search_var(sp, PAGE=welcome, LB="userSession value=", RB=">", LBMATCH=FIRST, ORD=1, SaveLen=0, ActionOnNotFound=Error, Search=Body, RETAINPREVALUE="NO", EncodeMode=All);
