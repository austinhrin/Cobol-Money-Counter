/* Generated by           cobc 2.0.0 */
/* Generated from         money_counter.cbl */
/* Generated at           Mar 03 2020 21:58:02 */
/* GnuCOBOL build date    Nov 13 2016 01:30:50 */
/* GnuCOBOL package date  Nov 06 2016 22:36:19 UTC */
/* Compile command        cobc.exe -x -o bin\money_counter.exe -std=default -Wall -debug -g -free money_counter.cbl */


/* Module path */
static const char		*cob_module_path = NULL;

/* Number of call parameters */
static int		cob_call_params = 0;

/* Attributes */

static const cob_field_attr a_1 =	{0x10,  11,   2, 0x0001, NULL};
static const cob_field_attr a_2 =	{0x21,   0,   0, 0x0000, NULL};
static const cob_field_attr a_3 =	{0x14,  34,  17, 0x0201, NULL};
static const cob_field_attr a_4 =	{0x01,   0,   0, 0x0000, NULL};
static const cob_field_attr a_5 =	{0x10,   1,   0, 0x0000, NULL};
static const cob_field_attr a_6 =	{0x10,   2,   1, 0x0000, NULL};
static const cob_field_attr a_7 =	{0x10,   3,   2, 0x0000, NULL};
static const cob_field_attr a_8 =	{0x10,   4,   0, 0x0000, NULL};
static const cob_field_attr a_9 =	{0x10,   2,   0, 0x0000, NULL};


/* Constants */
static const cob_field c_1	= {1, (cob_u8_ptr)"0", &a_5};
static const cob_field c_2	= {2, (cob_u8_ptr)"05", &a_6};
static const cob_field c_3	= {3, (cob_u8_ptr)"001", &a_7};
static const cob_field c_4	= {1, (cob_u8_ptr)"1", &a_5};
static const cob_field c_5	= {1, (cob_u8_ptr)"3", &a_5};
static const cob_field c_6	= {1, (cob_u8_ptr)"2", &a_5};
static const cob_field c_7	= {2, (cob_u8_ptr)"22", &a_9};
static const cob_field c_8	= {1, (cob_u8_ptr)"4", &a_5};
static const cob_field c_9	= {1, (cob_u8_ptr)"5", &a_5};
static const cob_field c_10	= {1, (cob_u8_ptr)"6", &a_5};
static const cob_field c_11	= {1, (cob_u8_ptr)"7", &a_5};
static const cob_field c_12	= {1, (cob_u8_ptr)"8", &a_5};
static const cob_field c_13	= {1, (cob_u8_ptr)"9", &a_5};
static const cob_field c_14	= {2, (cob_u8_ptr)"10", &a_9};
static const cob_field c_15	= {2, (cob_u8_ptr)"11", &a_9};
static const cob_field c_16	= {2, (cob_u8_ptr)"12", &a_9};
static const cob_field c_17	= {2, (cob_u8_ptr)"13", &a_9};
static const cob_field c_18	= {2, (cob_u8_ptr)"14", &a_9};
static const cob_field c_19	= {2, (cob_u8_ptr)"15", &a_9};


/* Strings */
static const char st_1[]	= "money_counter.cbl";
static const char st_2[]	= "Entry:     money_counter";
static const char st_3[]	= "Section:   (None)";
static const char st_4[]	= "Paragraph: MAIN";
static const char st_5[]	= "MAIN";
static const char st_6[]	= "GO TO";
static const char st_7[]	= "STOP RUN";
static const char st_8[]	= "Paragraph: MAIN_LOOP";
static const char st_9[]	= "MAIN_LOOP";
static const char st_10[]	= "ACCEPT";
static const char st_11[]	= "MOVE";
static const char st_12[]	= "MULTIPLY";
static const char st_13[]	= "ADD";
static const char st_14[]	= "Exit:      money_counter";

static void COB_NOINLINE
cob_set_screen (cob_screen *s, cob_screen *next,
		cob_screen *prev, cob_screen *child, cob_screen *parent,
		cob_field *field, cob_field *value,
		cob_field *line, cob_field *column,
		cob_field *foreg, cob_field *backg, cob_field *prompt,
		const int type, const int occurs, const int attr)
{
	s->next = next;
	s->prev = prev;
	s->child = child;
	s->parent = parent;
	s->field = field;
	s->value = value;
	s->line = line;
	s->column = column;
	s->foreg = foreg;
	s->backg = backg;
	s->prompt = prompt;
	s->type = type;
	s->occurs = occurs;
	s->attr = attr;
}

