// RUN: %clang -ObjC -ccc-host-triple i386-apple-darwin9 -m32 -fobjc-arc %s -fsyntax-only 2>&1 | FileCheck %s
// RUN: %clang -x objective-c -ccc-host-triple i386-apple-darwin9 -m32 -fobjc-arc %s -fsyntax-only 2>&1 | FileCheck %s
// RUN: %clang -x objective-c++ -ccc-host-triple i386-apple-darwin9 -m32 -fobjc-arc %s -fsyntax-only 2>&1 | FileCheck %s
// RUN: %clang -x c -ccc-host-triple i386-apple-darwin9 -m32 -fobjc-arc %s -fsyntax-only 2>&1 | FileCheck -check-prefix NOTOBJC %s
// RUN: %clang -x c++ -ccc-host-triple i386-apple-darwin9 -m32 -fobjc-arc %s -fsyntax-only 2>&1 | FileCheck -check-prefix NOTOBJC %s

// Just to test clang is working.
# foo

// CHECK: error: -fobjc-arc is not supported with fragile abi
// CHECK-NOT: invalid preprocessing directive

// NOTOBJC-NOT: error: -fobjc-arc is not supported with fragile abi
// NOTOBJC: invalid preprocessing directive
