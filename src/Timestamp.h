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
* \file Timestamp.h
* \brief Timestamp library for Arduino
* \details
*      Source:         https://github.com/Erriez/ErriezTimestamp
*      Documentation:  https://erriez.github.io/ErriezTimestamp
*/

#ifndef TIMESTAMP_H_
#define TIMESTAMP_H_

#include <Arduino.h>


/*!
 * \brief Timstamp class
 */
class Timestamp
{
public:
    Timestamp();
    virtual void start() = 0;           //!< Derived class must implement start()
    virtual unsigned long end() = 0;    //!< Derived class must implement end()
    virtual unsigned long print() = 0;  //!< Derived class must implement print()

protected:
    unsigned long _timestampStart;      //!< Timestamp at the beginning of a measurement
};


/*!
 * \brief TimestampMicros class derived from Timestamp
 */
class TimestampMicros : Timestamp
{
public:
    void start() override;
    unsigned long end() override;
    unsigned long  print() override;
};

/*!
 * \brief TimestampMillis class derived from Timestamp
 */
class TimestampMillis : Timestamp
{
public:
    void start() override;
    unsigned long end() override;
    unsigned long  print() override;
};

#endif // TIMESTAMP_H_
