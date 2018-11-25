#ifndef HUMAN_COMM_H
#define HUMAN_COMM_H
#include <linux/ioctl.h>

typedef struct {
	int status, dignity, ego;
} human_arg_t;

// use 'q' as magic number
#define HUMAN_MAGIC 'q'

#define HUMAN_SAY_THINGS _IOR(HUMAN_MAGIC, 1, human_arg_t *)
#define HUMAN_FORGET_THINGS _IO(HUMAN_MAGIC, 2)
#define HUMAN_SET_THINGS _IOW(HUMAN_MAGIC, 3, human_arg_t *)

#endif
