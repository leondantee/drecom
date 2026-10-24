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

// Function: Srp_tag_init
// Address: 0x18a670 - 0x18a774
void Srp_tag_init_0x18a670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Srp_tag_init_0x18a670");
#endif

    switch (ctx->pc) {
        case 0x18a6b4u: goto label_18a6b4;
        case 0x18a6d0u: goto label_18a6d0;
        case 0x18a6ecu: goto label_18a6ec;
        case 0x18a700u: goto label_18a700;
        case 0x18a720u: goto label_18a720;
        default: break;
    }

    ctx->pc = 0x18a670u;

    // 0x18a670: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18a670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18a674: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x18a674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x18a678: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18a678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18a67c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18a67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18a680: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a684: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a688: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x18a688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x18a68c: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x18a68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x18a690: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18a690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18a694: 0x2453a630  addiu       $s3, $v0, -0x59D0
    ctx->pc = 0x18a694u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x18a698: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x18a698u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a69c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18a69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18a6a0: 0x24020b30  addiu       $v0, $zero, 0xB30
    ctx->pc = 0x18a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2864));
    // 0x18a6a4: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x18a6a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x18a6a8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x18a6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18a6ac: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x18A6ACu;
    SET_GPR_U32(ctx, 31, 0x18A6B4u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x18A6ACu, 0x18A6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A6B4u;
label_18a6b4:
    // 0x18a6b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x18a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x18a6b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18a6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x18a6bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x18a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x18a6c0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x18a6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a6c4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x18a6c4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a6c8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x18A6C8u;
    {
        const bool branch_taken_0x18a6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a6c8) {
            ctx->pc = 0x18A740u;
            goto label_18a740;
        }
    }
    ctx->pc = 0x18A6D0u;
label_18a6d0:
    // 0x18a6d0: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x18A6D0u;
    {
        const bool branch_taken_0x18a6d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a6d0) {
            ctx->pc = 0x18A70Cu;
            goto label_18a70c;
        }
    }
    ctx->pc = 0x18A6D8u;
    // 0x18a6d8: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x18a6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x18a6dc: 0x24050e20  addiu       $a1, $zero, 0xE20
    ctx->pc = 0x18a6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3616));
    // 0x18a6e0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x18a6e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a6e4: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x18A6E4u;
    SET_GPR_U32(ctx, 31, 0x18A6ECu);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x18A6E4u, 0x18A6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A6ECu;
label_18a6ec:
    // 0x18a6ec: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x18a6ecu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18a6f0: 0x1640000b  bnez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x18A6F0u;
    {
        const bool branch_taken_0x18a6f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a6f0) {
            ctx->pc = 0x18A720u;
            goto label_18a720;
        }
    }
    ctx->pc = 0x18A6F8u;
    // 0x18a6f8: 0xc0593e8  jal         func_164FA0
    ctx->pc = 0x18A6F8u;
    SET_GPR_U32(ctx, 31, 0x18A700u);
    ctx->pc = 0x164FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164FA0u, 0x18A6F8u, 0x18A700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A700u;
label_18a700:
    // 0x18a700: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x18a700u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a704: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x18A704u;
    {
        const bool branch_taken_0x18a704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a704) {
            ctx->pc = 0x18A754u;
            goto label_18a754;
        }
    }
    ctx->pc = 0x18A70Cu;
label_18a70c:
    // 0x18a70c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x18a70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x18a710: 0x24050e20  addiu       $a1, $zero, 0xE20
    ctx->pc = 0x18a710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3616));
    // 0x18a714: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x18a714u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a718: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x18A718u;
    SET_GPR_U32(ctx, 31, 0x18A720u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x18A718u, 0x18A720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A720u;
label_18a720:
    // 0x18a720: 0xae000b18  sw          $zero, 0xB18($s0)
    ctx->pc = 0x18a720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 0));
    // 0x18a724: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18a724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18a728: 0xae02036c  sw          $v0, 0x36C($s0)
    ctx->pc = 0x18a728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 2));
    // 0x18a72c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x18a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x18a730: 0xae020370  sw          $v0, 0x370($s0)
    ctx->pc = 0x18a730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 2));
    // 0x18a734: 0x26100b30  addiu       $s0, $s0, 0xB30
    ctx->pc = 0x18a734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2864));
    // 0x18a738: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18a738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18a73c: 0x0  nop
    ctx->pc = 0x18a73cu;
    // NOP
label_18a740:
    // 0x18a740: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x18a740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18a744: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x18a744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18a748: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x18A748u;
    {
        const bool branch_taken_0x18a748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a748) {
            ctx->pc = 0x18A6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a6d0;
        }
    }
    ctx->pc = 0x18A750u;
    // 0x18a750: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x18a750u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_18a754:
    // 0x18a754: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x18a754u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a758: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18a758u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a75c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18a75cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a760: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a764: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a768: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x18a768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18a76c: 0x3e00008  jr          $ra
    ctx->pc = 0x18A76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A774u;
}
