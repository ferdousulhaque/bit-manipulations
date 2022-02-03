# Practices

Basic problems practicing.

## Run Program
For running programs, please use the run.sh file
```bash
run.sh basic.cpp
```

## Adding the packages

You need to install the following packages using brew

```
brew install gdate
brew install gtime
```

These are for the unix date and time, instead of the Mac OS default.

## Adding the library

Download and add the following library http://gcc.gnu.org/onlinedocs/gcc-4.8.0/libstdc++/api/a01541_source.html

Since, /usr directory is hidden by default on Mac OSX.

- Open Finder.
- Click Go on menu bar then click Go to folder or Press `Command+Shift+G` directly.
- Enter the path `/usr/local/include`
- Now proceed as mentioned above.
- You have to create `bits` directory inside `/usr/local/include` and then make a header file `stdc++.h` inside bits.