


## Score: 0/73 (0.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✗ - [0/10] - List::split

- **Points**: 0 / 10


```
Original: out1 == expected_1
Expanded: PNG(w=400, h=240, hash=0)
==
PNG(w=400, h=240, hash=7f399ca10baeec7f)
```


### ✗ - [0/10] - List::merge

- **Points**: 0 / 10


```
Original: out == expected
Expanded: PNG(w=600, h=400, hash=0)
==
PNG(w=600, h=400, hash=0)
```


### ✗ - [0/5] - List::sort #1

- **Points**: 0 / 5


```
Original: b3 == expected
Expanded: PNG(w=900, h=600, hash=0)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::sort #2

- **Points**: 0 / 5


```
Original: b3 == expected
Expanded: PNG(w=900, h=600, hash=0)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::insertFront

- **Points**: 0 / 5


```
Original: list.size() == 10
Expanded: 0 == 10
```


### ✗ - [0/1] - List::begin() returns an iterator to the front of the list

- **Points**: 0 / 1


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 0 / 1


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 0 / 1


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 0 / 1


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 0 / 1


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 0 / 1


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/1] - List::ListIterator::end is reached

- **Points**: 0 / 1


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 0 / 1


```
Original: (bool)(list.begin() != list.end())
Expanded: false
```


### ✗ - [0/5] - List::insertBack

- **Points**: 0 / 5


```
Original: list.size() == 10
Expanded: 0 == 10
```


### ✗ - [0/5] - List::reverse

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=0)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #1

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=0)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #2

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=0)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/10] - List::waterfall

- **Points**: 0 / 10


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=0)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


---

This report was generated for **jialong2** using **b2c8cc5b038ea7d604ef40ee5ae5a864d9f741bc** (from **October 3rd 2018, 12:05:00 am**)