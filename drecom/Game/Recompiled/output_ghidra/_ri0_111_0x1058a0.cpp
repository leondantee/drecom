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

// Function: _ri0_111
// Address: 0x1058a0 - 0x1059b4
void _ri0_111_0x1058a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_111_0x1058a0");
#endif

    switch (ctx->pc) {
        case 0x1058c8u: goto label_1058c8;
        case 0x105900u: goto label_105900;
        default: break;
    }

    ctx->pc = 0x1058a0u;

    // 0x1058a0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1058a0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1058a4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1058a4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1058a8: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x1058a8u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x1058ac: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1058acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1058b0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1058b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1058b4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1058b4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1058b8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1058b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1058bc: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1058bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1058c0: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1058c0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1058c4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1058c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1058c8:
    // 0x1058c8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1058c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1058cc: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1058ccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1058d0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1058d0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1058d4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1058d4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1058d8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1058d8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1058dc: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1058dcu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1058e0: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1058e0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1058e4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1058e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1058e8: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x1058e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x1058ec: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1058ecu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1058f0: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x1058f0u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1058f4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1058f4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1058f8: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x1058F8u;
    {
        const bool branch_taken_0x1058f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1058FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1058F8u;
        // 0x1058fc: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1058f8) {
            ctx->pc = 0x10596Cu;
            goto label_10596c;
        }
    }
    ctx->pc = 0x105900u;
label_105900:
    // 0x105900: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x105900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x105904: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x105904u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105908: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x105908u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10590c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x10590cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x105910: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x105910u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x105914: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x105914u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x105918: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x105918u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x10591c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10591cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x105920: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x105920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x105924: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x105924u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x105928: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x105928u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10592c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x10592cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x105930: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x105930u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x105934: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x105934u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x105938: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x105938u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x10593c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x10593cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x105940: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x105940u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x105944: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x105944u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x105948: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x105948u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x10594c: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x10594cu;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x105950: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x105950u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x105954: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x105954u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x105958: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x105958u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x10595c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x10595cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x105960: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x105960u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x105964: 0x1ce0ffe6  bgtz        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x105964u;
    {
        const bool branch_taken_0x105964 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x105968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105964u;
        // 0x105968: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105964) {
            ctx->pc = 0x105900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105900;
        }
    }
    ctx->pc = 0x10596Cu;
label_10596c:
    // 0x10596c: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x10596cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x105970: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x105970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x105974: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x105974u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x105978: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x105978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x10597c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x10597cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x105980: 0x1540ffdf  bnez        $t2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x105980u;
    {
        const bool branch_taken_0x105980 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x105984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105980u;
        // 0x105984: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105980) {
            ctx->pc = 0x105900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105900;
        }
    }
    ctx->pc = 0x105988u;
    // 0x105988: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x105988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x10598c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x10598cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x105990: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x105990u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x105994: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x105994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x105998: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x105998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x10599c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x10599cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1059a0: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x1059a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1059a4: 0x1540ffc8  bnez        $t2, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1059A4u;
    {
        const bool branch_taken_0x1059a4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1059A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1059A4u;
        // 0x1059a8: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1059a4) {
            ctx->pc = 0x1058C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1058c8;
        }
    }
    ctx->pc = 0x1059ACu;
    // 0x1059ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1059ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1059ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1059B4u;
}
