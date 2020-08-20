#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getStringFrom(const char *s, const char *start, const char *end);

char *findAuthor(char *s, size_t size);
char *findTime(char *s, size_t size);
char *findActivity(char *s, size_t size);
char *findTrackPoints(char *s, size_t size);

char *extractLatitude(char *s, size_t size);
char *extractLongitude(char *s, size_t size);
