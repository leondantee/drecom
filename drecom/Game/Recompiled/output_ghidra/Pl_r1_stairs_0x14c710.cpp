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

// Function: Pl_r1_stairs
// Address: 0x14c710 - 0x14c758
void Pl_r1_stairs_0x14c710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_stairs_0x14c710");
#endif

    switch (ctx->pc) {
        case 0x14c748u: goto label_14c748;
        default: break;
    }

    ctx->pc = 0x14c710u;

    // 0x14c710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14c710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14c714: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x14c714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x14c718: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x14c718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x14c71c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c720: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x14c720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x14c724: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x14c724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x14c728: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x14c728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14c72c: 0x3c021300  lui         $v0, 0x1300
    ctx->pc = 0x14c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4864 << 16));
    // 0x14c730: 0x34420f32  ori         $v0, $v0, 0xF32
    ctx->pc = 0x14c730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3890);
    // 0x14c734: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x14c734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14c738: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x14c738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x14c73c: 0x2445e7b0  addiu       $a1, $v0, -0x1850
    ctx->pc = 0x14c73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961072));
    // 0x14c740: 0xc059b14  jal         func_166C50
    ctx->pc = 0x14C740u;
    SET_GPR_U32(ctx, 31, 0x14C748u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x14C740u, 0x14C748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C748u;
label_14c748:
    // 0x14c748: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x14c748u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c74c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14c74cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14c750: 0x3e00008  jr          $ra
    ctx->pc = 0x14C750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C758u;
}
