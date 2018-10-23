


## Score: 50/50 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c coloredout.cpp -o .objs/coloredout.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/basic.cpp -o .objs/tests/basic.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/coloredout.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/basic.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lpthread -o test

```


### ✓ - [10/10] - test_find

- **Points**: 10 / 10

```
==8014== Memcheck, a memory error detector
==8014== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8014== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8014== Command: ./test -r xml "test_find"
==8014== 
==8014== 
==8014== HEAP SUMMARY:
==8014==     in use at exit: 0 bytes in 0 blocks
==8014==   total heap usage: 1,687 allocs, 1,687 frees, 217,400 bytes allocated
==8014== 
==8014== All heap blocks were freed -- no leaks are possible
==8014== 
==8014== For counts of detected and suppressed errors, rerun with: -v
==8014== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_find" tags="[valgrind][weight=10]" filename="tests/basic.cpp" line="34">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="5" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="5" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_insert_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_insert_find

- **Points**: 10 / 10





### ✓ - [10/10] - test_insert_big

- **Points**: 10 / 10

```
==8019== Memcheck, a memory error detector
==8019== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8019== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8019== Command: ./test -r xml "test_insert_big"
==8019== 
==8019== 
==8019== HEAP SUMMARY:
==8019==     in use at exit: 0 bytes in 0 blocks
==8019==   total heap usage: 1,731 allocs, 1,731 frees, 226,684 bytes allocated
==8019== 
==8019== All heap blocks were freed -- no leaks are possible
==8019== 
==8019== For counts of detected and suppressed errors, rerun with: -v
==8019== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_insert_big" tags="[valgrind][weight=10]" filename="tests/basic.cpp" line="104">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_remove_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_remove_big

- **Points**: 10 / 10

```
==8024== Memcheck, a memory error detector
==8024== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8024== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==8024== Command: ./test -r xml "test_remove_big"
==8024== 
==8024== 
==8024== HEAP SUMMARY:
==8024==     in use at exit: 0 bytes in 0 blocks
==8024==   total heap usage: 1,743 allocs, 1,743 frees, 228,348 bytes allocated
==8024== 
==8024== All heap blocks were freed -- no leaks are possible
==8024== 
==8024== For counts of detected and suppressed errors, rerun with: -v
==8024== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_remove_big" tags="[valgrind][weight=10]" filename="tests/basic.cpp" line="172">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **jialong2** using **7a91b07d9e67c712a02c569fdf6e0a4af5ee503f** (from **October 22nd 2018, 12:15:00 am**)
