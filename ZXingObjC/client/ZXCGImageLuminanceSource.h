/*
 * Copyright 2012 ZXing authors
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

#import <CoreVideo/CoreVideo.h>
#import "ZXLuminanceSource.h"

@class ZXImage;

@interface ZXCGImageLuminanceSource : ZXLuminanceSource {
  CGImageRef _image;
  int8_t *_data;
  size_t _left;
  size_t _top;
}

+ (CGImageRef)createImageFromBuffer:(CVImageBufferRef)buffer CF_RETURNS_RETAINED;
+ (CGImageRef)createImageFromBuffer:(CVImageBufferRef)buffer
                               left:(size_t)left
                                top:(size_t)top
                              width:(size_t)width
                             height:(size_t)height CF_RETURNS_RETAINED;
//订单
- (id)initWithZXImage:(ZXImage *)image
                 left:(size_t)left
                  top:(size_t)top
                width:(size_t)width
               height:(size_t)height;

- (id)initWithZXImage:(ZXImage *)image;

- (id)initWithCGImage:(CGImageRef)image
                 left:(size_t)left
                  top:(size_t)top
                width:(size_t)width
               height:(size_t)height;

- (id)initWithCGImage:(CGImageRef)image;

- (id)initWithBuffer:(CVPixelBufferRef)buffer
                left:(size_t)left
                 top:(size_t)top
               width:(size_t)width
              height:(size_t)height;

- (id)initWithBuffer:(CVPixelBufferRef)buffer;

- (CGImageRef)image;

@end
