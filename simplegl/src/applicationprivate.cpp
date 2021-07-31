/*=========================================================================

  Program:        Simple Graphics Library
  Author:         Martijn Koopman
  Co-author(s):
  License:        GNU General Public License Version 3

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.

=========================================================================*/

#include "simplegl/private/applicationprivate.h"

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

namespace simplegl
{

ApplicationPrivate::ApplicationPrivate()
  : m_initialized(glfwInit())
{
}

ApplicationPrivate::~ApplicationPrivate()
{
  if (m_initialized)
  {
    glfwTerminate();
  }
}

bool ApplicationPrivate::initialized() const
{
  return m_initialized;
}

} // namespace simplegl
