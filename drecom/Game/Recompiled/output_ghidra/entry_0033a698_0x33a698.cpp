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

// Function: entry_0033a698
// Address: 0x33a698 - 0x33a6b8
void entry_0033a698_0x33a698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a698_0x33a698");
#endif

    ctx->pc = 0x33a698u;

    // 0x33a698: 0x1e20fff1  bgtz        $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x33A698u;
    {
        const bool branch_taken_0x33a698 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x33a698) {
            ctx->pc = 0x33A660u;
            return;
        }
    }
    ctx->pc = 0x33A6A0u;
    // 0x33a6a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33a6a4: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x33a6a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33a6a8: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x33a6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33a6ac: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x33a6acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33a6b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x33A6B0u;
    {
        const bool branch_taken_0x33a6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a6b0) {
            ctx->pc = 0x33A6F0u;
            return;
        }
    }
    ctx->pc = 0x33A6B8u;
}
