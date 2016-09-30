//---------------------------------------------------------------------------//
/*
  Copyright (c) 2012, Stuart R. Slattery
  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are
  met:

  *: Redistributions of source code must retain the above copyright
  notice, this list of conditions and the following disclaimer.

  *: Redistributions in binary form must reproduce the above copyright
  notice, this list of conditions and the following disclaimer in the
  documentation and/or other materials provided with the distribution.

  *: Neither the name of the University of Wisconsin - Madison nor the
  names of its contributors may be used to endorse or promote products
  derived from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
  HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
//---------------------------------------------------------------------------//
/*!
 * \brief DTK_LibmeshEntityExtraData.hpp
 * \author Stuart R. Slattery
 * \brief Extra data for Libmesh entities.
 */
//---------------------------------------------------------------------------//

#ifndef LIBMESHDTKADAPTERS_LIBMESHENTITYEXTRADATA_HPP
#define LIBMESHDTKADAPTERS_LIBMESHENTITYEXTRADATA_HPP

#include "DTK_EntityExtraData.hpp"

#include <Teuchos_Ptr.hpp>

#include <libmesh/elem.h>

namespace DataTransferKit
{
//---------------------------------------------------------------------------//
/*!
  \class LibmeshEntityExtraData
  \brief A base class for setting extra data with entities.
*/
//---------------------------------------------------------------------------//
template<class LibmeshGeom>
class LibmeshEntityExtraData : public DataTransferKit::EntityExtraData
{
  public:

    LibmeshEntityExtraData( const Teuchos::Ptr<LibmeshGeom>& libmesh_geom )
        : d_libmesh_geom( libmesh_geom )
    { /* ... */ }

    ~LibmeshEntityExtraData() { /* ... */ }

    // libMesh geom.
    Teuchos::Ptr<LibmeshGeom> d_libmesh_geom;
};

//---------------------------------------------------------------------------//

} // end namespace DataTransferKit

#endif // end LIBMESHDTKADAPTERS_LIBMESHENTITYEXTRADATA_HPP

//---------------------------------------------------------------------------//
// end DTK_LibmeshEntityExtraData.hpp
//---------------------------------------------------------------------------//
