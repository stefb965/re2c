/* Generated by re2c */
#include <stddef.h>
#include <stdio.h>

static void lex(const char *YYCURSOR)
{
    const char *YYMARKER, *p0, *p1, *p2, *p3;
    const char *yyt1;const char *yyt2;
    
{
	char yych;
	yych = *YYCURSOR;
	switch (yych) {
	case '0':	goto yy4;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
	{ printf("error\n"); return; }
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '1':
		yyt1 = YYCURSOR;
		goto yy5;
	case '2':
		yyt1 = YYCURSOR;
		goto yy8;
	default:	goto yy3;
	}
yy5:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '1':	goto yy5;
	case '2':	goto yy8;
	default:	goto yy7;
	}
yy7:
	YYCURSOR = YYMARKER;
	goto yy3;
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
	case '3':
		yyt2 = YYCURSOR;
		goto yy9;
	case '4':
		yyt2 = YYCURSOR;
		goto yy11;
	default:	goto yy7;
	}
yy9:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '3':	goto yy9;
	case '4':	goto yy11;
	default:	goto yy7;
	}
yy11:
	++YYCURSOR;
	p3 = yyt2;
	p1 = yyt1;
	YYCURSOR -= 1;
	p2 = yyt2 - 1;
	p0 = yyt1 - 1;
	{
            printf("'%.*s', '%.*s', '%.*s', '%.*s', '%s'\n",
                p1 - p0, p0,
                p2 - p1, p1,
                p3 - p2, p2,
                YYCURSOR - p3, p3,
                YYCURSOR);
                return;
        }
}

}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        lex(argv[i]);
    }
    return 0;
}
