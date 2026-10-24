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

// Function: Weapon_select_movie_trans
// Address: 0x28f060 - 0x28f094
void Weapon_select_movie_trans_0x28f060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Weapon_select_movie_trans_0x28f060");
#endif

    switch (ctx->pc) {
        case 0x28f084u: goto label_28f084;
        default: break;
    }

    ctx->pc = 0x28f060u;

    // 0x28f060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28f064: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x28f064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x28f068: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x28f068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x28f06c: 0x8c23c294  lw          $v1, -0x3D6C($at)
    ctx->pc = 0x28f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FC294u));
    // 0x28f070: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F070u;
    {
        const bool branch_taken_0x28f070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f070) {
            ctx->pc = 0x28F084u;
            goto label_28f084;
        }
    }
    ctx->pc = 0x28F078u;
    // 0x28f078: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x28f078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28f07c: 0xc0d7594  jal         func_35D650
    ctx->pc = 0x28F07Cu;
    SET_GPR_U32(ctx, 31, 0x28F084u);
    ctx->pc = 0x35D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D650u, 0x28F07Cu, 0x28F084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F084u;
label_28f084:
    // 0x28f084: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x28f084u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f088: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x28f088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28f08c: 0x3e00008  jr          $ra
    ctx->pc = 0x28F08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F094u;
}
