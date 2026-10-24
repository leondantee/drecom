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

// Function: entry_0031df34
// Address: 0x31df34 - 0x31df84
void entry_0031df34_0x31df34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031df34_0x31df34");
#endif

    switch (ctx->pc) {
        case 0x31df50u: goto label_31df50;
        default: break;
    }

    ctx->pc = 0x31df34u;

    // 0x31df34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31df34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31df38: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x31df38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31df3c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x31df3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31df40: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x31df40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31df44: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x31df44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31df48: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x31DF48u;
    SET_GPR_U32(ctx, 31, 0x31DF50u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x31DF48u, 0x31DF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DF50u;
label_31df50:
    // 0x31df50: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x31df50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x31df54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31df54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31df58: 0xac64129c  sw          $a0, 0x129C($v1)
    ctx->pc = 0x31df58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4764), GPR_U32(ctx, 4));
    // 0x31df5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31df5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31df60: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x31df60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x31df64: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x31df64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31df68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31df68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31df6c: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x31DF6Cu;
    {
        const bool branch_taken_0x31df6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31df6c) {
            ctx->pc = 0x31E00Cu;
            return;
        }
    }
    ctx->pc = 0x31DF74u;
    // 0x31df74: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DF74u;
    {
        const bool branch_taken_0x31df74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31df74) {
            ctx->pc = 0x31DF84u;
            return;
        }
    }
    ctx->pc = 0x31DF7Cu;
    // 0x31df7c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x31DF7Cu;
    {
        const bool branch_taken_0x31df7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31df7c) {
            ctx->pc = 0x31E08Cu;
            return;
        }
    }
    ctx->pc = 0x31DF84u;
}
