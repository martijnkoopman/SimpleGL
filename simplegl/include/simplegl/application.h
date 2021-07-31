/*=========================================================================

  Program:        Simple Graphics Library
  Author:         Martijn Koopman
  Co-author(s):
  License:        GNU General Public License Version 3

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.

=========================================================================*/

#ifndef SIMPLEGL_APPLICATION_H
#define SIMPLEGL_APPLICATION_H

#include "simplegl_global.h"

namespace simplegl
{

class ApplicationPrivate;

/**
 * @brief The Application class
 *
 * @example viewer.cpp
 */
class SIMPLEGL_EXPORT Application
{
public:
  Application();

  /**
   * @brief initialized
   * @return True if initialized, False on error.
   */
  bool initialized() const;

private:
  ApplicationPrivate* m_pimpl;
};

} // namespace simplegl

#endif // SIMPLEGL_APPLICATION_H
