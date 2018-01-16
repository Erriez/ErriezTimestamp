# Timestamp measuring library for Arduino

This is a timestamp library to measure execution durations in microseconds or 
milliseconds resolution.

## Hardware
Any Arduino board.

## Usage

###Initialization

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

###Single measurement
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

###Multiple measurements
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
* Timestamp | Microseconds
* Timestamp | Milliseconds

## Example output Timestamp | Microseconds
```c++
Timestamp with microseconds resolution example
  
Printing this message takes: 768us
And this message takes: 2044us
delayMicroseconds(15) duration: 20us
analogRead() duration: 212us
digitalRead() duration: 4us
```

## Example output Timestamp | Milliseconds
```c++
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

## Library installation
1. Start the Arduino IDE.
2. Download the latest version from:  
   https://github.com/Erriez/ArduinoLibraryTimestamp/archive/master.zip
3. Click Sketch | Include Library | Add .ZIP Library... and select this ZIP.
5. Run the example.