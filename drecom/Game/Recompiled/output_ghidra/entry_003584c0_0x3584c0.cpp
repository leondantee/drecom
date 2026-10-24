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

// Function: entry_003584c0
// Address: 0x3584c0 - 0x3584d8
void entry_003584c0_0x3584c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003584c0_0x3584c0");
#endif

    ctx->pc = 0x3584c0u;

    // 0x3584c0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3584c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3584c4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3584c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3584c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3584c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3584cc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3584ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x3584d0: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x3584D0u;
    {
        const bool branch_taken_0x3584d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3584d0) {
            ctx->pc = 0x358858u;
            return;
        }
    }
    ctx->pc = 0x3584D8u;
}
