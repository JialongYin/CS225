


## Score: 132/150 (88.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c hashes.cpp -o .objs/hashes.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c textfile.cpp -o .objs/textfile.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/test-lp.cpp -o .objs/tests/test-lp.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/test-dh.cpp -o .objs/tests/test-dh.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/test-sc.cpp -o .objs/tests/test-sc.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/hashes.o .objs/textfile.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/test-lp.o .objs/tests/test-dh.o .objs/tests/test-sc.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lpthread -o test

```


### ✓ - [6/6] - LP::testRemoveEASY

- **Points**: 6 / 6

```
==24383== Memcheck, a memory error detector
==24383== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24383== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24383== Command: ./test -r xml "LP::testRemoveEASY"
==24383== 
==24383== 
==24383== HEAP SUMMARY:
==24383==     in use at exit: 0 bytes in 0 blocks
==24383==   total heap usage: 1,900 allocs, 1,900 frees, 242,741 bytes allocated
==24383== 
==24383== All heap blocks were freed -- no leaks are possible
==24383== 
==24383== For counts of detected and suppressed errors, rerun with: -v
==24383== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/test-lp.cpp" line="13">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - LP::testRemoveHard

- **Points**: 10 / 10

```
==24386== Memcheck, a memory error detector
==24386== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24386== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24386== Command: ./test -r xml "LP::testRemoveHard"
==24386== 
==24386== 
==24386== HEAP SUMMARY:
==24386==     in use at exit: 0 bytes in 0 blocks
==24386==   total heap usage: 1,922 allocs, 1,922 frees, 243,445 bytes allocated
==24386== 
==24386== All heap blocks were freed -- no leaks are possible
==24386== 
==24386== For counts of detected and suppressed errors, rerun with: -v
==24386== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/test-lp.cpp" line="35">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - LP::testResizeOnce

- **Points**: 7 / 7

```
==24390== Memcheck, a memory error detector
==24390== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24390== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24390== Command: ./test -r xml "LP::testResizeOnce"
==24390== 
==24390== 
==24390== HEAP SUMMARY:
==24390==     in use at exit: 0 bytes in 0 blocks
==24390==   total heap usage: 2,018 allocs, 2,018 frees, 247,253 bytes allocated
==24390== 
==24390== All heap blocks were freed -- no leaks are possible
==24390== 
==24390== For counts of detected and suppressed errors, rerun with: -v
==24390== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/test-lp.cpp" line="63">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - LP::testResizeAll

- **Points**: 11 / 11

```
==24393== Memcheck, a memory error detector
==24393== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24393== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24393== Command: ./test -r xml "LP::testResizeAll"
==24393== 
==24393== 
==24393== HEAP SUMMARY:
==24393==     in use at exit: 0 bytes in 0 blocks
==24393==   total heap usage: 1,917 allocs, 1,917 frees, 240,741 bytes allocated
==24393== 
==24393== All heap blocks were freed -- no leaks are possible
==24393== 
==24393== For counts of detected and suppressed errors, rerun with: -v
==24393== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeAll" tags="[valgrind][weight=11]" filename="tests/test-lp.cpp" line="84">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - LP::testInsertEasy

- **Points**: 6 / 6

```
==24402== Memcheck, a memory error detector
==24402== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24402== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24402== Command: ./test -r xml "LP::testInsertEasy"
==24402== 
==24402== 
==24402== HEAP SUMMARY:
==24402==     in use at exit: 0 bytes in 0 blocks
==24402==   total heap usage: 1,899 allocs, 1,899 frees, 242,709 bytes allocated
==24402== 
==24402== All heap blocks were freed -- no leaks are possible
==24402== 
==24402== For counts of detected and suppressed errors, rerun with: -v
==24402== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/test-lp.cpp" line="111">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - LP::testInsertHard

- **Points**: 10 / 10

