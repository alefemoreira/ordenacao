#include "../includes/hashtable.hpp"
#include <algorithm>

bool Hash::insert(int value) {
  int i = f(value);
  int count = 0;
  while (!(v[i] == 0 || v[i] == value)) {
    if (count > size / 2) return false;
    i = f1(value);
    count++;
  }

  v[i] = value;

  return true;
}

int Hash::find(int value) {
  int i = f(value);
  int count = 0;

  while (!(v[i] == 0 || v[i] == value)) {
    if (count > size / 2) return 0;
    i = f1(value);
    count++;
  }

  return v[i];
}

int Hash::findIndex(int value) {
  int i = f(value);
  int count = 0;

  while (!(v[i] == 0 || v[i] == value)) {
    if (count > size / 2) return 0;
    i = f1(value);
    count++;
  }

  return i;
}

bool Hash::remove(int value) {
  int i = f(value);
  int count = 0;

  while (!(v[i] == 0 || v[i] == value)) {
    if (count > size / 2) return false;
    i = f1(value);
    count++;
  }

  v[i] = 0;
  return true;
}
