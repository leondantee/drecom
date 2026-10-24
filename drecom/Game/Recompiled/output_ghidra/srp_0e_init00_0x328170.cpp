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

// Function: srp_0e_init00
// Address: 0x328170 - 0x3281b8
void srp_0e_init00_0x328170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_0e_init00_0x328170");
#endif

    switch (ctx->pc) {
        case 0x32819cu: goto label_32819c;
        case 0x3281a8u: goto label_3281a8;
        default: break;
    }

    ctx->pc = 0x328170u;

    // 0x328170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x328174: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x328174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x328178: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x328178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x32817c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32817cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328180: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x328180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x328184: 0xac430358  sw          $v1, 0x358($v0)
    ctx->pc = 0x328184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 856), GPR_U32(ctx, 3));
    // 0x328188: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x328188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32818c: 0xac400274  sw          $zero, 0x274($v0)
    ctx->pc = 0x32818cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 628), GPR_U32(ctx, 0));
    // 0x328190: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x328190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x328194: 0xc0c9930  jal         func_3264C0
    ctx->pc = 0x328194u;
    SET_GPR_U32(ctx, 31, 0x32819Cu);
    ctx->pc = 0x3264C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3264C0u, 0x328194u, 0x32819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32819Cu;
label_32819c:
    // 0x32819c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x32819cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3281a0: 0xc0ca1e0  jal         func_328780
    ctx->pc = 0x3281A0u;
    SET_GPR_U32(ctx, 31, 0x3281A8u);
    ctx->pc = 0x328780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328780u, 0x3281A0u, 0x3281A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3281A8u;
label_3281a8:
    // 0x3281a8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3281a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3281ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3281acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3281b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3281B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3281B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3281B8u;
}
