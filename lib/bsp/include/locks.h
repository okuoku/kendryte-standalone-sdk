#ifndef _BSP_LOCKS_H
#define _BSP_LOCKS_H

#ifdef __cplusplus
extern "C" {
#endif

typedef long _lock_t;
void _lock_acquire_recursive(_lock_t *lock);
void _lock_release_recursive(_lock_t *lock);

#ifdef __cplusplus
}
#endif

#endif
