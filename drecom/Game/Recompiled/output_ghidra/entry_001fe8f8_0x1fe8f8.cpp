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

// Function: entry_001fe8f8
// Address: 0x1fe8f8 - 0x1fe92c
void entry_001fe8f8_0x1fe8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe8f8_0x1fe8f8");
#endif

    ctx->pc = 0x1fe8f8u;

    // 0x1fe8f8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe8fc: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x1fe8fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe900: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fe900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fe904: 0x203202b  sltu        $a0, $s0, $v1
    ctx->pc = 0x1fe904u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fe908: 0x1480ffce  bnez        $a0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1FE908u;
    {
        const bool branch_taken_0x1fe908 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe908) {
            ctx->pc = 0x1FE844u;
            return;
        }
    }
    ctx->pc = 0x1FE910u;
    // 0x1fe910: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1fe910u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe914: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fe914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe918: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fe918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe91c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fe91cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe920: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1fe920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fe924: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE92Cu;
}
