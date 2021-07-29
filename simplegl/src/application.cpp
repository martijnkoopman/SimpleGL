#include "simplegl/application.h"

#include "simplegl/private/applicationprivate.h"

namespace simplegl {

Application::Application() : m_pimpl(new ApplicationPrivate) {}

bool Application::initialized() const { return m_pimpl->initialized(); }

} // namespace simplegl
