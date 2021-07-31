/*=========================================================================

  Program:        Simple Graphics Library
  Author:         Martijn Koopman
  Co-author(s):
  License:        GNU General Public License Version 3

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.

=========================================================================*/

#include "simplegl/application.h"

#include "simplegl/private/applicationprivate.h"

namespace simplegl
{

Application::Application()
  : m_pimpl(new ApplicationPrivate)
{
}

bool Application::initialized() const
{
  return m_pimpl->initialized();
}

} // namespace simplegl