```
==24411== Memcheck, a memory error detector
==24411== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24411== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24411== Command: ./test -r xml "LP::testInsertHard"
==24411== 
==24411== 
==24411== HEAP SUMMARY:
==24411==     in use at exit: 0 bytes in 0 blocks
==24411==   total heap usage: 1,921 allocs, 1,921 frees, 243,413 bytes allocated
==24411== 
==24411== All heap blocks were freed -- no leaks are possible
==24411== 
==24411== For counts of detected and suppressed errors, rerun with: -v
==24411== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertHard" tags="[valgrind][weight=10]" filename="tests/test-lp.cpp" line="131">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - DH::testRemoveEASY

- **Points**: 6 / 6

```
==24416== Memcheck, a memory error detector
==24416== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24416== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24416== Command: ./test -r xml "DH::testRemoveEASY"
==24416== 
==24416== 
==24416== HEAP SUMMARY:
==24416==     in use at exit: 0 bytes in 0 blocks
==24416==   total heap usage: 1,900 allocs, 1,900 frees, 242,741 bytes allocated
==24416== 
==24416== All heap blocks were freed -- no leaks are possible
==24416== 
==24416== For counts of detected and suppressed errors, rerun with: -v
==24416== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/test-dh.cpp" line="15">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - DH::testRemoveHard

- **Points**: 10 / 10

```
==24418== Memcheck, a memory error detector
==24418== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24418== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24418== Command: ./test -r xml "DH::testRemoveHard"
==24418== 
==24418== 
==24418== HEAP SUMMARY:
==24418==     in use at exit: 0 bytes in 0 blocks
==24418==   total heap usage: 1,922 allocs, 1,922 frees, 243,445 bytes allocated
==24418== 
==24418== All heap blocks were freed -- no leaks are possible
==24418== 
==24418== For counts of detected and suppressed errors, rerun with: -v
==24418== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/test-dh.cpp" line="36">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - DH::testResizeOnce

- **Points**: 7 / 7

```
==24421== Memcheck, a memory error detector
==24421== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24421== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24421== Command: ./test -r xml "DH::testResizeOnce"
==24421== 
==24421== 
==24421== HEAP SUMMARY:
==24421==     in use at exit: 0 bytes in 0 blocks
==24421==   total heap usage: 2,018 allocs, 2,018 frees, 247,253 bytes allocated
==24421== 
==24421== All heap blocks were freed -- no leaks are possible
==24421== 
==24421== For counts of detected and suppressed errors, rerun with: -v
==24421== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/test-dh.cpp" line="64">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - DH::testResizeAll

- **Points**: 11 / 11

```
==24433== Memcheck, a memory error detector
==24433== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24433== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24433== Command: ./test -r xml "DH::testResizeAll"
==24433== 
==24433== 
==24433== HEAP SUMMARY:
==24433==     in use at exit: 0 bytes in 0 blocks
==24433==   total heap usage: 1,917 allocs, 1,917 frees, 240,741 bytes allocated
==24433== 
==24433== All heap blocks were freed -- no leaks are possible
==24433== 
==24433== For counts of detected and suppressed errors, rerun with: -v
==24433== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeAll" tags="[valgrind][weight=11]" filename="tests/test-dh.cpp" line="85">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - DH::testInsertEasy

- **Points**: 6 / 6

```
==24439== Memcheck, a memory error detector
==24439== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24439== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24439== Command: ./test -r xml "DH::testInsertEasy"
==24439== 
==24439== 
==24439== HEAP SUMMARY:
==24439==     in use at exit: 0 bytes in 0 blocks
==24439==   total heap usage: 1,899 allocs, 1,899 frees, 242,709 bytes allocated
==24439== 
==24439== All heap blocks were freed -- no leaks are possible
==24439== 
==24439== For counts of detected and suppressed errors, rerun with: -v
==24439== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/test-dh.cpp" line="111">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - DH::testInsertHard

- **Points**: 10 / 10

