re2c: warning: line 4: naked default case (stray code units: [0x00-A][C-`][c-0xFF]), better add default rule * [-Wnaked-default]
/* Generated by re2c */

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'B':
	case 'b':	goto yy5;
	case 'a':	goto yy3;
	default:	goto yy2;
	}
yy2:
yy3:
	++YYCURSOR;
	{return 'a';}
yy5:
	++YYCURSOR;
	{return 'b';}
}

}
