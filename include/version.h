#ifndef	NQS_VERSION_INCLUDED
#define NQS_VERSION_INCLUDED

#define NQS_MAKE_STR_HELPER(x) #x
#define NQS_MAKE_STR(x) NQS_MAKE_STR_HELPER(x)

#define NQS_VERSION_MAJOR		2
#define NQS_VERSION_MINOR		3
#define NQS_VERSION_PATCH		1
#define NQS_VERSION_BETA		0
#define NQS_VERSION_VERSTRING	NQS_MAKE_STR(NQS_VERSION_MAJOR) "." NQS_MAKE_STR(NQS_VERSION_MINOR) "." NQS_MAKE_STR(NQS_VERSION_PATCH) "." NQS_MAKE_STR(NQS_VERSION_BETA)

#endif