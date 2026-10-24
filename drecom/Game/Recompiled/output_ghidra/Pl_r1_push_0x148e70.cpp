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

// Function: Pl_r1_push
// Address: 0x148e70 - 0x148eb8
void Pl_r1_push_0x148e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_push_0x148e70");
#endif

    switch (ctx->pc) {
        case 0x148ea0u: goto label_148ea0;
        default: break;
    }

    ctx->pc = 0x148e70u;

    // 0x148e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148e74: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x148e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x148e78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x148e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x148e7c: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x148e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x148e80: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x148e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x148e84: 0x3c021300  lui         $v0, 0x1300
    ctx->pc = 0x148e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4864 << 16));
    // 0x148e88: 0x34420f32  ori         $v0, $v0, 0xF32
    ctx->pc = 0x148e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3890);
    // 0x148e8c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x148e8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x148e90: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x148e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x148e94: 0x2445e7b0  addiu       $a1, $v0, -0x1850
    ctx->pc = 0x148e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961072));
    // 0x148e98: 0xc059b14  jal         func_166C50
    ctx->pc = 0x148E98u;
    SET_GPR_U32(ctx, 31, 0x148EA0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x148E98u, 0x148EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148EA0u;
label_148ea0:
    // 0x148ea0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x148ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x148ea4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x148ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x148ea8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x148ea8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148eac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x148eacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x148eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x148EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148EB8u;
}
