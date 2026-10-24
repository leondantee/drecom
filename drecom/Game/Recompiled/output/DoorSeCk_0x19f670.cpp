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

// Function: DoorSeCk
// Address: 0x19f670 - 0x19f798
void DoorSeCk_0x19f670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DoorSeCk_0x19f670");
#endif

    switch (ctx->pc) {
        case 0x19f730u: goto label_19f730;
        default: break;
    }

    ctx->pc = 0x19f670u;

    // 0x19f670: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19f670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19f674: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19f674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19f678: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19f678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19f67c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19f67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19f680: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19f680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19f684: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19f684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19f688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19f688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19f68c: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x19f68cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19f690: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19f690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19f694: 0x8c220074  lw          $v0, 0x74($at)
    ctx->pc = 0x19f694u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0074u));
    // 0x19f698: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x19f698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19f69c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19f69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19f6a0: 0x8c220078  lw          $v0, 0x78($at)
    ctx->pc = 0x19f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0078u));
    // 0x19f6a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19f6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19f6a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19f6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19f6ac: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x19f6acu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19f6b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19f6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19f6b4: 0x8c220068  lw          $v0, 0x68($at)
    ctx->pc = 0x19f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0068u));
    // 0x19f6b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19f6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f6bc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x19f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x19f6c0: 0x24428010  addiu       $v0, $v0, -0x7FF0
    ctx->pc = 0x19f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934544));
    // 0x19f6c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f6c8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x19f6c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f6cc: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F6CCu;
    {
        const bool branch_taken_0x19f6cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f6cc) {
            ctx->pc = 0x19F6E0u;
            goto label_19f6e0;
        }
    }
    ctx->pc = 0x19F6D4u;
    // 0x19f6d4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x19f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19f6d8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x19F6D8u;
    {
        const bool branch_taken_0x19f6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f6d8) {
            ctx->pc = 0x19F774u;
            goto label_19f774;
        }
    }
    ctx->pc = 0x19F6E0u;
label_19f6e0:
    // 0x19f6e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19f6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19f6e4: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x19f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x19f6e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19f6ec: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x19f6ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19f6f0: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F6F0u;
    {
        const bool branch_taken_0x19f6f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f6f0) {
            ctx->pc = 0x19F704u;
            goto label_19f704;
        }
    }
    ctx->pc = 0x19F6F8u;
    // 0x19f6f8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x19f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19f6fc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19F6FCu;
    {
        const bool branch_taken_0x19f6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f6fc) {
            ctx->pc = 0x19F774u;
            goto label_19f774;
        }
    }
    ctx->pc = 0x19F704u;
label_19f704:
    // 0x19f704: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x19f704u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19f708: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x19f708u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19f70c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f710: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F710u;
    {
        const bool branch_taken_0x19f710 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f710) {
            ctx->pc = 0x19F724u;
            goto label_19f724;
        }
    }
    ctx->pc = 0x19F718u;
    // 0x19f718: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x19f718u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19f71c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19F71Cu;
    {
        const bool branch_taken_0x19f71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f71c) {
            ctx->pc = 0x19F774u;
            goto label_19f774;
        }
    }
    ctx->pc = 0x19F724u;
label_19f724:
    // 0x19f724: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x19f724u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19f728: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x19F728u;
    {
        const bool branch_taken_0x19f728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f728) {
            ctx->pc = 0x19F760u;
            goto label_19f760;
        }
    }
    ctx->pc = 0x19F730u;
label_19f730:
    // 0x19f730: 0x32a3ffff  andi        $v1, $s5, 0xFFFF
    ctx->pc = 0x19f730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x19f734: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x19f734u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19f738: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19f738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19f73c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19F73Cu;
    {
        const bool branch_taken_0x19f73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f73c) {
            ctx->pc = 0x19F758u;
            goto label_19f758;
        }
    }
    ctx->pc = 0x19F744u;
    // 0x19f744: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x19f744u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19f748: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19f748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19f74c: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x19f74cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19f750: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19F750u;
    {
        const bool branch_taken_0x19f750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f750) {
            ctx->pc = 0x19F770u;
            goto label_19f770;
        }
    }
    ctx->pc = 0x19F758u;
label_19f758:
    // 0x19f758: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x19f758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x19f75c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19f75cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_19f760:
    // 0x19f760: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x19f760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x19f764: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x19F764u;
    {
        const bool branch_taken_0x19f764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f764) {
            ctx->pc = 0x19F730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f730;
        }
    }
    ctx->pc = 0x19F76Cu;
    // 0x19f76c: 0x0  nop
    ctx->pc = 0x19f76cu;
    // NOP
label_19f770:
    // 0x19f770: 0x72801628  paddub      $v0, $s4, $zero
    ctx->pc = 0x19f770u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_19f774:
    // 0x19f774: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19f774u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f778: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19f778u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f77c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19f77cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f780: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19f780u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f784: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19f784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f788: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f78c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x19f78cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19f790: 0x3e00008  jr          $ra
    ctx->pc = 0x19F790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F798u;
}
