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

// Function: Em07_R1_br_hit_tail_f
// Address: 0x2d6940 - 0x2d6964
void Em07_R1_br_hit_tail_f_0x2d6940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em07_R1_br_hit_tail_f_0x2d6940");
#endif

    ctx->pc = 0x2d6940u;

    // 0x2d6940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d6940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d6944: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2d6944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2d6948: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2d6948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d694c: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d694cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d6950: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d6950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d6954: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d6954u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d6958: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d6958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d695c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D695Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D695Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6964u;
}
