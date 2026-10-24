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

// Function: entry_0037ac80
// Address: 0x37ac80 - 0x37ac98
void entry_0037ac80_0x37ac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037ac80_0x37ac80");
#endif

    ctx->pc = 0x37ac80u;

    // 0x37ac80: 0x8fc25dc8  lw          $v0, 0x5DC8($fp)
    ctx->pc = 0x37ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24008)));
    // 0x37ac84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37ac88: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37AC88u;
    {
        const bool branch_taken_0x37ac88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x37ac88) {
            ctx->pc = 0x37AC98u;
            return;
        }
    }
    ctx->pc = 0x37AC90u;
    // 0x37ac90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ac94: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x37ac94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    ctx->pc = 0x37ac98u;
}
