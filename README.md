# rotXX
A chunk of quickly-conceived code that rotates a letter by an arbitrary number of places.

## Build Instructions
1. Run make.
2. That's about it, really.

## Installation
W-why? :\

I guess if you reaaaaaally want to you can build this and then do this:

```
sudo install -m 755 rotXX /usr/local/bin
```

But...but why?

## Usage
```
./rotXX [number of digits to rotate]
```

If the number of digits is not specified, rotXX defaults to 13. You know, like rot13. :D

If rotXX is executed as specified above, it'll pretty much behave the same way that `cat`
does, aside from that whole "substitution cipher" thing. Type something, hit ENTER, and
a bunch of gibberish will be thrown on the line. Use `CTRL-C` to abort.

Alternatively, you can pipe things to `rotXX`. If I wanted to rot18 a file called
`my_journal.txt`, I could do the following (note, don't do this. Simple substitution
ciphers are easy to spot and easier to break):

```
cat my_journal.txt | rotXX 18
```

## Stupidify Branch Caveats
This branch is basically a giant middle finger to `if` statements and whitespace. It
definitely ain't an IOCCC contender, but it made for a fun game of code golf against
myself. :)

The only functional difference is that there is no check for invalid rot values. It
works sanely up through 29 before the wraparound check becomes unable to cope with
the situation (though it does "fix" itself a bit later on -- try `./rotXX 282`!).

