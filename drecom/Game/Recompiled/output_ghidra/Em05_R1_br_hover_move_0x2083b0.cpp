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

// Function: Em05_R1_br_hover_move
// Address: 0x2083b0 - 0x2083e4
void Em05_R1_br_hover_move_0x2083b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_br_hover_move_0x2083b0");
#endif

    switch (ctx->pc) {
        case 0x2083c8u: goto label_2083c8;
        default: break;
    }

    ctx->pc = 0x2083b0u;

    // 0x2083b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2083b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2083b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2083b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2083b8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2083b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2083bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2083bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2083c0: 0xc080efc  jal         func_203BF0
    ctx->pc = 0x2083C0u;
    SET_GPR_U32(ctx, 31, 0x2083C8u);
    ctx->pc = 0x203BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BF0u, 0x2083C0u, 0x2083C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2083C8u;
label_2083c8:
    // 0x2083c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2083c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2083cc: 0x24631358  addiu       $v1, $v1, 0x1358
    ctx->pc = 0x2083ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4952));
    // 0x2083d0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2083d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2083d4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2083d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2083d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2083d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2083dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2083DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2083DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2083E4u;
}
