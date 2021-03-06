// RouterManager.h
//
// Copyright (c) 2018 BANYAN
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <UIKit/UIKit.h>
#if __has_include(<JLRoutes/JLRoutes.h>)
    #import <JLRoutes/JLRoutes.h>
#endif

@interface RouterManager : NSObject

+ (RouterManager *)sharedInstance;

- (void)registerScheme:(NSString *)scheme;      // 注册路由
- (void)pushToViewController:(NSString *)routeString;       // 跳转路由地址
- (void)setVerboseLoggingEnabled:(BOOL)enable;     // 打印路由信息(DEBUG模式下默认开启),需手动关闭.

@property (copy, readonly, nonatomic) NSString *scheme;

@end

