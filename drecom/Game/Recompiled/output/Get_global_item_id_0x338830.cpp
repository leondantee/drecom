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

// Function: Get_global_item_id
// Address: 0x338830 - 0x3388a0
void Get_global_item_id_0x338830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_global_item_id_0x338830");
#endif

    switch (ctx->pc) {
        case 0x338830u: goto label_338830;
        case 0x338834u: goto label_338834;
        case 0x338838u: goto label_338838;
        case 0x33883cu: goto label_33883c;
        case 0x338840u: goto label_338840;
        case 0x338844u: goto label_338844;
        case 0x338848u: goto label_338848;
        case 0x33884cu: goto label_33884c;
        case 0x338850u: goto label_338850;
        case 0x338854u: goto label_338854;
        case 0x338858u: goto label_338858;
        case 0x33885cu: goto label_33885c;
        case 0x338860u: goto label_338860;
        case 0x338864u: goto label_338864;
        case 0x338868u: goto label_338868;
        case 0x33886cu: goto label_33886c;
        case 0x338870u: goto label_338870;
        case 0x338874u: goto label_338874;
        case 0x338878u: goto label_338878;
        case 0x33887cu: goto label_33887c;
        case 0x338880u: goto label_338880;
        case 0x338884u: goto label_338884;
        case 0x338888u: goto label_338888;
        case 0x33888cu: goto label_33888c;
        case 0x338890u: goto label_338890;
        case 0x338894u: goto label_338894;
        case 0x338898u: goto label_338898;
        case 0x33889cu: goto label_33889c;
        default: break;
    }

    ctx->pc = 0x338830u;

label_338830:
    // 0x338830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x338830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_338834:
    // 0x338834: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_338838:
    // 0x338838: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x338838u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
label_33883c:
    // 0x33883c: 0xa3a50018  sb          $a1, 0x18($sp)
    ctx->pc = 0x33883cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 5));
label_338840:
    // 0x338840: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x338840u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_338844:
    // 0x338844: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x338844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_338848:
    // 0x338848: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x338848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_33884c:
    // 0x33884c: 0x2c81000a  sltiu       $at, $a0, 0xA
    ctx->pc = 0x33884cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_338850:
    // 0x338850: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_338854:
    if (ctx->pc == 0x338854u) {
        ctx->pc = 0x338858u;
        goto label_338858;
    }
    ctx->pc = 0x338850u;
    {
        const bool branch_taken_0x338850 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x338850) {
            ctx->pc = 0x33888Cu;
            goto label_33888c;
        }
    }
    ctx->pc = 0x338858u;
label_338858:
    // 0x338858: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x338858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_33885c:
    // 0x33885c: 0x244321b0  addiu       $v1, $v0, 0x21B0
    ctx->pc = 0x33885cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8624));
label_338860:
    // 0x338860: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x338860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_338864:
    // 0x338864: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_338868:
    // 0x338868: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x338868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33886c:
    // 0x33886c: 0x400008  jr          $v0
label_338870:
    if (ctx->pc == 0x338870u) {
        ctx->pc = 0x338874u;
        goto label_338874;
    }
    ctx->pc = 0x33886Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33886Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x338874u;
label_338874:
    // 0x338874: 0x26100007  addiu       $s0, $s0, 0x7
    ctx->pc = 0x338874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
label_338878:
    // 0x338878: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x338878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_33887c:
    // 0x33887c: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x33887cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_338880:
    // 0x338880: 0x93a20018  lbu         $v0, 0x18($sp)
    ctx->pc = 0x338880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
label_338884:
    // 0x338884: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x338884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_338888:
    // 0x338888: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x338888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_33888c:
    // 0x33888c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33888cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_338890:
    // 0x338890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_338894:
    // 0x338894: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x338894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_338898:
    // 0x338898: 0x3e00008  jr          $ra
label_33889c:
    if (ctx->pc == 0x33889Cu) {
        ctx->pc = 0x3388A0u;
        goto label_fallthrough_0x338898;
    }
    ctx->pc = 0x338898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x338898:
    ctx->pc = 0x3388A0u;
}
