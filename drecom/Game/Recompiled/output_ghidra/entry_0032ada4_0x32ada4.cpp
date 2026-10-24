#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0032ada4
// Address: 0x32ada4 - 0x32adb0
void entry_0032ada4_0x32ada4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ada4_0x32ada4");
#endif

    ctx->pc = 0x32ada4u;

    // 0x32ada4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x32ada4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32ada8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x32ADA8u;
    {
        const bool branch_taken_0x32ada8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ada8) {
            ctx->pc = 0x32AF38u;
            return;
        }
    }
    ctx->pc = 0x32ADB0u;
}
