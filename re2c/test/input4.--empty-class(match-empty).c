/* Generated by re2c */
#line 1 "input4.--empty-class(match-empty).re"

#line 5 "input4.--empty-class(match-empty).c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	goto yy3;
#line 3 "input4.--empty-class(match-empty).re"
	{ return 0; }
#line 13 "input4.--empty-class(match-empty).c"
yy3:
	++YYCURSOR;
#line 4 "input4.--empty-class(match-empty).re"
	{ return 1; }
#line 18 "input4.--empty-class(match-empty).c"
}
#line 7 "input4.--empty-class(match-empty).re"

re2c: warning: line 3: empty character class [-Wempty-character-class]
re2c: warning: line 3: unreachable rule (shadowed by rule at line 4) [-Wunreachable-rules]
re2c: warning: line 5: unreachable rule (shadowed by rule at line 4) [-Wunreachable-rules]
