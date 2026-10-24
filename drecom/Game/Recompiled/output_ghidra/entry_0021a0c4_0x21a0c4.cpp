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

// Function: entry_0021a0c4
// Address: 0x21a0c4 - 0x21a0d8
void entry_0021a0c4_0x21a0c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a0c4_0x21a0c4");
#endif

    ctx->pc = 0x21a0c4u;

    // 0x21a0c4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21a0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21a0c8: 0x2475a610  addiu       $s5, $v1, -0x59F0
    ctx->pc = 0x21a0c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x21a0cc: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x21a0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a0d0: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x21A0D0u;
    {
        const bool branch_taken_0x21a0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a0d0) {
            ctx->pc = 0x21A340u;
            return;
        }
    }
    ctx->pc = 0x21A0D8u;
}
