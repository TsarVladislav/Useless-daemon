#ifndef DEM_H
#define DEM_H
#define _XOPEN_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <syslog.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/resource.h>
#include <sys/stat.h>
#include <errno.h>
#include <signal.h>

void  daemonize(const char *);
void kill_handle(int signum);
#endif
