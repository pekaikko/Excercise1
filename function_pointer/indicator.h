
typedef int (*alarm)(int type);

alarm p[3];

void registerAlarm(alarm a);

int hitAlarm();
