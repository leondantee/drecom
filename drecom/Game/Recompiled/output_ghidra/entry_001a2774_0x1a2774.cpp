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

// Function: entry_001a2774
// Address: 0x1a2774 - 0x1a2794
void entry_001a2774_0x1a2774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2774_0x1a2774");
#endif

    ctx->pc = 0x1a2774u;

    // 0x1a2774: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a2774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2778: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1a2778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a277c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1a277cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a2780: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2780u;
    {
        const bool branch_taken_0x1a2780 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2780) {
            ctx->pc = 0x1A2794u;
            return;
        }
    }
    ctx->pc = 0x1A2788u;
    // 0x1a2788: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1a2788u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a278c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A278Cu;
    {
        const bool branch_taken_0x1a278c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a278c) {
            ctx->pc = 0x1A27A0u;
            return;
        }
    }
    ctx->pc = 0x1A2794u;
}
