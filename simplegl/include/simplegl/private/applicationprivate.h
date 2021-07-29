/*=========================================================================

  Program:        Simple Graphics Library
  Author:         Martijn Koopman
  Co-author(s):
  License:        GNU General Public License Version 3

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.

=========================================================================*/

#ifndef SIMPLEGL_APPLICATIONPRIVATE_H
#define SIMPLEGL_APPLICATIONPRIVATE_H

namespace simplegl {

class ApplicationPrivate
{
public:
  ApplicationPrivate();
  ~ApplicationPrivate();

  bool initialized() const;

private:
  bool m_initialized;
};

} // namespace simplegl

#endif // SIMPLEGL_APPLICATIONPRIVATE_H
