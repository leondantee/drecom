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

// Function: Em10_R0_die
// Address: 0x132b90 - 0x132c04
void Em10_R0_die_0x132b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R0_die_0x132b90");
#endif

    switch (ctx->pc) {
        case 0x132b90u: goto label_132b90;
        case 0x132b94u: goto label_132b94;
        case 0x132b98u: goto label_132b98;
        case 0x132b9cu: goto label_132b9c;
        case 0x132ba0u: goto label_132ba0;
        case 0x132ba4u: goto label_132ba4;
        case 0x132ba8u: goto label_132ba8;
        case 0x132bacu: goto label_132bac;
        case 0x132bb0u: goto label_132bb0;
        case 0x132bb4u: goto label_132bb4;
        case 0x132bb8u: goto label_132bb8;
        case 0x132bbcu: goto label_132bbc;
        case 0x132bc0u: goto label_132bc0;
        case 0x132bc4u: goto label_132bc4;
        case 0x132bc8u: goto label_132bc8;
        case 0x132bccu: goto label_132bcc;
        case 0x132bd0u: goto label_132bd0;
        case 0x132bd4u: goto label_132bd4;
        case 0x132bd8u: goto label_132bd8;
        case 0x132bdcu: goto label_132bdc;
        case 0x132be0u: goto label_132be0;
        case 0x132be4u: goto label_132be4;
        case 0x132be8u: goto label_132be8;
        case 0x132becu: goto label_132bec;
        case 0x132bf0u: goto label_132bf0;
        case 0x132bf4u: goto label_132bf4;
        case 0x132bf8u: goto label_132bf8;
        case 0x132bfcu: goto label_132bfc;
        case 0x132c00u: goto label_132c00;
        default: break;
    }

    ctx->pc = 0x132b90u;

label_132b90:
    // 0x132b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_132b94:
    // 0x132b94: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x132b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_132b98:
    // 0x132b98: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x132b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_132b9c:
    // 0x132b9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x132b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_132ba0:
    // 0x132ba0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x132ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_132ba4:
    // 0x132ba4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x132ba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_132ba8:
    // 0x132ba8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x132ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_132bac:
    // 0x132bac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x132bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_132bb0:
    // 0x132bb0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x132bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_132bb4:
    // 0x132bb4: 0x24425020  addiu       $v0, $v0, 0x5020
    ctx->pc = 0x132bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20512));
label_132bb8:
    // 0x132bb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x132bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_132bbc:
    // 0x132bbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x132bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_132bc0:
    // 0x132bc0: 0x40f809  jalr        $v0
label_132bc4:
    if (ctx->pc == 0x132BC4u) {
        ctx->pc = 0x132BC8u;
        goto label_132bc8;
    }
    ctx->pc = 0x132BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132BC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132BC0u, 0x132BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x132BC8u;
label_132bc8:
    // 0x132bc8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x132bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_132bcc:
    // 0x132bcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x132bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_132bd0:
    // 0x132bd0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x132bd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_132bd4:
    // 0x132bd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x132bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_132bd8:
    // 0x132bd8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x132bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_132bdc:
    // 0x132bdc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x132bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_132be0:
    // 0x132be0: 0x24425040  addiu       $v0, $v0, 0x5040
    ctx->pc = 0x132be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20544));
label_132be4:
    // 0x132be4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x132be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_132be8:
    // 0x132be8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x132be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_132bec:
    // 0x132bec: 0x40f809  jalr        $v0
label_132bf0:
    if (ctx->pc == 0x132BF0u) {
        ctx->pc = 0x132BF4u;
        goto label_132bf4;
    }
    ctx->pc = 0x132BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132BF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132BECu, 0x132BF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x132BF4u;
label_132bf4:
    // 0x132bf4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x132bf4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_132bf8:
    // 0x132bf8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x132bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_132bfc:
    // 0x132bfc: 0x3e00008  jr          $ra
label_132c00:
    if (ctx->pc == 0x132C00u) {
        ctx->pc = 0x132C04u;
        goto label_fallthrough_0x132bfc;
    }
    ctx->pc = 0x132BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x132bfc:
    ctx->pc = 0x132C04u;
}
