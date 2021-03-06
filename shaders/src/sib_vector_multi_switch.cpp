/************************************************************************************************************************************
Copyright 2017 Autodesk, Inc. All rights reserved.

Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. 
You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, 
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
See the License for the specific language governing permissions and limitations under the License.
************************************************************************************************************************************/

#include <ai.h>

AI_SHADER_NODE_EXPORT_METHODS(SIBVectorMultiSwitchMethods);

enum SIBVectorMultiSwitchParams
{
   p_default,
   p_switch,
   p_value0,
   p_input0,
   p_value1,
   p_input1,
   p_value2,
   p_input2,
   p_value3,
   p_input3,
   p_value4,
   p_input4,
   p_value5,
   p_input5,
   p_value6,
   p_input6,
   p_value7,
   p_input7
};

node_parameters
{
   AiParameterVec( "default", 0.0f, 0.0f, 0.0f );
   AiParameterInt( "switch" , 0                );
   AiParameterInt( "value0" , 0                );
   AiParameterVec( "input0" , 0.0f, 0.0f, 0.0f );
   AiParameterInt( "value1" , 1                );
   AiParameterVec( "input1" , 0.0f, 0.0f, 0.0f );
   AiParameterInt( "value2" , 2                );
   AiParameterVec( "input2" , 0.0f, 0.0f, 0.0f );
   AiParameterInt( "value3" , 3                );
   AiParameterVec( "input3" , 0.0f, 0.0f, 0.0f );
   AiParameterInt( "value4" , 4                );
   AiParameterVec( "input4" , 0.0f, 0.0f, 0.0f );
   AiParameterInt( "value5" , 5                );
   AiParameterVec( "input5" , 0.0f, 0.0f, 0.0f );
   AiParameterInt( "value6" , 6                );
   AiParameterVec( "input6" , 0.0f, 0.0f, 0.0f );
   AiParameterInt( "value7" , 7                );
   AiParameterVec( "input7" , 0.0f, 0.0f, 0.0f );
}

node_initialize {}
node_update {}
node_finish {}

shader_evaluate
{
   int sw = AiShaderEvalParamInt(p_switch);

   if (sw == AiShaderEvalParamInt(p_value0))
      sg->out.VEC() = AiShaderEvalParamVec(p_input0);
   else if (sw == AiShaderEvalParamInt(p_value1))
      sg->out.VEC() = AiShaderEvalParamVec(p_input1);
   else if (sw == AiShaderEvalParamInt(p_value2))
      sg->out.VEC() = AiShaderEvalParamVec(p_input2);
   else if (sw == AiShaderEvalParamInt(p_value3))
      sg->out.VEC() = AiShaderEvalParamVec(p_input3);
   else if (sw == AiShaderEvalParamInt(p_value4))
      sg->out.VEC() = AiShaderEvalParamVec(p_input4);
   else if (sw == AiShaderEvalParamInt(p_value5))
      sg->out.VEC() = AiShaderEvalParamVec(p_input5);
   else if (sw == AiShaderEvalParamInt(p_value6))
      sg->out.VEC() = AiShaderEvalParamVec(p_input6);
   else if (sw == AiShaderEvalParamInt(p_value7))
      sg->out.VEC() = AiShaderEvalParamVec(p_input7);
   else 
      sg->out.VEC() = AiShaderEvalParamVec(p_default);
}
