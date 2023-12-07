#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_key(const char *username, const char *key)
{
int result = 0;

if (strcmp(username, "julien") == 0)
{
if (strcmp(key, "javascript") == 0)
{
result = 1;
}
}
return result;
}
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Usage: %s username\n", argv[0]);
return 1;
}

const char *username = argv[1];
if (strcmp(username, "julien") == 0)
{
printf("javascript\n");
}
else
{
printf("Unknown username.\n");
}

return 0;
}
