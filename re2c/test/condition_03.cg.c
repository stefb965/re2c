/* Generated by re2c */
#line 1 "condition_03.cg.re"

#line 5 "condition_03.cg.c"
{
	YYCTYPE yych;
	static void *yyctable[3] = {
		&&yyc_0,
		&&yyc_r1,
		&&yyc_r2,
	};
	goto *yyctable[YYGETCONDITION()];
/* *********************************** */
yyc_0:
#line 3 "condition_03.cg.re"
	{ return NULL; }
#line 18 "condition_03.cg.c"
/* *********************************** */
yyc_r1:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '2') {
		if (yych <= '0') goto yy6;
		if (yych <= '1') goto yy7;
		goto yy9;
	} else {
		if (yych <= '`') goto yy6;
		if (yych <= 'a') goto yy11;
		if (yych <= 'b') goto yy13;
	}
yy6:
yy7:
	++YYCURSOR;
#line 4 "condition_03.cg.re"
	{ return "1"; }
#line 37 "condition_03.cg.c"
yy9:
	++YYCURSOR;
#line 5 "condition_03.cg.re"
	{ return "2"; }
#line 42 "condition_03.cg.c"
yy11:
	++YYCURSOR;
#line 6 "condition_03.cg.re"
	{ return "a"; }
#line 47 "condition_03.cg.c"
yy13:
	++YYCURSOR;
#line 7 "condition_03.cg.re"
	{ return "b"; }
#line 52 "condition_03.cg.c"
/* *********************************** */
yyc_r2:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '2') {
		if (yych <= '0') goto yy17;
		if (yych <= '1') goto yy18;
		goto yy20;
	} else {
		if (yych == 'b') goto yy22;
	}
yy17:
yy18:
	++YYCURSOR;
#line 4 "condition_03.cg.re"
	{ return "1"; }
#line 69 "condition_03.cg.c"
yy20:
	++YYCURSOR;
#line 5 "condition_03.cg.re"
	{ return "2"; }
#line 74 "condition_03.cg.c"
yy22:
	++YYCURSOR;
#line 7 "condition_03.cg.re"
	{ return "b"; }
#line 79 "condition_03.cg.c"
}
#line 9 "condition_03.cg.re"

re2c: warning: line 3: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 9: control flow in condition 'r1' is undefined for strings that match '[\x0-\x30\x33-\x60\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
re2c: warning: line 9: control flow in condition 'r2' is undefined for strings that match '[\x0-\x30\x33-\x61\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
re2c: warning: line 9: looks like you use hardcoded numbers instead of autogenerated condition names: better add '/*!types:re2c*/' directive or '-t, --type-header' option and don't rely on fixed condition order. [-Wcondition-order]
