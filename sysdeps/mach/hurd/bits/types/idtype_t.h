#ifndef __idtype_t_defined
#define __idtype_t_defined

/* The following values are used by the `waitid' function.  */
typedef enum
{
  P_ALL,		/* Wait for any child.  */
  P_PID,		/* Wait for specified process.  */
  P_PGID,		/* Wait for members of process group.  */
} idtype_t;

#endif
