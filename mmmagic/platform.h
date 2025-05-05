#ifndef PLATFORM_H
#define PLATFORM_H

#ifdef WIN32
  #define WIN32_LEAN_AND_MEAN
  #include <windows.h>
  #include <setupapi.h> 
  #include <hidsdi.h> 

#else
  typedef int BOOL;       // To match Windows
  #include <pthread.h>
  #include <string.h>
  #include <errno.h>
  #include <libudev.h>
  #include <fcntl.h>

	typedef struct 
	{
		pthread_mutex_t	mutex;
		pthread_cond_t		condition;
		int			semCount;	
	}sem_private_struct, *sem_private;

	

#endif


#endif
