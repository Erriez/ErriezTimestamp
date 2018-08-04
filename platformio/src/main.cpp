/*
 * MIT License
 *
 * Copyright (c) 2018 Erriez
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/* Timestamp with microseconds resolution example
 * Source: https://github.com/Erriez/ErriezTimestamp
 */

#include <ErriezTimestamp.h>

// Create timestamp with microseconds resolution
TimestampMicros timestamp;


void setup()
{
    unsigned long durationUs;

    // Initialize Serial port
    Serial.begin(115200);
    while (!Serial) {
        ;
    }
    Serial.println(F("Timestamp with microseconds resolution example\n"));

    // Start timestamp
    timestamp.start();
    Serial.print(F("Printing this message takes: "));
    // Print timestamp
    timestamp.print();
    Serial.print(F("And this message takes: "));
    // Print another timestamp without calling start()
    timestamp.print();

    // Do something...

    // Start timestamp again
    timestamp.start();
    delayMicroseconds(15);
    // Get timestamp end before the print
    durationUs = timestamp.end();
    // Print timestamp
    Serial.print(F("delayMicroseconds(15) durationUs: "));
    Serial.print(durationUs);
    Serial.println(F("us"));

    // Start timestamp again
    timestamp.start();
    volatile int value = analogRead(0);
    durationUs = timestamp.end();
    Serial.print(F("analogRead() durationUs: "));
    Serial.print(durationUs);
    Serial.println(F("us"));

    // Start timestamp again
    timestamp.start();
    volatile int digitalRead(0);
    durationUs = timestamp.end();
    Serial.print(F("digitalRead() durationUs: "));
    Serial.print(durationUs);
    Serial.println(F("us"));
}

void loop()
{
}