```
==24443== Memcheck, a memory error detector
==24443== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24443== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24443== Command: ./test -r xml "DH::testInsertHard"
==24443== 
==24443== 
==24443== HEAP SUMMARY:
==24443==     in use at exit: 0 bytes in 0 blocks
==24443==   total heap usage: 1,921 allocs, 1,921 frees, 243,413 bytes allocated
==24443== 
==24443== All heap blocks were freed -- no leaks are possible
==24443== 
==24443== For counts of detected and suppressed errors, rerun with: -v
==24443== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertHard" tags="[valgrind][weight=10]" filename="tests/test-dh.cpp" line="131">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testRemoveEASY

- **Points**: 6 / 6

```
==24446== Memcheck, a memory error detector
==24446== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24446== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24446== Command: ./test -r xml "SC::testRemoveEASY"
==24446== 
==24446== 
==24446== HEAP SUMMARY:
==24446==     in use at exit: 0 bytes in 0 blocks
==24446==   total heap usage: 1,899 allocs, 1,899 frees, 243,448 bytes allocated
==24446== 
==24446== All heap blocks were freed -- no leaks are possible
==24446== 
==24446== For counts of detected and suppressed errors, rerun with: -v
==24446== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/test-sc.cpp" line="14">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testRemoveHard

- **Points**: 10 / 10

```
==24453== Memcheck, a memory error detector
==24453== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24453== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24453== Command: ./test -r xml "SC::testRemoveHard"
==24453== 
==24453== 
==24453== HEAP SUMMARY:
==24453==     in use at exit: 0 bytes in 0 blocks
==24453==   total heap usage: 1,921 allocs, 1,921 frees, 244,328 bytes allocated
==24453== 
==24453== All heap blocks were freed -- no leaks are possible
==24453== 
==24453== For counts of detected and suppressed errors, rerun with: -v
==24453== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/test-sc.cpp" line="35">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/7] - SC::testResizeOnce

- **Points**: 0 / 7

```
==24462== Memcheck, a memory error detector
==24462== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24462== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24462== Command: ./test -r xml "SC::testResizeOnce"
==24462== 
==24462== 
==24462== HEAP SUMMARY:
==24462==     in use at exit: 3,136 bytes in 40 blocks
==24462==   total heap usage: 2,053 allocs, 2,013 frees, 251,816 bytes allocated
==24462== 
==24462== 992 (416 direct, 576 indirect) bytes in 1 blocks are definitely lost in loss record 2 of 4
==24462==    at 0x4C29C23: malloc (vg_replace_malloc.c:299)
==24462==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==24462==    by 0x440685: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::SCHashTable(unsigned long) (schashtable.cpp:22)
==24462==    by 0x43D36B: ____C_A_T_C_H____T_E_S_T____4() (test-sc.cpp:66)
==24462==    by 0x474142: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==24462==    by 0x4649F6: Catch::TestCase::invoke() const (catch.hpp:9771)
==24462==    by 0x464928: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==24462==    by 0x4616C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==24462==    by 0x45FD21: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==24462==    by 0x468A83: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==24462==    by 0x46750E: Catch::Session::runInternal() (catch.hpp:9151)
==24462==    by 0x4671EE: Catch::Session::run() (catch.hpp:9108)
==24462== 
==24462== 2,144 (896 direct, 1,248 indirect) bytes in 1 blocks are definitely lost in loss record 4 of 4
==24462==    at 0x4C29C23: malloc (vg_replace_malloc.c:299)
==24462==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==24462==    by 0x44301E: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::resizeTable() (schashtable.cpp:163)
==24462==    by 0x441915: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::insert(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int const&) (schashtable.cpp:68)
==24462==    by 0x43D415: ____C_A_T_C_H____T_E_S_T____4() (test-sc.cpp:72)
==24462==    by 0x474142: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==24462==    by 0x4649F6: Catch::TestCase::invoke() const (catch.hpp:9771)
==24462==    by 0x464928: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==24462==    by 0x4616C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==24462==    by 0x45FD21: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==24462==    by 0x468A83: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==24462==    by 0x46750E: Catch::Session::runInternal() (catch.hpp:9151)
==24462== 
==24462== LEAK SUMMARY:
==24462==    definitely lost: 1,312 bytes in 2 blocks
==24462==    indirectly lost: 1,824 bytes in 38 blocks
==24462==      possibly lost: 0 bytes in 0 blocks
==24462==    still reachable: 0 bytes in 0 blocks
==24462==         suppressed: 0 bytes in 0 blocks
==24462== 
==24462== For counts of detected and suppressed errors, rerun with: -v
==24462== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/test-sc.cpp" line="63">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/11] - SC::testResizeAll

- **Points**: 0 / 11

