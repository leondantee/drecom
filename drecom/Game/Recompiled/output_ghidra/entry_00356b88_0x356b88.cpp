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

// Function: entry_00356b88
// Address: 0x356b88 - 0x356ba4
void entry_00356b88_0x356b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00356b88_0x356b88");
#endif

    ctx->pc = 0x356b88u;

    // 0x356b88: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x356b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x356b8c: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x356b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x356b90: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x356b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x356b94: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x356b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x356b98: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x356b98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x356b9c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x356B9Cu;
    {
        const bool branch_taken_0x356b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356b9c) {
            ctx->pc = 0x356CC0u;
            return;
        }
    }
    ctx->pc = 0x356BA4u;
}
