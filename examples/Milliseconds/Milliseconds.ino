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

/* Timestamp with milliseconds resolution example
 * Source:         https://github.com/Erriez/ErriezTimestamp
 * Documentation:  https://erriez.github.io/ErriezTimestamp
 */

#include <ErriezTimestamp.h>

// Create timestamp with milliseconds resolution
TimestampMillis timestamp;


void setup()
{
    unsigned long timestampEnd;

    // Initialize Serial port
    Serial.begin(115200);
    while (!Serial) {
        ;
    }
    Serial.println(F("Timestamp with milliseconds resolution example\n"));

    Serial.println(F("delay(15) takes:"));

    // Start timestamp
    timestamp.start();

    // Print timestamp 10 times
    for (int i = 0; i < 10; i++) {
        // Wait ~15ms
        delay(15);

        // Print timestamp
        timestamp.print();
    }
}

void loop()
{
}
