#include "simplegl/window.h"

#include "simplegl/private/windowprivate.h"

namespace simplegl {

Window::Window() : m_pimpl(new WindowPrivate) {}

bool Window::initialized() const { return m_pimpl->initialized(); }

void Window::show() { m_pimpl->show(); }

} // namespace simplegl
