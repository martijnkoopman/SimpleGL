#include "simplegl/private/applicationprivate.h"

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

namespace simplegl {

ApplicationPrivate::ApplicationPrivate() : m_initialized(glfwInit()) {}

ApplicationPrivate::~ApplicationPrivate() {
  if (m_initialized) {
    glfwTerminate();
  }
}

bool ApplicationPrivate::initialized() const { return m_initialized; }

} // namespace simplegl
