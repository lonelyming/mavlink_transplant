#ifndef MAVLINK_AVOID_ERRORS_H
#define MAVLINK_AVOID_ERRORS_H

/*解决解决..\MAVLINK\common\../mavlink_types.h(53): error: #20: identifier "pack" is undefined*/
#define MAVPACKED( __Declaration__ ) __Declaration__
/*解决..\MAVLINK\common\../mavlink_types.h(53): error: #3092: anonymous unions are only supported in --gnu mode, or when enabled with #pragma anon_unions*/
#pragma anon_unions

#define inline __INLINE
	
#endif
