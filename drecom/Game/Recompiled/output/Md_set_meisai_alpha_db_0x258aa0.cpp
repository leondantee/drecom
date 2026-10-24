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

// Function: Md_set_meisai_alpha_db
// Address: 0x258aa0 - 0x258ae4
void Md_set_meisai_alpha_db_0x258aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_set_meisai_alpha_db_0x258aa0");
#endif

    ctx->pc = 0x258aa0u;

    // 0x258aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258aa4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258aa8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x258aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x258aac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x258aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x258ab0: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x258ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x258ab4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x258ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258ab8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x258ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x258abc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x258abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x258ac0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x258ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x258ac4: 0x8c700064  lw          $s0, 0x64($v1)
    ctx->pc = 0x258ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x258ac8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258acc: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x258accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x258ad0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x258ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x258ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258ad8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x258ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x258adc: 0x3e00008  jr          $ra
    ctx->pc = 0x258ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258AE4u;
}
