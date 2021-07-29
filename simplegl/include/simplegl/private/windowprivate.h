/*=========================================================================

  Program:        Simple Graphics Library
  Author:         Martijn Koopman
  Co-author(s):
  License:        GNU General Public License Version 3

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.

=========================================================================*/

#ifndef SIMPLEGL_WINDOWPRIVATE_H
#define SIMPLEGL_WINDOWPRIVATE_H

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

namespace simplegl {

class WindowPrivate
{
public:
  WindowPrivate();
  ~WindowPrivate();

  GLFWwindow *glfwWindow() const;

  bool initialized() const;
  void show();

private:
  GLFWwindow *m_glfwWindow;
};

} // namespace simplegl

#endif // SIMPLEGL_WINDOWPRIVATE_H
