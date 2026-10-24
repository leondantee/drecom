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

// Function: _ri0_101
// Address: 0x1054e0 - 0x1055c4
void _ri0_101_0x1054e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_101_0x1054e0");
#endif

    switch (ctx->pc) {
        case 0x105508u: goto label_105508;
        case 0x105528u: goto label_105528;
        default: break;
    }

    ctx->pc = 0x1054e0u;

    // 0x1054e0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1054e0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1054e4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1054e4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1054e8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1054e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1054ec: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1054ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1054f0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1054f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1054f4: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1054f4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1054f8: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1054f8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1054fc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1054fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105500: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x105500u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x105504: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x105504u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_105508:
    // 0x105508: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x105508u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10550c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x10550cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105510: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x105510u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x105514: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x105514u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x105518: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x105518u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10551c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x10551cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x105520: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x105520u;
    {
        const bool branch_taken_0x105520 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x105524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105520u;
        // 0x105524: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105520) {
            ctx->pc = 0x10557Cu;
            goto label_10557c;
        }
    }
    ctx->pc = 0x105528u;
label_105528:
    // 0x105528: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x105528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x10552c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x10552cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x105530: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x105530u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105534: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x105534u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x105538: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x105538u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x10553c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x10553cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x105540: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x105540u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x105544: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x105544u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x105548: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x105548u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x10554c: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x10554cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x105550: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x105550u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x105554: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x105554u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x105558: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x105558u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x10555c: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x10555cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x105560: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x105560u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x105564: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x105564u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x105568: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x105568u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x10556c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x10556cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x105570: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x105570u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x105574: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x105574u;
    {
        const bool branch_taken_0x105574 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x105578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105574u;
        // 0x105578: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105574) {
            ctx->pc = 0x105528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105528;
        }
    }
    ctx->pc = 0x10557Cu;
label_10557c:
    // 0x10557c: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x10557cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x105580: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x105580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x105584: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x105584u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x105588: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x105588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x10558c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x10558cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x105590: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x105590u;
    {
        const bool branch_taken_0x105590 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x105594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105590u;
        // 0x105594: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105590) {
            ctx->pc = 0x105528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105528;
        }
    }
    ctx->pc = 0x105598u;
    // 0x105598: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x105598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x10559c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x10559cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1055a0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1055a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1055a4: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1055a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1055a8: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1055a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1055ac: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1055acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1055b0: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x1055b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1055b4: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1055B4u;
    {
        const bool branch_taken_0x1055b4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1055B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1055B4u;
        // 0x1055b8: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055b4) {
            ctx->pc = 0x105508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105508;
        }
    }
    ctx->pc = 0x1055BCu;
    // 0x1055bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1055BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1055BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1055C4u;
}
