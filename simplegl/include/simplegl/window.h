/*=========================================================================

  Program:        Simple Graphics Library
  Author:         Martijn Koopman
  Co-author(s):
  License:        GNU General Public License Version 3

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.

=========================================================================*/

#ifndef SIMPLEGL_WINDOW_H
#define SIMPLEGL_WINDOW_H

#include "simplegl_global.h"

namespace simplegl
{

class WindowPrivate;

class SIMPLEGL_EXPORT Window
{
public:
  Window();

  bool initialized() const;

  void show();

private:
  WindowPrivate* m_pimpl;
};

} // namespace simplegl

#endif // SIMPLEGL_WINDOW_H
