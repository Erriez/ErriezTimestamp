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

/*!
 * \file Timestamp.cpp
 * \brief Timestamp library for Arduino
 * \details
 *      https://github.com/Erriez/ErriezTimestamp
 */

#include "Timestamp.h"

/*!
 * \brief Timestamp constructor
 */
Timestamp::Timestamp() : _timestampStart(0)
{
}

//------------------------------------------------------------------------------
// Timestamp micros
//------------------------------------------------------------------------------
/*!
 * \brief Start measurement in microseconds
 */
void TimestampMicros::start()
{
    _timestampStart = micros();
}

/*!
 * \brief End measurement
 * \return Duration in micro seconds
 */
unsigned long TimestampMicros::end()
{
    unsigned long timestampDelta;

    timestampDelta = micros() - _timestampStart;
    _timestampStart = micros();

    return timestampDelta;
}

/*!
 * \brief Print measurement in microseconds
 * \return Duration in microseconds
 */
unsigned long TimestampMicros::print()
{
    unsigned long timestampDelta;

    timestampDelta = micros() - _timestampStart;

    Serial.print(timestampDelta);
    Serial.println(F("us"));

    _timestampStart = micros();

    return timestampDelta;
}

//------------------------------------------------------------------------------
// Timestamp millis
//------------------------------------------------------------------------------
/*!
 * \brief Start measurement in milliseconds
 */
void TimestampMillis::start()
{
    _timestampStart = millis();
}

/*!
 * \brief End measurement
 * \return Duration in milliseconds
 */
unsigned long TimestampMillis::end()
{
    unsigned long timestampDelta;

    timestampDelta = millis() - _timestampStart;
    _timestampStart = millis();

    return timestampDelta;
}

/*!
 * \brief Print measurement in milliseconds
 * \return Duration in milliseconds
 */
unsigned long TimestampMillis::print()
{
    unsigned long timestampDelta;

    timestampDelta = millis() - _timestampStart;
    _timestampStart = millis();

    Serial.print(timestampDelta);
    Serial.println(F("ms"));

    return timestampDelta;
}
