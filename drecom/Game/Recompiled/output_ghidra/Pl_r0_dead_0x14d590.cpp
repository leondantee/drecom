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

// Function: Pl_r0_dead
// Address: 0x14d590 - 0x14d5d8
void Pl_r0_dead_0x14d590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r0_dead_0x14d590");
#endif

    switch (ctx->pc) {
        case 0x14d5c8u: goto label_14d5c8;
        default: break;
    }

    ctx->pc = 0x14d590u;

    // 0x14d590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d594: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x14d594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x14d598: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x14d598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x14d59c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d5a0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x14d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x14d5a4: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x14d5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x14d5a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x14d5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14d5ac: 0x3c021300  lui         $v0, 0x1300
    ctx->pc = 0x14d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4864 << 16));
    // 0x14d5b0: 0x34420f32  ori         $v0, $v0, 0xF32
    ctx->pc = 0x14d5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3890);
    // 0x14d5b4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x14d5b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14d5b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x14d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x14d5bc: 0x2445e7b0  addiu       $a1, $v0, -0x1850
    ctx->pc = 0x14d5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961072));
    // 0x14d5c0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x14D5C0u;
    SET_GPR_U32(ctx, 31, 0x14D5C8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x14D5C0u, 0x14D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D5C8u;
label_14d5c8:
    // 0x14d5c8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x14d5c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d5cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14d5ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14d5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x14D5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D5D8u;
}
