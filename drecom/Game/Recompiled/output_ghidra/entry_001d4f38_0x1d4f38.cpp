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

// Function: entry_001d4f38
// Address: 0x1d4f38 - 0x1d4f50
void entry_001d4f38_0x1d4f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4f38_0x1d4f38");
#endif

    ctx->pc = 0x1d4f38u;

    // 0x1d4f38: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x1d4f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1d4f3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d4f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4f40: 0x1462006a  bne         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1D4F40u;
    {
        const bool branch_taken_0x1d4f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4f40) {
            ctx->pc = 0x1D50ECu;
            return;
        }
    }
    ctx->pc = 0x1D4F48u;
    // 0x1d4f48: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d4f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d4f4c: 0x2452ffff  addiu       $s2, $v0, -0x1
    ctx->pc = 0x1d4f4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->pc = 0x1d4f50u;
}
