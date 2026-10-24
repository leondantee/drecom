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

// Function: entry_00313810
// Address: 0x313810 - 0x313824
void entry_00313810_0x313810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313810_0x313810");
#endif

    ctx->pc = 0x313810u;

    // 0x313810: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x313810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x313814: 0x2454a610  addiu       $s4, $v0, -0x59F0
    ctx->pc = 0x313814u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x313818: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x313818u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x31381c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x31381Cu;
    {
        const bool branch_taken_0x31381c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31381c) {
            ctx->pc = 0x313954u;
            return;
        }
    }
    ctx->pc = 0x313824u;
}
