


## Score: 10/10 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c graph.cpp -o .objs/graph.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c NetworkFlow.cpp -o .objs/NetworkFlow.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/unit_tests.cpp -o .objs/tests/unit_tests.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/graph.o .objs/NetworkFlow.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/unit_tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lpthread -o test

```


### ✓ - [1/1] - Graph a - 4 -> b  has flow of 4.

- **Points**: 1 / 1

```
==9508== Memcheck, a memory error detector
==9508== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9508== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9508== Command: ./test -r xml "Graph\ a\ -\ 4\ -\>\ b\ \ has\ flow\ of\ 4."
==9508== 
==9508== 
==9508== HEAP SUMMARY:
==9508==     in use at exit: 0 bytes in 0 blocks
==9508==   total heap usage: 2,021 allocs, 2,021 frees, 237,024 bytes allocated
==9508== 
==9508== All heap blocks were freed -- no leaks are possible
==9508== 
==9508== For counts of detected and suppressed errors, rerun with: -v
==9508== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Graph a - 4 -> b  has flow of 4." tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="10">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing flow through two pipes - secret test

- **Points**: 1 / 1

```
==9513== Memcheck, a memory error detector
==9513== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9513== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9513== Command: ./test -r xml "Testing\ flow\ through\ two\ pipes\ -\ secret\ test"
==9513== 
==9513== 
==9513== HEAP SUMMARY:
==9513==     in use at exit: 0 bytes in 0 blocks
==9513==   total heap usage: 2,063 allocs, 2,063 frees, 240,248 bytes allocated
==9513== 
==9513== All heap blocks were freed -- no leaks are possible
==9513== 
==9513== For counts of detected and suppressed errors, rerun with: -v
==9513== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing flow through two pipes - secret test" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="23">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Graph a - 10 -> b  has flow of 10.

- **Points**: 1 / 1

```
==9524== Memcheck, a memory error detector
==9524== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9524== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9524== Command: ./test -r xml "Graph\ a\ -\ 10\ -\>\ b\ \ has\ flow\ of\ 10."
==9524== 
==9524== 
==9524== HEAP SUMMARY:
==9524==     in use at exit: 0 bytes in 0 blocks
==9524==   total heap usage: 2,021 allocs, 2,021 frees, 237,024 bytes allocated
==9524== 
==9524== All heap blocks were freed -- no leaks are possible
==9524== 
==9524== For counts of detected and suppressed errors, rerun with: -v
==9524== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Graph a - 10 -> b  has flow of 10." tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="40">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing flow through two pipes

- **Points**: 1 / 1

```
==9548== Memcheck, a memory error detector
==9548== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9548== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9548== Command: ./test -r xml "Testing\ flow\ through\ two\ pipes"
==9548== 
==9548== 
==9548== HEAP SUMMARY:
==9548==     in use at exit: 0 bytes in 0 blocks
==9548==   total heap usage: 2,063 allocs, 2,063 frees, 240,024 bytes allocated
==9548== 
==9548== All heap blocks were freed -- no leaks are possible
==9548== 
==9548== For counts of detected and suppressed errors, rerun with: -v
==9548== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing flow through two pipes" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="53">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing simple backflow - secret

- **Points**: 1 / 1

```
==9560== Memcheck, a memory error detector
==9560== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9560== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9560== Command: ./test -r xml "Testing\ simple\ backflow\ -\ secret"
==9560== 
==9560== 
==9560== HEAP SUMMARY:
==9560==     in use at exit: 0 bytes in 0 blocks
==9560==   total heap usage: 2,129 allocs, 2,129 frees, 245,664 bytes allocated
==9560== 
==9560== All heap blocks were freed -- no leaks are possible
==9560== 
==9560== For counts of detected and suppressed errors, rerun with: -v
==9560== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing simple backflow - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="70">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing simple backflow

- **Points**: 1 / 1

```
==9575== Memcheck, a memory error detector
==9575== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9575== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9575== Command: ./test -r xml "Testing\ simple\ backflow"
==9575== 
==9575== 
==9575== HEAP SUMMARY:
==9575==     in use at exit: 0 bytes in 0 blocks
==9575==   total heap usage: 2,109 allocs, 2,109 frees, 241,544 bytes allocated
==9575== 
==9575== All heap blocks were freed -- no leaks are possible
==9575== 
==9575== For counts of detected and suppressed errors, rerun with: -v
==9575== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing simple backflow" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing full pipe usage - secret

- **Points**: 1 / 1

```
==9596== Memcheck, a memory error detector
==9596== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9596== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9596== Command: ./test -r xml "Testing\ full\ pipe\ usage\ -\ secret"
==9596== 
==9596== 
==9596== HEAP SUMMARY:
==9596==     in use at exit: 0 bytes in 0 blocks
==9596==   total heap usage: 2,142 allocs, 2,142 frees, 246,744 bytes allocated
==9596== 
==9596== All heap blocks were freed -- no leaks are possible
==9596== 
==9596== For counts of detected and suppressed errors, rerun with: -v
==9596== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing full pipe usage - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="114">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing full pipe usage

- **Points**: 1 / 1

```
==9606== Memcheck, a memory error detector
==9606== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9606== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9606== Command: ./test -r xml "Testing\ full\ pipe\ usage"
==9606== 
==9606== 
==9606== HEAP SUMMARY:
==9606==     in use at exit: 0 bytes in 0 blocks
==9606==   total heap usage: 2,156 allocs, 2,156 frees, 244,952 bytes allocated
==9606== 
==9606== All heap blocks were freed -- no leaks are possible
==9606== 
==9606== For counts of detected and suppressed errors, rerun with: -v
==9606== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing full pipe usage" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="139">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing 3 x 3 plumbing - secret

- **Points**: 1 / 1

```
==9650== Memcheck, a memory error detector
==9650== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9650== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9650== Command: ./test -r xml "Testing\ 3\ x\ 3\ plumbing\ -\ secret"
==9650== 
==9650== 
==9650== HEAP SUMMARY:
==9650==     in use at exit: 0 bytes in 0 blocks
==9650==   total heap usage: 2,225 allocs, 2,225 frees, 254,200 bytes allocated
==9650== 
==9650== All heap blocks were freed -- no leaks are possible
==9650== 
==9650== For counts of detected and suppressed errors, rerun with: -v
==9650== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing 3 x 3 plumbing - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="164">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing 3 x 3 plumbing

- **Points**: 1 / 1

```
==9666== Memcheck, a memory error detector
==9666== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9666== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9666== Command: ./test -r xml "Testing\ 3\ x\ 3\ plumbing"
==9666== 
==9666== 
==9666== HEAP SUMMARY:
==9666==     in use at exit: 0 bytes in 0 blocks
==9666==   total heap usage: 2,226 allocs, 2,226 frees, 252,240 bytes allocated
==9666== 
==9666== All heap blocks were freed -- no leaks are possible
==9666== 
==9666== For counts of detected and suppressed errors, rerun with: -v
==9666== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing 3 x 3 plumbing" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="203">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **jialong2** using **c890eadda4ecdbd6e60c83ba299ff06b3bda369f** (from **December 10th 2018, 12:15:00 am**)
