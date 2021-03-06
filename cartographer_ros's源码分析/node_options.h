/*
 * Copyright 2016 The Cartographer Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CARTOGRAPHER_ROS_NODE_OPTIONS_H_
#define CARTOGRAPHER_ROS_NODE_OPTIONS_H_

#include <string>

#include "cartographer/common/lua_parameter_dictionary.h"
#include "cartographer/mapping/map_builder.h"
#include "cartographer_ros/trajectory_options.h"

namespace cartographer_ros {

// Top-level options of Cartographer's ROS integration.
struct NodeOptions {
  ::cartographer::mapping::proto::MapBuilderOptions map_builder_options;
  string map_frame;                   //"map"
  double lookup_transform_timeout_sec;//0.2
  double submap_publish_period_sec;   //0.3
  double pose_publish_period_sec;     //5e-3
};

NodeOptions CreateNodeOptions(        //backpack_2d.lua,revo_lds.lua
    ::cartographer::common::LuaParameterDictionary* lua_parameter_dictionary);

}  // namespace cartographer_ros

#endif  // CARTOGRAPHER_ROS_NODE_OPTIONS_H_
