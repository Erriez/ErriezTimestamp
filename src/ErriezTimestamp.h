/*
 * MIT License
 *
 * Copyright (c) 2018-2020 Erriez
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
 * \file ErriezTimestamp.h
 * \brief Timestamp library for Arduino
 * \details
 *      Source:         https://github.com/Erriez/ErriezTimestamp
 *      Documentation:  https://erriez.github.io/ErriezTimestamp
 */

#ifndef ERRIEZ_TIMESTAMP_H_
#define ERRIEZ_TIMESTAMP_H_

#include <Arduino.h>


/*!
 * \brief Timstamp class
 */
class Timestamp
{
public:
    Timestamp();
    virtual void start() = 0;        //!< Derived class must implement start()
    virtual unsigned long delta() = 0;        //!< Derived class must implement delta()
    virtual void print() = 0;        //!< Derived class must implement print()

    unsigned long timestampStart;   //!< Timestamp at the beginning of a measurement
};


/*!
 * \brief TimestampMicros class derived from Timestamp
 */
class TimestampMicros : Timestamp
{
public:
    void start() override;
    unsigned long delta() override;
    void print() override;
};

/*!
 * \brief TimestampMillis class derived from Timestamp
 */
class TimestampMillis : Timestamp
{
public:
    void start() override;
    unsigned long delta() override;
    void print() override;
};

#endif // ERRIEZ_TIMESTAMP_H_
