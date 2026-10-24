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

// Function: _ri0_001
// Address: 0x104e70 - 0x104f3c
void _ri0_001_0x104e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_001_0x104e70");
#endif

    switch (ctx->pc) {
        case 0x104e98u: goto label_104e98;
        case 0x104eb8u: goto label_104eb8;
        default: break;
    }

    ctx->pc = 0x104e70u;

    // 0x104e70: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x104e70u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x104e74: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x104e74u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x104e78: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x104e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x104e7c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x104e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x104e80: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x104e80u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104e84: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x104e84u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x104e88: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x104e88u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x104e8c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x104e8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104e90: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x104e90u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x104e94: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x104e94u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_104e98:
    // 0x104e98: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x104e98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x104e9c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x104e9cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104ea0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x104ea0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x104ea4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x104ea4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x104ea8: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x104ea8u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x104eac: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x104eacu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x104eb0: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x104EB0u;
    {
        const bool branch_taken_0x104eb0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EB0u;
        // 0x104eb4: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104eb0) {
            ctx->pc = 0x104EF4u;
            goto label_104ef4;
        }
    }
    ctx->pc = 0x104EB8u;
label_104eb8:
    // 0x104eb8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x104eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x104ebc: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x104ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x104ec0: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x104ec0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104ec4: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x104ec4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x104ec8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x104ec8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x104ecc: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x104eccu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x104ed0: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x104ed0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x104ed4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x104ed4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x104ed8: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x104ed8u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x104edc: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x104edcu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x104ee0: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x104ee0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x104ee4: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x104ee4u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x104ee8: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x104ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x104eec: 0x1ce0fff2  bgtz        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x104EECu;
    {
        const bool branch_taken_0x104eec = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x104EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EECu;
        // 0x104ef0: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104eec) {
            ctx->pc = 0x104EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104eb8;
        }
    }
    ctx->pc = 0x104EF4u;
label_104ef4:
    // 0x104ef4: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x104ef4u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x104ef8: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x104ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x104efc: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x104efcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x104f00: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x104f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x104f04: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x104f04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x104f08: 0x1540ffeb  bnez        $t2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x104F08u;
    {
        const bool branch_taken_0x104f08 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x104F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F08u;
        // 0x104f0c: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f08) {
            ctx->pc = 0x104EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104eb8;
        }
    }
    ctx->pc = 0x104F10u;
    // 0x104f10: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x104f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x104f14: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x104f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x104f18: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x104f18u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104f1c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x104f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x104f20: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x104f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x104f24: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x104f24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x104f28: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x104f28u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x104f2c: 0x1540ffda  bnez        $t2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x104F2Cu;
    {
        const bool branch_taken_0x104f2c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x104F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F2Cu;
        // 0x104f30: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f2c) {
            ctx->pc = 0x104E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104e98;
        }
    }
    ctx->pc = 0x104F34u;
    // 0x104f34: 0x3e00008  jr          $ra
    ctx->pc = 0x104F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104F3Cu;
}
