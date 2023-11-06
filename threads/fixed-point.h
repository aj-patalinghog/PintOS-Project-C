#ifndef FIXED_POINT_H
#define FIXED_POINT_H

#include <stdint.h>

#define P 17
#define Q 14
#define F (1 << Q)

typedef int32_t fxpt;

fxpt to_fxpt(int n);
fxpt fxpt_floor(fxpt x);
fxpt fxpt_round(fxpt x);
fxpt fxpt_add(fxpt x, fxpt y);
fxpt fxpt_sub(fxpt x, fxpt y);
fxpt fxpt_mul(fxpt x, fxpt y);
fxpt fxpt_div(fxpt x, fxpt y);
fxpt int_add(fxpt x, int n);
fxpt int_sub(fxpt x, int n);
fxpt int_mul(fxpt x, int n);
fxpt int_div(fxpt x, int n);

#endif
