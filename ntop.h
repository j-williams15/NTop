#ifndef NTOP_H
#define NTOP_H

#include <tchar.h>

typedef enum process_sort_type {
	SORT_BY_ID,
	SORT_BY_USER_NAME,
	SORT_BY_PRIORITY,
	SORT_BY_PROCESSOR_TIME,
	SORT_BY_USED_MEMORY,
	SORT_BY_THREAD_COUNT,
	SORT_BY_UPTIME,
	SORT_BY_EXE,
	SORT_BY_TREE,
} process_sort_type;

int GetProcessSortTypeFromName(const TCHAR *Name, process_sort_type *Dest);
void ChangeProcessSortType(process_sort_type NewProcessSortType);

#endif