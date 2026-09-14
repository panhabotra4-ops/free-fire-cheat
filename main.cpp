#import <Foundation/Foundation.h>
#include <stdio.h>

void DrawESP() {
    NSLog(@"[ESP] Line ESP Active");
}

__attribute__((constructor)) void entry() {
    NSLog(@"Free Fire Cheat Injected Successfully!");
    DrawESP();
}
