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

// Function: entry_002869b8
// Address: 0x2869b8 - 0x2869c8
void entry_002869b8_0x2869b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002869b8_0x2869b8");
#endif

    ctx->pc = 0x2869b8u;

    // 0x2869b8: 0x2ae80004  slti        $t0, $s7, 0x4
    ctx->pc = 0x2869b8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2869bc: 0x1500ffea  bnez        $t0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2869BCu;
    {
        const bool branch_taken_0x2869bc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2869bc) {
            ctx->pc = 0x286968u;
            return;
        }
    }
    ctx->pc = 0x2869C4u;
    // 0x2869c4: 0x0  nop
    ctx->pc = 0x2869c4u;
    // NOP
    ctx->pc = 0x2869c8u;
}
