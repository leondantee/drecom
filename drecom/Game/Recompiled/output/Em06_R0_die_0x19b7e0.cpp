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

// Function: Em06_R0_die
// Address: 0x19b7e0 - 0x19b840
void Em06_R0_die_0x19b7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R0_die_0x19b7e0");
#endif

    switch (ctx->pc) {
        case 0x19b7e0u: goto label_19b7e0;
        case 0x19b7e4u: goto label_19b7e4;
        case 0x19b7e8u: goto label_19b7e8;
        case 0x19b7ecu: goto label_19b7ec;
        case 0x19b7f0u: goto label_19b7f0;
        case 0x19b7f4u: goto label_19b7f4;
        case 0x19b7f8u: goto label_19b7f8;
        case 0x19b7fcu: goto label_19b7fc;
        case 0x19b800u: goto label_19b800;
        case 0x19b804u: goto label_19b804;
        case 0x19b808u: goto label_19b808;
        case 0x19b80cu: goto label_19b80c;
        case 0x19b810u: goto label_19b810;
        case 0x19b814u: goto label_19b814;
        case 0x19b818u: goto label_19b818;
        case 0x19b81cu: goto label_19b81c;
        case 0x19b820u: goto label_19b820;
        case 0x19b824u: goto label_19b824;
        case 0x19b828u: goto label_19b828;
        case 0x19b82cu: goto label_19b82c;
        case 0x19b830u: goto label_19b830;
        case 0x19b834u: goto label_19b834;
        case 0x19b838u: goto label_19b838;
        case 0x19b83cu: goto label_19b83c;
        default: break;
    }

    ctx->pc = 0x19b7e0u;

label_19b7e0:
    // 0x19b7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19b7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19b7e4:
    // 0x19b7e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x19b7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_19b7e8:
    // 0x19b7e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x19b7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_19b7ec:
    // 0x19b7ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_19b7f0:
    // 0x19b7f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_19b7f4:
    // 0x19b7f4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x19b7f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_19b7f8:
    // 0x19b7f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19b7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19b7fc:
    // 0x19b7fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19b800:
    // 0x19b800: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x19b800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_19b804:
    // 0x19b804: 0x244273d8  addiu       $v0, $v0, 0x73D8
    ctx->pc = 0x19b804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29656));
label_19b808:
    // 0x19b808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19b808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19b80c:
    // 0x19b80c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19b810:
    // 0x19b810: 0x40f809  jalr        $v0
label_19b814:
    if (ctx->pc == 0x19B814u) {
        ctx->pc = 0x19B818u;
        goto label_19b818;
    }
    ctx->pc = 0x19B810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19B818u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B810u, 0x19B818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B818u;
label_19b818:
    // 0x19b818: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_19b81c:
    // 0x19b81c: 0xc05d1b8  jal         func_1746E0
label_19b820:
    if (ctx->pc == 0x19B820u) {
        ctx->pc = 0x19B824u;
        goto label_19b824;
    }
    ctx->pc = 0x19B81Cu;
    SET_GPR_U32(ctx, 31, 0x19B824u);
    ctx->pc = 0x1746E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1746E0u, 0x19B81Cu, 0x19B824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B824u;
label_19b824:
    // 0x19b824: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_19b828:
    // 0x19b828: 0xc065a18  jal         func_196860
label_19b82c:
    if (ctx->pc == 0x19B82Cu) {
        ctx->pc = 0x19B830u;
        goto label_19b830;
    }
    ctx->pc = 0x19B828u;
    SET_GPR_U32(ctx, 31, 0x19B830u);
    ctx->pc = 0x196860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196860u, 0x19B828u, 0x19B830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B830u;
label_19b830:
    // 0x19b830: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19b830u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19b834:
    // 0x19b834: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19b834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19b838:
    // 0x19b838: 0x3e00008  jr          $ra
label_19b83c:
    if (ctx->pc == 0x19B83Cu) {
        ctx->pc = 0x19B840u;
        goto label_fallthrough_0x19b838;
    }
    ctx->pc = 0x19B838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19b838:
    ctx->pc = 0x19B840u;
}
