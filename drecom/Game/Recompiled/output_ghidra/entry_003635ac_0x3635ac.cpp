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

// Function: entry_003635ac
// Address: 0x3635ac - 0x36362c
void entry_003635ac_0x3635ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003635ac_0x3635ac");
#endif

    switch (ctx->pc) {
        case 0x3635d8u: goto label_3635d8;
        case 0x3635e4u: goto label_3635e4;
        case 0x3635f0u: goto label_3635f0;
        case 0x3635fcu: goto label_3635fc;
        case 0x363618u: goto label_363618;
        default: break;
    }

    ctx->pc = 0x3635acu;

label_3635ac:
    // 0x3635ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3635acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3635b0:
    // 0x3635b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3635b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3635b4:
    // 0x3635b4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3635b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3635b8:
    // 0x3635b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3635b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3635bc:
    // 0x3635bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3635bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3635c0:
    // 0x3635c0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3635c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3635c4:
    // 0x3635c4: 0x2442af40  addiu       $v0, $v0, -0x50C0
    ctx->pc = 0x3635c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946624));
label_3635c8:
    // 0x3635c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3635c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3635cc:
    // 0x3635cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3635ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3635d0:
    // 0x3635d0: 0x40f809  jalr        $v0
label_3635d4:
    if (ctx->pc == 0x3635D4u) {
        ctx->pc = 0x3635D8u;
        goto label_3635d8;
    }
    ctx->pc = 0x3635D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3635D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3635D0u, 0x3635D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3635D8u;
label_3635d8:
    // 0x3635d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3635d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3635dc:
    // 0x3635dc: 0xc0da178  jal         func_3685E0
label_3635e0:
    if (ctx->pc == 0x3635E0u) {
        ctx->pc = 0x3635E4u;
        goto label_3635e4;
    }
    ctx->pc = 0x3635DCu;
    SET_GPR_U32(ctx, 31, 0x3635E4u);
    ctx->pc = 0x3685E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3685E0u, 0x3635DCu, 0x3635E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3635E4u;
label_3635e4:
    // 0x3635e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3635e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3635e8:
    // 0x3635e8: 0xc0da1cc  jal         func_368730
label_3635ec:
    if (ctx->pc == 0x3635ECu) {
        ctx->pc = 0x3635F0u;
        goto label_3635f0;
    }
    ctx->pc = 0x3635E8u;
    SET_GPR_U32(ctx, 31, 0x3635F0u);
    ctx->pc = 0x368730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368730u, 0x3635E8u, 0x3635F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3635F0u;
label_3635f0:
    // 0x3635f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3635f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3635f4:
    // 0x3635f4: 0xc097c6c  jal         func_25F1B0
label_3635f8:
    if (ctx->pc == 0x3635F8u) {
        ctx->pc = 0x3635FCu;
        goto label_3635fc;
    }
    ctx->pc = 0x3635F4u;
    SET_GPR_U32(ctx, 31, 0x3635FCu);
    ctx->pc = 0x25F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F1B0u, 0x3635F4u, 0x3635FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3635FCu;
label_3635fc:
    // 0x3635fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3635fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_363600:
    // 0x363600: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x363600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_363604:
    // 0x363604: 0x245003f0  addiu       $s0, $v0, 0x3F0
    ctx->pc = 0x363604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
label_363608:
    // 0x363608: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x363608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36360c:
    // 0x36360c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x36360cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_363610:
    // 0x363610: 0xc079140  jal         func_1E4500
label_363614:
    if (ctx->pc == 0x363614u) {
        ctx->pc = 0x363618u;
        goto label_363618;
    }
    ctx->pc = 0x363610u;
    SET_GPR_U32(ctx, 31, 0x363618u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x363610u, 0x363618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363618u;
label_363618:
    // 0x363618: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x363618u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36361c:
    // 0x36361c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36361cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_363620:
    // 0x363620: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x363620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_363624:
    // 0x363624: 0x3e00008  jr          $ra
label_363628:
    if (ctx->pc == 0x363628u) {
        ctx->pc = 0x36362Cu;
        goto label_fallthrough_0x363624;
    }
    ctx->pc = 0x363624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x363624:
    ctx->pc = 0x36362Cu;
}
