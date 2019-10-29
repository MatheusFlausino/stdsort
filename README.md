# stdsort

# SELECTION_SORT
# INSERTION_SORT
# BUBBLE_SORT
# QUICK_SORT
# HEAP_SORT

```c
#include "stdsort.h"

void main(){
  int a[] = { 5, 3, 1, 8 };
  
  SELECTION_SORT(a);
  // { 1, 3, 5, 8 }
  
  int b[] = { 4, 9, 10, 0 };
  
  INSERTION_SORT(a);
  // { 0, 4, 9, 10 }
  
  int c[] = { 32, 12, 6, 3 };
  
  BUBBLE_SORT(a);
  // { 3, 6, 12, 32 }
  
  int d[] = { 7, 21, 11, 2 };
  
  QUICK_SORT(a);
  // { 2, 7, 11, 21 }
  
  int e[] = { 6, 4, 1, 3 };
  
  HEAP_SORT(a);
  // { 1, 3, 4, 6 }
}
```
