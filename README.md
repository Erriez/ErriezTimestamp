# Timestamp measuring library for Arduino
[![Build Status](https://travis-ci.org/Erriez/ErriezTimestamp.svg?branch=master)](https://travis-ci.org/Erriez/ErriezTimestamp)

This is a timestamp library for Arduino to measure execution durations in microseconds or milliseconds resolution.

## Hardware
Any Arduino / ESP8266 board.

## Usage

### Initialization

Add include file:
```c++
#include <Timestamp.h>
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

## Constraints

TimestampMicros uses the function micros().
TimestampMillis uses the function millis().

Please refer to the description of these functions for the maximum possible duration:

- https://www.arduino.cc/reference/en/language/functions/time/micros/
- https://www.arduino.cc/reference/en/language/functions/time/millis/

## Library documentation

* [Doxygen online HTML](https://Erriez.github.io/ErriezTimestamp)
* [Doxygen PDF](https://github.com/Erriez/ErriezTimestamp/raw/master/docs/latex/refman.pdf)

## Library installation using GIT (preferred)

1. Install [GIT client](https://git-scm.com/downloads).
2. Run the following commands on the command line to install the library once:

**Windows**

```
cd C:\Users\%USERNAME%\Documents\Arduino\libraries
git clone https://github.com/Erriez/ErriezTimestamp.git
```

**Linux**

```
cd ~/Arduino/libraries
git clone https://github.com/Erriez/ErriezTimestamp.git
```

3. Run the following commands to retrieve the latest updates:

```
git pull
```

4. Restart the Arduino IDE and build an example.

## Library installation using ZIP (no automatic updates)

1. Download a [release ZIP](https://github.com/Erriez/ErriezTimestamp/releases).
2. Start the Arduino IDE.
3. Click Sketch | Include Library | Add .ZIP Library... and select this ZIP.
4. Build an example.