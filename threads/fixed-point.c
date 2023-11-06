#include "fixed-point.h"

fxpt to_fxpt(int n) {
  return n * F;
}

fxpt fxpt_floor(fxpt x) {
  return x / F;
}

fxpt fxpt_round(fxpt x) {
  if(x >= 0)
    return (x + F/2) / F;
  else
    return (x - F/2) / F;
}

fxpt fxpt_add(fxpt x, fxpt y) {
  return x + y;
}

fxpt fxpt_sub(fxpt x, fxpt y) {
  return x - y;
}

fxpt fxpt_mul(fxpt x, fxpt y) {
  return ((int64_t) x) * y / F;
}

fxpt fxpt_div(fxpt x, fxpt y) {
  return ((int64_t) x) * F / y;
}

fxpt int_add(fxpt x, int n) {
  return x + (n * F);
}

fxpt int_sub(fxpt x, int n) {
  return x - (n * F);
}

fxpt int_mul(fxpt x, int n) {
  return x * n;
}

fxpt int_div(fxpt x, int n) {
  return x / n;
}

