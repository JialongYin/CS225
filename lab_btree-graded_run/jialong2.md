


## Score: 45/45 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/basic.cpp -o .objs/tests/basic.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/basic.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lpthread -o test

```


### ✓ - [5/5] - test_insertion_idx_emp

- **Points**: 5 / 5





### ✓ - [5/5] - test_insertion_idx_small

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree3_small

- **Points**: 5 / 5

```
==21355== Memcheck, a memory error detector
==21355== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21355== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21355== Command: ./test -r xml "test_btree3_small"
==21355== 
==21355== 
==21355== HEAP SUMMARY:
==21355==     in use at exit: 0 bytes in 0 blocks
==21355==   total heap usage: 1,765 allocs, 1,765 frees, 222,808 bytes allocated
==21355== 
==21355== All heap blocks were freed -- no leaks are possible
==21355== 
==21355== For counts of detected and suppressed errors, rerun with: -v
==21355== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_btree3_small" tags="[valgrind][weight=5]" filename="tests/basic.cpp" line="114">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="10" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="10" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_btree3_large_seq

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree3_large_rand

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree64_large_seq

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree64_large_rand

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree128_med_rand

- **Points**: 5 / 5

```
==21382== Memcheck, a memory error detector
==21382== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==21382== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==21382== Command: ./test -r xml "test_btree128_med_rand"
==21382== 
==21382== 
==21382== HEAP SUMMARY:
==21382==     in use at exit: 0 bytes in 0 blocks
==21382==   total heap usage: 2,615 allocs, 2,615 frees, 1,575,760 bytes allocated
==21382== 
==21382== All heap blocks were freed -- no leaks are possible
==21382== 
==21382== For counts of detected and suppressed errors, rerun with: -v
==21382== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_btree128_med_rand" tags="[valgrind][weight=5]" filename="tests/basic.cpp" line="169">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="20001" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="20001" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_btree12_strings

- **Points**: 5 / 5





---

This report was generated for **jialong2** using **c38d18272767cb7cf8b87058aad85193fe8cda21** (from **October 29th 2018, 12:15:00 am**)
