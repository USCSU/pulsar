/**
 * Copyright 2016 Yahoo Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef LIB_COMPRESSIONCODECLZ4_H_
#define LIB_COMPRESSIONCODECLZ4_H_

#include "CompressionCodec.h"

namespace pulsar {

class CompressionCodecLZ4 : public CompressionCodec {
 public:
    SharedBuffer encode(const SharedBuffer& raw);

    bool decode(const SharedBuffer& encoded, uint32_t uncompressedSize, SharedBuffer& decoded);
};

}
#endif /* LIB_COMPRESSIONCODECLZ4_H_ */
