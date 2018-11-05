


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
==31892== Memcheck, a memory error detector
==31892== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31892== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31892== Command: ./test -r xml "LP::testRemoveEASY"
==31892== 
==31892== 
==31892== HEAP SUMMARY:
==31892==     in use at exit: 0 bytes in 0 blocks
==31892==   total heap usage: 1,900 allocs, 1,900 frees, 242,741 bytes allocated
==31892== 
==31892== All heap blocks were freed -- no leaks are possible
==31892== 
==31892== For counts of detected and suppressed errors, rerun with: -v
==31892== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31898== Memcheck, a memory error detector
==31898== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31898== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31898== Command: ./test -r xml "LP::testRemoveHard"
==31898== 
==31898== 
==31898== HEAP SUMMARY:
==31898==     in use at exit: 0 bytes in 0 blocks
==31898==   total heap usage: 1,922 allocs, 1,922 frees, 243,445 bytes allocated
==31898== 
==31898== All heap blocks were freed -- no leaks are possible
==31898== 
==31898== For counts of detected and suppressed errors, rerun with: -v
==31898== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31905== Memcheck, a memory error detector
==31905== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31905== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31905== Command: ./test -r xml "LP::testResizeOnce"
==31905== 
==31905== 
==31905== HEAP SUMMARY:
==31905==     in use at exit: 0 bytes in 0 blocks
==31905==   total heap usage: 2,018 allocs, 2,018 frees, 247,253 bytes allocated
==31905== 
==31905== All heap blocks were freed -- no leaks are possible
==31905== 
==31905== For counts of detected and suppressed errors, rerun with: -v
==31905== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31909== Memcheck, a memory error detector
==31909== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31909== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31909== Command: ./test -r xml "LP::testResizeAll"
==31909== 
==31909== 
==31909== HEAP SUMMARY:
==31909==     in use at exit: 0 bytes in 0 blocks
==31909==   total heap usage: 1,917 allocs, 1,917 frees, 240,741 bytes allocated
==31909== 
==31909== All heap blocks were freed -- no leaks are possible
==31909== 
==31909== For counts of detected and suppressed errors, rerun with: -v
==31909== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31914== Memcheck, a memory error detector
==31914== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31914== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31914== Command: ./test -r xml "LP::testInsertEasy"
==31914== 
==31914== 
==31914== HEAP SUMMARY:
==31914==     in use at exit: 0 bytes in 0 blocks
==31914==   total heap usage: 1,899 allocs, 1,899 frees, 242,709 bytes allocated
==31914== 
==31914== All heap blocks were freed -- no leaks are possible
==31914== 
==31914== For counts of detected and suppressed errors, rerun with: -v
==31914== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31925== Memcheck, a memory error detector
==31925== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31925== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31925== Command: ./test -r xml "LP::testInsertHard"
==31925== 
==31925== 
==31925== HEAP SUMMARY:
==31925==     in use at exit: 0 bytes in 0 blocks
==31925==   total heap usage: 1,921 allocs, 1,921 frees, 243,413 bytes allocated
==31925== 
==31925== All heap blocks were freed -- no leaks are possible
==31925== 
==31925== For counts of detected and suppressed errors, rerun with: -v
==31925== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31929== Memcheck, a memory error detector
==31929== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31929== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31929== Command: ./test -r xml "DH::testRemoveEASY"
==31929== 
==31929== 
==31929== HEAP SUMMARY:
==31929==     in use at exit: 0 bytes in 0 blocks
==31929==   total heap usage: 1,900 allocs, 1,900 frees, 242,741 bytes allocated
==31929== 
==31929== All heap blocks were freed -- no leaks are possible
==31929== 
==31929== For counts of detected and suppressed errors, rerun with: -v
==31929== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31937== Memcheck, a memory error detector
==31937== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31937== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31937== Command: ./test -r xml "DH::testRemoveHard"
==31937== 
==31937== 
==31937== HEAP SUMMARY:
==31937==     in use at exit: 0 bytes in 0 blocks
==31937==   total heap usage: 1,922 allocs, 1,922 frees, 243,445 bytes allocated
==31937== 
==31937== All heap blocks were freed -- no leaks are possible
==31937== 
==31937== For counts of detected and suppressed errors, rerun with: -v
==31937== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31940== Memcheck, a memory error detector
==31940== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31940== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31940== Command: ./test -r xml "DH::testResizeOnce"
==31940== 
==31940== 
==31940== HEAP SUMMARY:
==31940==     in use at exit: 0 bytes in 0 blocks
==31940==   total heap usage: 2,018 allocs, 2,018 frees, 247,253 bytes allocated
==31940== 
==31940== All heap blocks were freed -- no leaks are possible
==31940== 
==31940== For counts of detected and suppressed errors, rerun with: -v
==31940== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31949== Memcheck, a memory error detector
==31949== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31949== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31949== Command: ./test -r xml "DH::testResizeAll"
==31949== 
==31949== 
==31949== HEAP SUMMARY:
==31949==     in use at exit: 0 bytes in 0 blocks
==31949==   total heap usage: 1,917 allocs, 1,917 frees, 240,741 bytes allocated
==31949== 
==31949== All heap blocks were freed -- no leaks are possible
==31949== 
==31949== For counts of detected and suppressed errors, rerun with: -v
==31949== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31952== Memcheck, a memory error detector
==31952== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31952== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31952== Command: ./test -r xml "DH::testInsertEasy"
==31952== 
==31952== 
==31952== HEAP SUMMARY:
==31952==     in use at exit: 0 bytes in 0 blocks
==31952==   total heap usage: 1,899 allocs, 1,899 frees, 242,709 bytes allocated
==31952== 
==31952== All heap blocks were freed -- no leaks are possible
==31952== 
==31952== For counts of detected and suppressed errors, rerun with: -v
==31952== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31963== Memcheck, a memory error detector
==31963== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31963== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31963== Command: ./test -r xml "DH::testInsertHard"
==31963== 
==31963== 
==31963== HEAP SUMMARY:
==31963==     in use at exit: 0 bytes in 0 blocks
==31963==   total heap usage: 1,921 allocs, 1,921 frees, 243,413 bytes allocated
==31963== 
==31963== All heap blocks were freed -- no leaks are possible
==31963== 
==31963== For counts of detected and suppressed errors, rerun with: -v
==31963== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31998== Memcheck, a memory error detector
==31998== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==31998== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==31998== Command: ./test -r xml "SC::testRemoveEASY"
==31998== 
==31998== 
==31998== HEAP SUMMARY:
==31998==     in use at exit: 0 bytes in 0 blocks
==31998==   total heap usage: 1,899 allocs, 1,899 frees, 243,448 bytes allocated
==31998== 
==31998== All heap blocks were freed -- no leaks are possible
==31998== 
==31998== For counts of detected and suppressed errors, rerun with: -v
==31998== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32042== Memcheck, a memory error detector
==32042== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32042== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==32042== Command: ./test -r xml "SC::testRemoveHard"
==32042== 
==32042== 
==32042== HEAP SUMMARY:
==32042==     in use at exit: 0 bytes in 0 blocks
==32042==   total heap usage: 1,921 allocs, 1,921 frees, 244,328 bytes allocated
==32042== 
==32042== All heap blocks were freed -- no leaks are possible
==32042== 
==32042== For counts of detected and suppressed errors, rerun with: -v
==32042== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32053== Memcheck, a memory error detector
==32053== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32053== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==32053== Command: ./test -r xml "SC::testResizeOnce"
==32053== 
==32053== 
==32053== HEAP SUMMARY:
==32053==     in use at exit: 3,136 bytes in 40 blocks
==32053==   total heap usage: 2,053 allocs, 2,013 frees, 251,816 bytes allocated
==32053== 
==32053== 992 (416 direct, 576 indirect) bytes in 1 blocks are definitely lost in loss record 2 of 4
==32053==    at 0x4C29C23: malloc (vg_replace_malloc.c:299)
==32053==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==32053==    by 0x440685: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::SCHashTable(unsigned long) (schashtable.cpp:22)
==32053==    by 0x43D36B: ____C_A_T_C_H____T_E_S_T____4() (test-sc.cpp:66)
==32053==    by 0x474142: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==32053==    by 0x4649F6: Catch::TestCase::invoke() const (catch.hpp:9771)
==32053==    by 0x464928: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==32053==    by 0x4616C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==32053==    by 0x45FD21: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==32053==    by 0x468A83: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==32053==    by 0x46750E: Catch::Session::runInternal() (catch.hpp:9151)
==32053==    by 0x4671EE: Catch::Session::run() (catch.hpp:9108)
==32053== 
==32053== 2,144 (896 direct, 1,248 indirect) bytes in 1 blocks are definitely lost in loss record 4 of 4
==32053==    at 0x4C29C23: malloc (vg_replace_malloc.c:299)
==32053==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==32053==    by 0x44301E: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::resizeTable() (schashtable.cpp:163)
==32053==    by 0x441915: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::insert(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int const&) (schashtable.cpp:68)
==32053==    by 0x43D415: ____C_A_T_C_H____T_E_S_T____4() (test-sc.cpp:72)
==32053==    by 0x474142: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==32053==    by 0x4649F6: Catch::TestCase::invoke() const (catch.hpp:9771)
==32053==    by 0x464928: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==32053==    by 0x4616C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==32053==    by 0x45FD21: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==32053==    by 0x468A83: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==32053==    by 0x46750E: Catch::Session::runInternal() (catch.hpp:9151)
==32053== 
==32053== LEAK SUMMARY:
==32053==    definitely lost: 1,312 bytes in 2 blocks
==32053==    indirectly lost: 1,824 bytes in 38 blocks
==32053==      possibly lost: 0 bytes in 0 blocks
==32053==    still reachable: 0 bytes in 0 blocks
==32053==         suppressed: 0 bytes in 0 blocks
==32053== 
==32053== For counts of detected and suppressed errors, rerun with: -v
==32053== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

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
==32083== Memcheck, a memory error detector
==32083== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32083== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==32083== Command: ./test -r xml "SC::testResizeAll"
==32083== 
==32083== 
==32083== HEAP SUMMARY:
==32083==     in use at exit: 3,136 bytes in 40 blocks
==32083==   total heap usage: 1,952 allocs, 1,912 frees, 245,000 bytes allocated
==32083== 
==32083== 992 (416 direct, 576 indirect) bytes in 1 blocks are definitely lost in loss record 2 of 4
==32083==    at 0x4C29C23: malloc (vg_replace_malloc.c:299)
==32083==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==32083==    by 0x440685: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::SCHashTable(unsigned long) (schashtable.cpp:22)
==32083==    by 0x43E2B3: ____C_A_T_C_H____T_E_S_T____6() (test-sc.cpp:93)
==32083==    by 0x474142: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==32083==    by 0x4649F6: Catch::TestCase::invoke() const (catch.hpp:9771)
==32083==    by 0x464928: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==32083==    by 0x4616C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==32083==    by 0x45FD21: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==32083==    by 0x468A83: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==32083==    by 0x46750E: Catch::Session::runInternal() (catch.hpp:9151)
==32083==    by 0x4671EE: Catch::Session::run() (catch.hpp:9108)
==32083== 
==32083== 2,144 (896 direct, 1,248 indirect) bytes in 1 blocks are definitely lost in loss record 4 of 4
==32083==    at 0x4C29C23: malloc (vg_replace_malloc.c:299)
==32083==    by 0x50EED29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==32083==    by 0x44301E: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::resizeTable() (schashtable.cpp:163)
==32083==    by 0x441915: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::insert(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int const&) (schashtable.cpp:68)
==32083==    by 0x43E375: ____C_A_T_C_H____T_E_S_T____6() (test-sc.cpp:97)
==32083==    by 0x474142: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==32083==    by 0x4649F6: Catch::TestCase::invoke() const (catch.hpp:9771)
==32083==    by 0x464928: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==32083==    by 0x4616C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==32083==    by 0x45FD21: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==32083==    by 0x468A83: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==32083==    by 0x46750E: Catch::Session::runInternal() (catch.hpp:9151)
==32083== 
==32083== LEAK SUMMARY:
==32083==    definitely lost: 1,312 bytes in 2 blocks
==32083==    indirectly lost: 1,824 bytes in 38 blocks
==32083==      possibly lost: 0 bytes in 0 blocks
==32083==    still reachable: 0 bytes in 0 blocks
==32083==         suppressed: 0 bytes in 0 blocks
==32083== 
==32083== For counts of detected and suppressed errors, rerun with: -v
==32083== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

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
==32105== Memcheck, a memory error detector
==32105== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32105== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==32105== Command: ./test -r xml "SC::testInsertEasy"
==32105== 
==32105== 
==32105== HEAP SUMMARY:
==32105==     in use at exit: 0 bytes in 0 blocks
==32105==   total heap usage: 1,898 allocs, 1,898 frees, 243,400 bytes allocated
==32105== 
==32105== All heap blocks were freed -- no leaks are possible
==32105== 
==32105== For counts of detected and suppressed errors, rerun with: -v
==32105== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32137== Memcheck, a memory error detector
==32137== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32137== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==32137== Command: ./test -r xml "SC::testInsertHard"
==32137== 
==32137== 
==32137== HEAP SUMMARY:
==32137==     in use at exit: 0 bytes in 0 blocks
==32137==   total heap usage: 1,920 allocs, 1,920 frees, 244,280 bytes allocated
==32137== 
==32137== All heap blocks were freed -- no leaks are possible
==32137== 
==32137== For counts of detected and suppressed errors, rerun with: -v
==32137== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
