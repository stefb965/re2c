re2c: warning: line 44: rule matches empty string [-Wmatch-empty-string]
/* Generated by re2c */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define YYGETCONDITION()  yy_state
#define YYSETCONDITION(s) yy_state = s
#define YYCTYPE         char
#define YYCURSOR        p
#define YYLIMIT         (s+l)
#define YYMARKER        q
#define YYFILL(n)

#define STATE(name)  yyc##name

static enum YYCONDTYPE yy_state;


enum YYCONDTYPE {
	yycINITIAL,
	yycST_VALUE,
};


int scan(char *s, int l)
{
	char *p = s;
	char *q = 0;
	char *t;

	for(;;)
	{
		t = p;

		{
			YYCTYPE yych;
			unsigned int yyaccept = 0;
			if (YYGETCONDITION() < 1) {
				goto yyc_INITIAL;
			} else {
				goto yyc_ST_VALUE;
			}
/* *********************************** */
yyc_INITIAL:
			if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
			yych = *YYCURSOR;
			if (yych <= 0x00) goto yy5;
			if (yych != '$') goto yy7;
			++YYCURSOR;
			if ((yych = *YYCURSOR) <= '@') goto yy4;
			if (yych <= 'Z') goto yy8;
			if (yych <= '`') goto yy4;
			if (yych <= 'z') goto yy8;
yy4:
			{ printf("ERR\n");	return 1; }
yy5:
			++YYCURSOR;
			{ printf("EOF\n");	return 0; }
yy7:
			yych = *++YYCURSOR;
			goto yy4;
yy8:
			++YYCURSOR;
			{
		printf("FOUND %s\n", t);
		continue;
	}
/* *********************************** */
yyc_ST_VALUE:
			{
				static const unsigned char yybm[] = {
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0, 128,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					128,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
					  0,   0,   0,   0,   0,   0,   0,   0, 
				};
				if (YYLIMIT <= YYCURSOR) YYFILL(1);
				yych = *(YYMARKER = YYCURSOR);
				if (yybm[0+yych] & 128) {
					goto yy15;
				}
				if (yych == '$') goto yy13;
yy12:
				{
		YYSETCONDITION(STATE(INITIAL));
		printf("Found spaces\n");
	}
yy13:
				++YYCURSOR;
				if (YYLIMIT <= YYCURSOR) YYFILL(1);
				yych = *YYCURSOR;
				if (yych <= '@') goto yy14;
				if (yych <= 'Z') goto yy17;
				if (yych <= '`') goto yy14;
				if (yych <= 'z') goto yy17;
yy14:
				YYCURSOR = YYMARKER;
				if (yyaccept == 0) {
					goto yy12;
				} else {
					goto yy18;
				}
yy15:
				++YYCURSOR;
				if (YYLIMIT <= YYCURSOR) YYFILL(1);
				yych = *YYCURSOR;
				if (yybm[0+yych] & 128) {
					goto yy15;
				}
				goto yy12;
yy17:
				yyaccept = 1;
				YYMARKER = ++YYCURSOR;
				if (YYLIMIT <= YYCURSOR) YYFILL(1);
				yych = *YYCURSOR;
				if (yych == '$') goto yy13;
yy18:
				{
		printf("Found $ or $\\<x>\n");
		continue;
	}
			}
		}

	}
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		return scan(argv[1], strlen(argv[1]));
	}
	else
	{
		fprintf(stderr, "%s <expr>\n", argv[0]);
		return 1;
	}
}
