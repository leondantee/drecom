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

// Function: entry_00358a50
// Address: 0x358a50 - 0x358a68
void entry_00358a50_0x358a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00358a50_0x358a50");
#endif

    ctx->pc = 0x358a50u;

    // 0x358a50: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x358a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358a54: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x358a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x358a58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x358a5c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x358a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x358a60: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x358A60u;
    {
        const bool branch_taken_0x358a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358a60) {
            ctx->pc = 0x358B28u;
            return;
        }
    }
    ctx->pc = 0x358A68u;
}
