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

// Function: _rix_100
// Address: 0x1052a0 - 0x105344
void _rix_100_0x1052a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_100_0x1052a0");
#endif

    switch (ctx->pc) {
        case 0x1052c4u: goto label_1052c4;
        default: break;
    }

    ctx->pc = 0x1052a0u;

    // 0x1052a0: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1052a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1052a4: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1052a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1052a8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1052a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1052ac: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1052acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1052b0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1052b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1052b4: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x1052b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1052b8: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x1052b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1052bc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1052bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1052c0: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1052c0u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_1052c4:
    // 0x1052c4: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1052c4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1052c8: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1052c8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1052cc: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x1052ccu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1052d0: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x1052d0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1052d4: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x1052d4u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1052d8: 0x79c20000  lq          $v0, 0x0($t6)
    ctx->pc = 0x1052d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1052dc: 0x79c30010  lq          $v1, 0x10($t6)
    ctx->pc = 0x1052dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x1052e0: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x1052e0u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x1052e4: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x1052e4u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x1052e8: 0x70405188  pcgth       $t2, $v0, $zero
    ctx->pc = 0x1052e8u;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1052ec: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x1052ecu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x1052f0: 0x704a5108  paddh       $t2, $v0, $t2
    ctx->pc = 0x1052f0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x1052f4: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x1052f4u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1052f8: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x1052f8u;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1052fc: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x1052fcu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x105300: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x105300u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x105304: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x105304u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x105308: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x105308u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x10530c: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x10530cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x105310: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x105310u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x105314: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x105314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x105318: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x105318u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x10531c: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x10531Cu;
    {
        const bool branch_taken_0x10531c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x105320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10531Cu;
        // 0x105320: 0xc93021  addu        $a2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10531c) {
            ctx->pc = 0x1052C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1052c4;
        }
    }
    ctx->pc = 0x105324u;
    // 0x105324: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x105324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x105328: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x105328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x10532c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x10532cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x105330: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x105330u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x105334: 0x1580ffe3  bnez        $t4, . + 4 + (-0x1D << 2)
    ctx->pc = 0x105334u;
    {
        const bool branch_taken_0x105334 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x105338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105334u;
        // 0x105338: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105334) {
            ctx->pc = 0x1052C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1052c4;
        }
    }
    ctx->pc = 0x10533Cu;
    // 0x10533c: 0x3e00008  jr          $ra
    ctx->pc = 0x10533Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10533Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105344u;
}
