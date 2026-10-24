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

// Function: _ri0_011
// Address: 0x1051a0 - 0x10529c
void _ri0_011_0x1051a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_011_0x1051a0");
#endif

    switch (ctx->pc) {
        case 0x1051c8u: goto label_1051c8;
        case 0x105200u: goto label_105200;
        default: break;
    }

    ctx->pc = 0x1051a0u;

    // 0x1051a0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1051a0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1051a4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1051a4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1051a8: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x1051a8u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x1051ac: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1051acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1051b0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1051b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1051b4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1051b4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1051b8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1051b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1051bc: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1051bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1051c0: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1051c0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1051c4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1051c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1051c8:
    // 0x1051c8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1051c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1051cc: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1051ccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1051d0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1051d0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1051d4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1051d4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1051d8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1051d8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1051dc: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1051dcu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1051e0: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1051e0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1051e4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1051e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1051e8: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x1051e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x1051ec: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1051ecu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1051f0: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x1051f0u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1051f4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1051f4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1051f8: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1051F8u;
    {
        const bool branch_taken_0x1051f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1051FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051F8u;
        // 0x1051fc: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1051f8) {
            ctx->pc = 0x105254u;
            goto label_105254;
        }
    }
    ctx->pc = 0x105200u;
label_105200:
    // 0x105200: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x105200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x105204: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x105204u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105208: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x105208u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10520c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x10520cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x105210: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x105210u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x105214: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x105214u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x105218: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x105218u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x10521c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10521cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x105220: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x105220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x105224: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x105224u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x105228: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x105228u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10522c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x10522cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x105230: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x105230u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x105234: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x105234u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x105238: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x105238u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x10523c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x10523cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x105240: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x105240u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x105244: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x105244u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x105248: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x105248u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x10524c: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x10524Cu;
    {
        const bool branch_taken_0x10524c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x105250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10524Cu;
        // 0x105250: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10524c) {
            ctx->pc = 0x105200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105200;
        }
    }
    ctx->pc = 0x105254u;
label_105254:
    // 0x105254: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x105254u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x105258: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x105258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x10525c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x10525cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x105260: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x105260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x105264: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x105264u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x105268: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x105268u;
    {
        const bool branch_taken_0x105268 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x10526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105268u;
        // 0x10526c: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105268) {
            ctx->pc = 0x105200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105200;
        }
    }
    ctx->pc = 0x105270u;
    // 0x105270: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x105270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x105274: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x105274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x105278: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x105278u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10527c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x10527cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x105280: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x105280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x105284: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x105284u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x105288: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x105288u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x10528c: 0x1540ffce  bnez        $t2, . + 4 + (-0x32 << 2)
    ctx->pc = 0x10528Cu;
    {
        const bool branch_taken_0x10528c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x105290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10528Cu;
        // 0x105290: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10528c) {
            ctx->pc = 0x1051C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1051c8;
        }
    }
    ctx->pc = 0x105294u;
    // 0x105294: 0x3e00008  jr          $ra
    ctx->pc = 0x105294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10529Cu;
}
