#ifndef SIMPLEGL_RENDERER_H
#define SIMPLEGL_RENDERER_H

#include "simplegl_global.h"

#include "renderobject.h"

namespace simplegl
{

class SIMPLEGL_EXPORT Renderer
{
public:
  Renderer(const RenderObject* renderObject)
    : m_renderObject(renderObject)
    , m_valid(false)
  {
  }

  virtual ~Renderer() = default;

  /// Get boolean indicator if renderer is valid.
  ///
  /// A renderer may be invalid, for example, if its capabilites aren't
  /// supported by the GPU hardware.
  ///
  /// \return True if valid, false otherwise.
  bool isValid() const { return m_valid; }

  /// Get the render object (by const reference)
  ///
  /// \return Render object
  const RenderObject& renderObject() const { return *m_renderObject; }

  /// Render the render object.
  ///
  /// This function should be called by the RenderWindow.
  ///
  /// \param[in] camera Camera
  /// \param[in] width Image width
  /// \param[in] height Image height
  // virtual void render(Camera* camera, const Vector2i& size) = 0;

protected:
  const RenderObject* m_renderObject;
  bool m_valid;
};

} // namespace simplegl

#endif // SIMPLEGL_RENDERER_H