```
==24467== Memcheck, a memory error detector
==24467== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24467== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24467== Command: ./test -r xml "SC::testResizeAll"
==24467== 
==24467== 
==24467== HEAP SUMMARY:
==24467==     in use at exit: 3,136 bytes in 40 blocks
==24467==   total heap usage: 1,952 allocs, 1,912 frees, 245,000 bytes allocated
==24467== 
==24467== 992 (416 direct, 576 indirect) bytes in 1 blocks are definitely lost in loss record 2 of 4
==24467==    at 0x4C29C23: malloc (vg_replace_malloc.c:299)
==24467==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==24467==    by 0x440685: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::SCHashTable(unsigned long) (schashtable.cpp:22)
==24467==    by 0x43E2B3: ____C_A_T_C_H____T_E_S_T____6() (test-sc.cpp:93)
==24467==    by 0x474142: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==24467==    by 0x4649F6: Catch::TestCase::invoke() const (catch.hpp:9771)
==24467==    by 0x464928: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==24467==    by 0x4616C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==24467==    by 0x45FD21: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==24467==    by 0x468A83: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==24467==    by 0x46750E: Catch::Session::runInternal() (catch.hpp:9151)
==24467==    by 0x4671EE: Catch::Session::run() (catch.hpp:9108)
==24467== 
==24467== 2,144 (896 direct, 1,248 indirect) bytes in 1 blocks are definitely lost in loss record 4 of 4
==24467==    at 0x4C29C23: malloc (vg_replace_malloc.c:299)
==24467==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==24467==    by 0x44301E: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::resizeTable() (schashtable.cpp:163)
==24467==    by 0x441915: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::insert(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int const&) (schashtable.cpp:68)
==24467==    by 0x43E375: ____C_A_T_C_H____T_E_S_T____6() (test-sc.cpp:97)
==24467==    by 0x474142: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==24467==    by 0x4649F6: Catch::TestCase::invoke() const (catch.hpp:9771)
==24467==    by 0x464928: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==24467==    by 0x4616C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==24467==    by 0x45FD21: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==24467==    by 0x468A83: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==24467==    by 0x46750E: Catch::Session::runInternal() (catch.hpp:9151)
==24467== 
==24467== LEAK SUMMARY:
==24467==    definitely lost: 1,312 bytes in 2 blocks
==24467==    indirectly lost: 1,824 bytes in 38 blocks
==24467==      possibly lost: 0 bytes in 0 blocks
==24467==    still reachable: 0 bytes in 0 blocks
==24467==         suppressed: 0 bytes in 0 blocks
==24467== 
==24467== For counts of detected and suppressed errors, rerun with: -v
==24467== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeAll" tags="[valgrind][weight=11]" filename="tests/test-sc.cpp" line="84">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testInsertEasy

- **Points**: 6 / 6

```
==24470== Memcheck, a memory error detector
==24470== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24470== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24470== Command: ./test -r xml "SC::testInsertEasy"
==24470== 
==24470== 
==24470== HEAP SUMMARY:
==24470==     in use at exit: 0 bytes in 0 blocks
==24470==   total heap usage: 1,898 allocs, 1,898 frees, 243,400 bytes allocated
==24470== 
==24470== All heap blocks were freed -- no leaks are possible
==24470== 
==24470== For counts of detected and suppressed errors, rerun with: -v
==24470== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/test-sc.cpp" line="110">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testInsertHard

- **Points**: 10 / 10

```
==24474== Memcheck, a memory error detector
==24474== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==24474== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==24474== Command: ./test -r xml "SC::testInsertHard"
==24474== 
==24474== 
==24474== HEAP SUMMARY:
==24474==     in use at exit: 0 bytes in 0 blocks
==24474==   total heap usage: 1,920 allocs, 1,920 frees, 244,280 bytes allocated
==24474== 
==24474== All heap blocks were freed -- no leaks are possible
==24474== 
==24474== For counts of detected and suppressed errors, rerun with: -v
==24474== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertHard" tags="[valgrind][weight=10]" filename="tests/test-sc.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **jialong2** using **a9eabee3ff074654d8107dfc350917f112d86731** (from **November 5th 2018, 12:15:00 am**)
