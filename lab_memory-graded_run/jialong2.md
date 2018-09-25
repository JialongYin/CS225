


## Score: 100/100 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  tests/catchlib.cpp -o tests/catchlib.o
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  tests/unit_tests.cpp -o tests/unit_tests.o
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  tests/catch_main.cpp -o tests/catch_main.o
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  letter.cpp -o .objs/letter.o
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  room.cpp -o .objs/room.o
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  allocator.cpp -o .objs/allocator.o
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  fileio.cpp -o .objs/fileio.o
clang++ tests/catchlib.o tests/unit_tests.o tests/catch_main.o .objs/letter.o .objs/room.o .objs/allocator.o .objs/fileio.o -std=c++1y -stdlib=libc++ -lpthread  -o test

```


### ✓ - [5/5] - Test the constructor (valgrind)

- **Points**: 5 / 5

```
==16912== Memcheck, a memory error detector
==16912== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16912== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==16912== Command: ./test -r xml "Test\ the\ constructor\ (valgrind)"
==16912== 
==16912== 
==16912== HEAP SUMMARY:
==16912==     in use at exit: 0 bytes in 0 blocks
==16912==   total heap usage: 2,522 allocs, 2,522 frees, 279,888 bytes allocated
==16912== 
==16912== All heap blocks were freed -- no leaks are possible
==16912== 
==16912== For counts of detected and suppressed errors, rerun with: -v
==16912== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test the constructor (valgrind)" tags="[valgrind][weight=5]" filename="tests/unit_tests.cpp" line="17">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - Test allocate() (valgrind)

- **Points**: 5 / 5

```
==16924== Memcheck, a memory error detector
==16924== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16924== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==16924== Command: ./test -r xml "Test\ allocate()\ (valgrind)"
==16924== 
==16924== 
==16924== HEAP SUMMARY:
==16924==     in use at exit: 0 bytes in 0 blocks
==16924==   total heap usage: 2,522 allocs, 2,522 frees, 277,616 bytes allocated
==16924== 
==16924== All heap blocks were freed -- no leaks are possible
==16924== 
==16924== For counts of detected and suppressed errors, rerun with: -v
==16924== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test allocate() (valgrind)" tags="[valgrind][weight=5]" filename="tests/unit_tests.cpp" line="24">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [20/20] - Test printRooms() (valgrind)

- **Points**: 20 / 20

```
==16973== Memcheck, a memory error detector
==16973== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16973== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==16973== Command: ./test -r xml "Test\ printRooms()\ (valgrind)"
==16973== 
==16973== 
==16973== HEAP SUMMARY:
==16973==     in use at exit: 0 bytes in 0 blocks
==16973==   total heap usage: 2,526 allocs, 2,526 frees, 278,336 bytes allocated
==16973== 
==16973== All heap blocks were freed -- no leaks are possible
==16973== 
==16973== For counts of detected and suppressed errors, rerun with: -v
==16973== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test printRooms() (valgrind)" tags="[valgrind][weight=20]" filename="tests/unit_tests.cpp" line="32">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [30/30] - Test printRooms() for overall output

- **Points**: 30 / 30





### ✓ - [40/40] - Test printRooms() for individual output

- **Points**: 40 / 40





---

This report was generated for **jialong2** using **12c3d54cc4a0fffc89b1cac5678886969dc87d21** (from **September 17th 2018, 1:00:00 am**)
