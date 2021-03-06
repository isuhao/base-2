// Copyright (c) 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <string>

#include "ui/gfx/image/image.h"

// Entry point for LibFuzzer.
extern "C" int LLVMFuzzerTestOneInput(const unsigned char* data,
                                      unsigned long size) {
  gfx::Image::CreateFrom1xPNGBytes(data, size);
  return 0;
}

