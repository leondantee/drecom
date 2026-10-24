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

// Function: eff2d_02_init00
// Address: 0x1a9b80 - 0x1a9c14
void eff2d_02_init00_0x1a9b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_02_init00_0x1a9b80");
#endif

    switch (ctx->pc) {
        case 0x1a9bc0u: goto label_1a9bc0;
        case 0x1a9bd4u: goto label_1a9bd4;
        case 0x1a9bf0u: goto label_1a9bf0;
        case 0x1a9bfcu: goto label_1a9bfc;
        default: break;
    }

    ctx->pc = 0x1a9b80u;

    // 0x1a9b80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a9b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a9b84: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1a9b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1a9b88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a9b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a9b8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a9b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a9b90: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1a9b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1a9b94: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a9b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a9b98: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x1a9b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1a9b9c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a9b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a9ba0: 0x8c5101fc  lw          $s1, 0x1FC($v0)
    ctx->pc = 0x1a9ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
    // 0x1a9ba4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a9ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9ba8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a9ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a9bac: 0xac430128  sw          $v1, 0x128($v0)
    ctx->pc = 0x1a9bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 3));
    // 0x1a9bb0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1a9bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a9bb4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1a9bb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a9bb8: 0xc0c98a4  jal         func_326290
    ctx->pc = 0x1A9BB8u;
    SET_GPR_U32(ctx, 31, 0x1A9BC0u);
    ctx->pc = 0x326290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326290u, 0x1A9BB8u, 0x1A9BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9BC0u;
label_1a9bc0:
    // 0x1a9bc0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a9bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a9bc4: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x1a9bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1a9bc8: 0x26060170  addiu       $a2, $s0, 0x170
    ctx->pc = 0x1a9bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x1a9bcc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1A9BCCu;
    SET_GPR_U32(ctx, 31, 0x1A9BD4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1A9BCCu, 0x1A9BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9BD4u;
label_1a9bd4:
    // 0x1a9bd4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a9bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a9bd8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a9bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a9bdc: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x1a9bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1a9be0: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x1a9be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1a9be4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1a9be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a9be8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1A9BE8u;
    SET_GPR_U32(ctx, 31, 0x1A9BF0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1A9BE8u, 0x1A9BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9BF0u;
label_1a9bf0:
    // 0x1a9bf0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1a9bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a9bf4: 0xc0c9918  jal         func_326460
    ctx->pc = 0x1A9BF4u;
    SET_GPR_U32(ctx, 31, 0x1A9BFCu);
    ctx->pc = 0x326460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326460u, 0x1A9BF4u, 0x1A9BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9BFCu;
label_1a9bfc:
    // 0x1a9bfc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1a9bfcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9c00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a9c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9c04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a9c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9c08: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a9c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a9c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9C14u;
}
