// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  if (n == 0) {
    return 1;
  }
  double result = 1.0;
  for (uint64_t i = 1; i <= n; i++) {
    result *= value;
  }
  return result;
}

uint64_t fact(uint16_t n) {
  uint64_t result = 1;
  for (uint64_t i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

double calcItem(double x, uint16_t n) {
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
  double result = 1.0;
  for (uint16_t i = 1; i <= count; i++) {
    result += calcItem(x, i);
  }
  return result;
}

double sinn(double x, uint16_t count) {
  double result = 0.0;
  for (uint64_t i = 1; i <= count; i++) {
    result += pown(-1, i - 1) * calcItem(x, (2 * i) - 1);
  }
  return result;
}

double cosn(double x, uint16_t count) {
  double result = 0.0;
  for (uint16_t i = 1; i <= count; i++) {
    result += pown(-1, i - 1) * calcItem(x, (2 * i) - 2);
  }
  return result;
}
