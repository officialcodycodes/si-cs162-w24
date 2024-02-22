# CS 162 SI Table

Use this repository to access all of the activities and resources for the CS 162 SI table for Winter 2023!

## Valgrind
To use Valgrind to check your code for memory leaks, use the following command:
`valgrind ./prog` --> use the executable name in place of "prog"

Flags for valgrind [sourced from StackOverflow](https://stackoverflow.com/questions/5134891/how-do-i-use-valgrind-to-find-memory-leaks) :
```
valgrind --leak-check=full \
         --show-leak-kinds=all \
         --track-origins=yes \
         --verbose \
         --log-file=valgrind-out.txt \
         ./executable exampleParam1
```

### Flag Details
* `--leak-check=full`: "each individual leak will be shown in detail"

* `--show-leak-kinds=all`: Show all of "definite, indirect, possible, reachable" leak kinds in the "full" report.

* `--track-origins=yes`: Favor useful output over speed. This tracks the origins of uninitialized values, which could be very useful for memory errors. Consider turning off if Valgrind is unacceptably slow.

* `--verbose`: Can tell you about unusual behavior of your program. Repeat for more verbosity.

* `--log-file`: Write to a file. Useful when output exceeds terminal space.
