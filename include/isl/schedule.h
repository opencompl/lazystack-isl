#ifndef ISL_SCHEDULE_H
#define ISL_SCHEDULE_H

#include <isl/union_set.h>
#include <isl/union_map.h>

struct isl_schedule;
typedef struct isl_schedule isl_schedule;

__isl_give isl_schedule *isl_union_set_compute_schedule(
	__isl_take isl_union_set *domain,
	__isl_take isl_union_map *validity,
	__isl_take isl_union_map *proximity);
void *isl_schedule_free(__isl_take isl_schedule *sched);
__isl_give isl_union_map *isl_schedule_get_map(__isl_keep isl_schedule *sched);

int isl_schedule_n_band(__isl_keep isl_schedule *sched);
__isl_give isl_union_map *isl_schedule_get_band(__isl_keep isl_schedule *sched,
	unsigned band);

#endif
