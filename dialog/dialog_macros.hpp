#define PREFIX grad
#define COMPONENT passport

#define QUOTE(var) #var
#define DOUBLES(var1,var2) ##var1##_##var2
#define TRIPLES(var1,var2,var3) ##var1##_##var2##_##var3
#define QUADRUPLES(var1,var2,var3,var4) ##var1##_##var2##_##var3##_var4

#define GVAR(var)  TRIPLES(PREFIX,COMPONENT,var)
#define QGVAR(var) QUOTE(GVAR(var))
#define FUNC(var)  QUADRUPLES(PREFIX,COMPONENT,fnc,var)
#define QFUNC(var) QUOTE(FUNC(var))
