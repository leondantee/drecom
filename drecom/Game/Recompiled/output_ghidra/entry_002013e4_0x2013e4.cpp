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

// Function: entry_002013e4
// Address: 0x2013e4 - 0x2013f0
void entry_002013e4_0x2013e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002013e4_0x2013e4");
#endif

    ctx->pc = 0x2013e4u;

    // 0x2013e4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2013e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2013e8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2013E8u;
    {
        const bool branch_taken_0x2013e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2013e8) {
            ctx->pc = 0x201430u;
            return;
        }
    }
    ctx->pc = 0x2013F0u;
}
