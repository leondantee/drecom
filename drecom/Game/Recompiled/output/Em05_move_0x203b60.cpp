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

// Function: Em05_move
// Address: 0x203b60 - 0x203be4
void Em05_move_0x203b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_move_0x203b60");
#endif

    switch (ctx->pc) {
        case 0x203b60u: goto label_203b60;
        case 0x203b64u: goto label_203b64;
        case 0x203b68u: goto label_203b68;
        case 0x203b6cu: goto label_203b6c;
        case 0x203b70u: goto label_203b70;
        case 0x203b74u: goto label_203b74;
        case 0x203b78u: goto label_203b78;
        case 0x203b7cu: goto label_203b7c;
        case 0x203b80u: goto label_203b80;
        case 0x203b84u: goto label_203b84;
        case 0x203b88u: goto label_203b88;
        case 0x203b8cu: goto label_203b8c;
        case 0x203b90u: goto label_203b90;
        case 0x203b94u: goto label_203b94;
        case 0x203b98u: goto label_203b98;
        case 0x203b9cu: goto label_203b9c;
        case 0x203ba0u: goto label_203ba0;
        case 0x203ba4u: goto label_203ba4;
        case 0x203ba8u: goto label_203ba8;
        case 0x203bacu: goto label_203bac;
        case 0x203bb0u: goto label_203bb0;
        case 0x203bb4u: goto label_203bb4;
        case 0x203bb8u: goto label_203bb8;
        case 0x203bbcu: goto label_203bbc;
        case 0x203bc0u: goto label_203bc0;
        case 0x203bc4u: goto label_203bc4;
        case 0x203bc8u: goto label_203bc8;
        case 0x203bccu: goto label_203bcc;
        case 0x203bd0u: goto label_203bd0;
        case 0x203bd4u: goto label_203bd4;
        case 0x203bd8u: goto label_203bd8;
        case 0x203bdcu: goto label_203bdc;
        case 0x203be0u: goto label_203be0;
        default: break;
    }

    ctx->pc = 0x203b60u;

label_203b60:
    // 0x203b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x203b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_203b64:
    // 0x203b64: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x203b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_203b68:
    // 0x203b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x203b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_203b6c:
    // 0x203b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_203b70:
    // 0x203b70: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x203b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_203b74:
    // 0x203b74: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x203b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_203b78:
    // 0x203b78: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x203b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_203b7c:
    // 0x203b7c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x203b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_203b80:
    // 0x203b80: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x203b80u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_203b84:
    // 0x203b84: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x203b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_203b88:
    // 0x203b88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x203b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_203b8c:
    // 0x203b8c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x203b8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_203b90:
    // 0x203b90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x203b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_203b94:
    // 0x203b94: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x203b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_203b98:
    // 0x203b98: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x203b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_203b9c:
    // 0x203b9c: 0x24429fc0  addiu       $v0, $v0, -0x6040
    ctx->pc = 0x203b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942656));
label_203ba0:
    // 0x203ba0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x203ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_203ba4:
    // 0x203ba4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x203ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_203ba8:
    // 0x203ba8: 0x40f809  jalr        $v0
label_203bac:
    if (ctx->pc == 0x203BACu) {
        ctx->pc = 0x203BB0u;
        goto label_203bb0;
    }
    ctx->pc = 0x203BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203BB0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203BA8u, 0x203BB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203BB0u;
label_203bb0:
    // 0x203bb0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x203bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_203bb4:
    // 0x203bb4: 0xc080fa8  jal         func_203EA0
label_203bb8:
    if (ctx->pc == 0x203BB8u) {
        ctx->pc = 0x203BBCu;
        goto label_203bbc;
    }
    ctx->pc = 0x203BB4u;
    SET_GPR_U32(ctx, 31, 0x203BBCu);
    ctx->pc = 0x203EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203EA0u, 0x203BB4u, 0x203BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BBCu;
label_203bbc:
    // 0x203bbc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x203bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_203bc0:
    // 0x203bc0: 0x84249fb8  lh          $a0, -0x6048($at)
    ctx->pc = 0x203bc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294942648)));
label_203bc4:
    // 0x203bc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x203bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_203bc8:
    // 0x203bc8: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x203bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
label_203bcc:
    // 0x203bcc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x203bccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_203bd0:
    // 0x203bd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x203bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_203bd4:
    // 0x203bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_203bd8:
    // 0x203bd8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x203bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_203bdc:
    // 0x203bdc: 0x3e00008  jr          $ra
label_203be0:
    if (ctx->pc == 0x203BE0u) {
        ctx->pc = 0x203BE4u;
        goto label_fallthrough_0x203bdc;
    }
    ctx->pc = 0x203BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x203bdc:
    ctx->pc = 0x203BE4u;
}
