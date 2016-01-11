# Print the start of the stack and the address of printf

### With ASR enabled (default)
```
fahmed@hasselhoff: ~/src/asr-test$ ./addrs
stack:	0x7fff422a7aac
printf:	0x7f93628c8400
fahmed@hasselhoff: ~/src/asr-test$ ./addrs
stack:	0x7fffb285c1fc
printf:	0x7fd503631400
fahmed@hasselhoff: ~/src/asr-test$ ./addrs
stack:	0x7fff0098b7cc
printf:	0x7f2bd2e70400
```

### With ASR disabled
```
fahmed@hasselhoff: ~/src/asr-test$ echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
0
fahmed@hasselhoff: ~/src/asr-test$ ./addrs
stack:	0x7fffffffdafc
printf:	0x7ffff7865400
fahmed@hasselhoff: ~/src/asr-test$ ./addrs
stack:	0x7fffffffdafc
printf:	0x7ffff7865400
fahmed@hasselhoff: ~/src/asr-test$ ./addrs
stack:	0x7fffffffdafc
printf:	0x7ffff7865400
```
