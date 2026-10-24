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

// Function: _rix_101
// Address: 0x1053f8 - 0x1054dc
void _rix_101_0x1053f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_101_0x1053f8");
#endif

    switch (ctx->pc) {
        case 0x10543cu: goto label_10543c;
        default: break;
    }

    ctx->pc = 0x1053f8u;

    // 0x1053f8: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1053f8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1053fc: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1053fcu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x105400: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x105400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x105404: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x105404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x105408: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x105408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10540c: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x10540cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x105410: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x105410u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x105414: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x105414u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x105418: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x105418u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10541c: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x10541cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x105420: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x105420u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x105424: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x105424u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x105428: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x105428u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x10542c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x10542cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x105430: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x105430u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x105434: 0x10e00021  beqz        $a3, . + 4 + (0x21 << 2)
    ctx->pc = 0x105434u;
    {
        const bool branch_taken_0x105434 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x105438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105434u;
        // 0x105438: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105434) {
            ctx->pc = 0x1054BCu;
            goto label_1054bc;
        }
    }
    ctx->pc = 0x10543Cu;
label_10543c:
    // 0x10543c: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x10543cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x105440: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x105440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x105444: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x105444u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105448: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x105448u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10544c: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x10544cu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x105450: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x105450u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x105454: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x105454u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x105458: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x105458u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x10545c: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x10545cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x105460: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x105460u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x105464: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x105464u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x105468: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x105468u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x10546c: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x10546cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x105470: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x105470u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x105474: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x105474u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x105478: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x105478u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x10547c: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x10547cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x105480: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x105480u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x105484: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x105484u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x105488: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x105488u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x10548c: 0x70405188  pcgth       $t2, $v0, $zero
    ctx->pc = 0x10548cu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x105490: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x105490u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x105494: 0x704a5108  paddh       $t2, $v0, $t2
    ctx->pc = 0x105494u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x105498: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x105498u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x10549c: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x10549cu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1054a0: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x1054a0u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x1054a4: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x1054a4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x1054a8: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x1054a8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1054ac: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x1054acu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x1054b0: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x1054b0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x1054b4: 0x1ce0ffe1  bgtz        $a3, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1054B4u;
    {
        const bool branch_taken_0x1054b4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1054B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054B4u;
        // 0x1054b8: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054b4) {
            ctx->pc = 0x10543Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10543c;
        }
    }
    ctx->pc = 0x1054BCu;
label_1054bc:
    // 0x1054bc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1054bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1054c0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1054c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1054c4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1054c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1054c8: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x1054c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1054cc: 0x1540ffdb  bnez        $t2, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1054CCu;
    {
        const bool branch_taken_0x1054cc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1054D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054CCu;
        // 0x1054d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054cc) {
            ctx->pc = 0x10543Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10543c;
        }
    }
    ctx->pc = 0x1054D4u;
    // 0x1054d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1054D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1054D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1054DCu;
}
