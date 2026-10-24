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

// Function: _ri0_100
// Address: 0x105348 - 0x1053f4
void _ri0_100_0x105348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_100_0x105348");
#endif

    switch (ctx->pc) {
        case 0x105368u: goto label_105368;
        case 0x105370u: goto label_105370;
        default: break;
    }

    ctx->pc = 0x105348u;

    // 0x105348: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x105348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x10534c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x10534cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x105350: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x105350u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x105354: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x105354u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x105358: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x105358u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10535c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x10535cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x105360: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x105360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x105364: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x105364u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_105368:
    // 0x105368: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x105368u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10536c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x10536cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_105370:
    // 0x105370: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x105370u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105374: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x105374u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x105378: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x105378u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x10537c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x10537cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x105380: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x105380u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x105384: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x105384u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x105388: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x105388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10538c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x10538cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x105390: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x105390u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x105394: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x105394u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x105398: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x105398u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x10539c: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x10539cu;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x1053a0: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x1053a0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x1053a4: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x1053a4u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1053a8: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x1053a8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x1053ac: 0x1ce0fff0  bgtz        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1053ACu;
    {
        const bool branch_taken_0x1053ac = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1053B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1053ACu;
        // 0x1053b0: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053ac) {
            ctx->pc = 0x105370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105370;
        }
    }
    ctx->pc = 0x1053B4u;
    // 0x1053b4: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x1053b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x1053b8: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x1053b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x1053bc: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1053bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1053c0: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x1053c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1053c4: 0x1540ffea  bnez        $t2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1053C4u;
    {
        const bool branch_taken_0x1053c4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1053C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1053C4u;
        // 0x1053c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053c4) {
            ctx->pc = 0x105370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105370;
        }
    }
    ctx->pc = 0x1053CCu;
    // 0x1053cc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1053ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1053d0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1053d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1053d4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1053d4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1053d8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1053d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1053dc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1053dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1053e0: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1053e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1053e4: 0x1580ffe0  bnez        $t4, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1053E4u;
    {
        const bool branch_taken_0x1053e4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1053E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1053E4u;
        // 0x1053e8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053e4) {
            ctx->pc = 0x105368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105368;
        }
    }
    ctx->pc = 0x1053ECu;
    // 0x1053ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1053ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1053ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1053F4u;
}
