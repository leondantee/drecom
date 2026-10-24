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

// Function: entry_0032caa8
// Address: 0x32caa8 - 0x32cab4
void entry_0032caa8_0x32caa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032caa8_0x32caa8");
#endif

    ctx->pc = 0x32caa8u;

    // 0x32caa8: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x32caa8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32caac: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x32CAACu;
    {
        const bool branch_taken_0x32caac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32caac) {
            ctx->pc = 0x32CCC8u;
            return;
        }
    }
    ctx->pc = 0x32CAB4u;
}
