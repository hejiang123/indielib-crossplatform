/*********************************** The zlib License ************************************
 *
 * Copyright (c) 2013 Indielib-crossplatform Development Team
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 * claim that you wrote the original software. If you use this software
 * in a product, an acknowledgment in the product documentation would be
 * appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not be
 * misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source
 * distribution.
 *
 *****************************************************************************************/

#include "IND_Shaders.h"

const char* IND_Uniform_MVPMatrix = "uMVmatrix";
const char* IND_Uniform_PMatrix = "uPMatrix";
const char* IND_Uniform_Color = "uColor";
const char* IND_VertexAttribute_Position = "aPosition";

const char* IND_VertexShader_UniformColor =
"                                                   \n\
attribute vec4 aPosition;							\n\
uniform	vec4 uColor;								\n\
uniform mat4 uMVmatrix                              \n\
uniform mat4 uPMatrix                               \n\
#ifdef GL_ES										\n\
varying lowp vec4 varFragmentColor;					\n\
#else												\n\
varying vec4 varFragmentColor;						\n\
#endif												\n\
                                                    \n\
void main()											\n\
{													\n\
    gl_Position = uMVmatrix * uPMatrix * aPosition; \n\
    varFragmentColor = uColor;                      \n\
}													\n\
";


const char* IND_FragmentShader_UniformColor =
"										\n\
#ifdef GL_ES							\n\
precision lowp float;					\n\
#endif									\n\
                                        \n\
varying vec4 varFragmentColor;			\n\
                                        \n\
void main()								\n\
{										\n\
    gl_FragColor = varFragmentColor;		\n\
}										\n\
";

