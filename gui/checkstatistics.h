/*
 * Cppcheck - A tool for static C/C++ code analysis
 * Copyright (C) 2007-2011 Daniel Marjamäki and Cppcheck team.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CHECKSTATISTICS_H
#define CHECKSTATISTICS_H

#include <QObject>
#include "common.h"

/// @addtogroup GUI
/// @{

/**
 * A class for check statistics.
 */
class CheckStatistics : public QObject
{
public:
    CheckStatistics(QObject *parent = NULL);

    /**
    * @brief Add new checked item to statistics.
    *
    * @param type Type of the item to add.
    */
    void AddItem(ShowTypes type);

    /**
    * @brief Clear the statistics.
    *
    */
    void Clear();

    /**
    * @brief Return statistics for given type.
    *
    * @param type Type for which the statistics are returned.
    * @return Number of items of given type.
    */
    unsigned GetCount(ShowTypes type) const;

private:
    unsigned mStyle;
    unsigned mWarning;
    unsigned mPerformance;
    unsigned mPortability;
    unsigned mInformation;
    unsigned mError;
};

/// @}

#endif // CHECKSTATISTICS_H
