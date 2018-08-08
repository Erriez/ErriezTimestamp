# Timestamp measuring library for Arduino
[![Build Status](https://travis-ci.org/Erriez/ErriezTimestamp.svg?branch=master)](https://travis-ci.org/Erriez/ErriezTimestamp)

This is a timestamp library for Arduino to measure execution durations in microseconds or milliseconds resolution.

![Timestamp](https://raw.githubusercontent.com/Erriez/ErriezTimestamp/master/extras/timestamp.png)


## Hardware
Any Arduino / ESP8266 board.


## Library documentation

* [Doxygen online HTML](https://Erriez.github.io/ErriezTimestamp)
* [Doxygen PDF](https://github.com/Erriez/ErriezTimestamp/raw/gh-pages/latex/ErriezTimestamp.pdf)


## Examples
The following examples are available:
* Examples | Erriez Timestamp | [Microseconds](https://github.com/Erriez/ErriezTimestamp/blob/master/examples/Microseconds/Microseconds.ino)
* Examples | Erriez Timestamp | [Milliseconds](https://github.com/Erriez/ErriezTimestamp/blob/master/examples/Milliseconds/Milliseconds.ino)


## Example output Timestamp | Microseconds
```
Timestamp with microseconds resolution example
  
Printing this message takes: 768us
And this message takes: 2044us
delayMicroseconds(15) duration: 20us
analogRead() duration: 212us
digitalRead() duration: 4us
```

## Example output Timestamp | Milliseconds
```
Timestamp with milliseconds resolution example
  
delay(15) takes:
15ms
14ms
16ms
15ms
15ms
16ms
14ms
15ms
16ms
15ms
```


## Usage

### Initialization

Add include file:
```c++
#include <ErriezTimestamp.h>
```

Create timestamp object with microseconds resolution:
```c++
TimestampMicros timestamp;
```

Create timestamp object with milliseconds resolution:
```c++
TimestampMillis timestamp;
```

### Single measurement
```c++
unsigned long duration;

// Start measurement
timestamp.start();
// Do something
duration = timestamp.end();

// Start new measurement
timestamp.start();
// Do something
duration = timestamp.end();
```

### Multiple measurements
```c++
// Start timestamp
timestamp.start();
// Do something and print timstamp
timestamp.print();

// Do something and print timestamp without calling start()
timestamp.print();
```


## Constraints

TimestampMicros uses the function micros().
TimestampMillis uses the function millis().

Please refer to the description of these functions for the maximum possible duration and minimum
resolution:

- https://www.arduino.cc/reference/en/language/functions/time/micros/
- https://www.arduino.cc/reference/en/language/functions/time/millis/


## Library installation

Please refer to the [Wiki](https://github.com/Erriez/ErriezArduinoLibrariesAndSketches/wiki) page.


## Other Arduino Libraries and Sketches from Erriez

* [Erriez Libraries and Sketches](https://github.com/Erriez/ErriezArduinoLibrariesAndSketches)
