#define ID 257
#define MOUNT 258
#define GROUP 259
#define PERM 260
#define TASK 261
#define ADMIN 262
#define NAMESPACE 263
#define DEFAULT 264
#define TEMPLATE 265
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	char *name;
	char chr;
	int val;
	struct cgroup_dictionary *values;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
