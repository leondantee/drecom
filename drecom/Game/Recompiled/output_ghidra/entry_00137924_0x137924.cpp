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

// Function: entry_00137924
// Address: 0x137924 - 0x137930
void entry_00137924_0x137924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137924_0x137924");
#endif

    ctx->pc = 0x137924u;

    // 0x137924: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x137924u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x137928: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x137928u;
    {
        const bool branch_taken_0x137928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137928) {
            ctx->pc = 0x137978u;
            return;
        }
    }
    ctx->pc = 0x137930u;
}
