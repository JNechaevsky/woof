//
// Copyright(C)      2023 Andrew Apted
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//

#ifndef __R_VOXEL__
#define __R_VOXEL__

void VX_Init (void);

void VX_AddFile (const char *filename);

void VX_ClearVoxels (void);

void VX_NearbySprites (void);

boolean VX_ProjectVoxel (mobj_t * thing);

void VX_DrawVoxel (vissprite_t * vis);

extern boolean voxels_found;

#endif  /* __R_VOXEL__ */
