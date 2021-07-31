/*=========================================================================

  Program:        Simple Graphics Library
  Author:         Martijn Koopman
  Co-author(s):
  License:        GNU General Public License Version 3

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.

=========================================================================*/

#include "simplegl/window.h"

#include "simplegl/private/windowprivate.h"

namespace simplegl
{

Window::Window()
  : m_pimpl(new WindowPrivate)
{
}

bool Window::initialized() const
{
  return m_pimpl->initialized();
}

void Window::show()
{
  m_pimpl->show();
}

} // namespace simplegl
