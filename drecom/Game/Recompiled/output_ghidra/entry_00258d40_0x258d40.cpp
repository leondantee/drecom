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

// Function: entry_00258d40
// Address: 0x258d40 - 0x258d7c
void entry_00258d40_0x258d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258d40_0x258d40");
#endif

    ctx->pc = 0x258d40u;

label_258d40:
    // 0x258d40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x258d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258d44: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x258d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x258d48: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x258d48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x258d4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x258d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x258d50: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x258d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258d54: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x258d54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x258d58: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x258d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x258d5c: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x258d5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x258d60: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x258D60u;
    {
        const bool branch_taken_0x258d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258d60) {
            ctx->pc = 0x258D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258d40;
        }
    }
    ctx->pc = 0x258D68u;
    // 0x258d68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x258d68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258d6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258d70: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x258d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x258d74: 0x3e00008  jr          $ra
    ctx->pc = 0x258D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258D7Cu;
}
