# Dynamic Memory Allocation in C - malloc, free, and buffer overflows

These examples come from the video [Dynamic Memory Allocation in C - malloc, free, and buffer overflows](https://youtu.be/wadj1UH2gVQ) on the [#garyexplains](https://www.youtube.com/channel/UCRjSO-juFtngAeJGJRMdIZw) YouTube channel.

## Tools

| Example      | gcc                |  Infer             | Valgrind           | [TrustInSoft CI](https://ci.trust-in-soft.com/projects/jakub-zwolakowski/garyexplains-dynamic-memory-allocation/1) |
| ------------ | :----------------: | :----------------: | :----------------: | :----------------: |
| `malloc1.c`  | :heavy_minus_sign: | :heavy_minus_sign: | :heavy_minus_sign: | :heavy_check_mark: |
| `malloc1a.c` | :heavy_minus_sign: | :heavy_minus_sign: | :heavy_minus_sign: | :heavy_check_mark: |
| `malloc1b.c` | :heavy_minus_sign: | :heavy_minus_sign: | :heavy_minus_sign: | :heavy_check_mark: |
| `malloc2.c`  | :heavy_minus_sign: | :x:                | :x:                | :x:                |
| `malloc3.c`  | :heavy_minus_sign: | :x:                | :x:                | :x:                |
| `malloc4.c`  | :heavy_minus_sign: | :heavy_minus_sign: | :x:                | :x:                |

### Legend

| Symbol             | Meaning                                                     |
| :----------------: | :---------------------------------------------------------- |
| :heavy_minus_sign: | The tool **does not find** any Undefined Behavior.          |
| :x:                | The tool **detects** the Undefined Behavior.                |
| :heavy_check_mark: | The tool **guarantees** there is **no** Undefined Behavior. |

## TrustInSoft CI

Have a look at the [results of TrustInSoft CI on these examples](https://ci.trust-in-soft.com/projects/jakub-zwolakowski/garyexplains-dynamic-memory-allocation/1).

The [TrustInSoft CI](https://ci.trust-in-soft.com) tool:
- **proves** that indeed the first 3 examples (1, 1a, 1b) are correct, i.e. they have no Undefined Behavior;
- **detects** the Undefined Behaviors in the subsequent 3 examples (2, 3, 4).

This the power of formal-methods-based tools like TrustInSoft CI: it can prove that a piece of code has no Undefined Behavior, while others just do their best to find bugs, but cannot guarantee anything.

NOTE about failing `malloc`: TrustInSoft CI assumes by default that the `malloc` function succeeds. When told to also check the case when `malloc` fails, it only finds a different Undefined Behavior for the example `malloc3.c`, as in this case the first argument given to the `sprintf` function at line 9 may be invalid. All the other examples are robust and do not have any additional Undefined Behaviors when `malloc` fails.
