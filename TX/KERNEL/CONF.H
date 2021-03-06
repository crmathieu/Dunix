/* conf.h */

#define  NULLPTR (char *)0
#define  DVNMLEN   9
#define  BADDEV   -1

/* virtual screens  */
#define  VS0          0
#define  VS1          VS0+1
#define  VS2          VS1+1
#define  VS3          VS2+1
#define  VS4          VS3+1
#define  VS5          VS4+1
#define  VS6          VS5+1
#define  VS7          VS6+1
#define  VS8          VS7+1
#define  VS9          VS8+1
#define  NVS          VS9+1 /* total number of virtual screens */

#define  TTY1         VS9+1
#define  TTY2         TTY1+1
#define  TTY3         TTY2+1
#define  TTY4         TTY3+1

#define  FD0          0
#define  FD1          FD0+1
#define  HD0          FD1+1
#define  HD1          HD0+1

/* device control blocks dimension */
#define  NTTY         TTY1+1
#define  NDISK        4
#define  NSERIAL      1
#define  NSHELL       (NSERIAL + 1)

