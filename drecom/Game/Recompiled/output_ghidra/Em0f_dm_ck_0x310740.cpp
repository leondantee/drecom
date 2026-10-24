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

// Function: Em0f_dm_ck
// Address: 0x310740 - 0x310d20
void Em0f_dm_ck_0x310740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_dm_ck_0x310740");
#endif

    switch (ctx->pc) {
        case 0x3107fcu: goto label_3107fc;
        case 0x310834u: goto label_310834;
        case 0x310840u: goto label_310840;
        case 0x3108b0u: goto label_3108b0;
        case 0x3109fcu: goto label_3109fc;
        case 0x310b1cu: goto label_310b1c;
        case 0x310bc4u: goto label_310bc4;
        case 0x310c6cu: goto label_310c6c;
        default: break;
    }

    ctx->pc = 0x310740u;

    // 0x310740: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x310740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x310744: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x310744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x310748: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x310748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31074c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31074cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x310750: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x310750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x310754: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x310754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x310758: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x310758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x31075c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x31075cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x310760: 0x24639ac0  addiu       $v1, $v1, -0x6540
    ctx->pc = 0x310760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941376));
    // 0x310764: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x310764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x310768: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x310768u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399AC0u));
    // 0x31076c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x31076cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x310770: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310774: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x310774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x310778: 0x10600161  beqz        $v1, . + 4 + (0x161 << 2)
    ctx->pc = 0x310778u;
    {
        const bool branch_taken_0x310778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x310778) {
            ctx->pc = 0x310D00u;
            goto label_310d00;
        }
    }
    ctx->pc = 0x310780u;
    // 0x310780: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310784: 0x8c621364  lw          $v0, 0x1364($v1)
    ctx->pc = 0x310784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4964)));
    // 0x310788: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x310788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x31078c: 0xac621364  sw          $v0, 0x1364($v1)
    ctx->pc = 0x31078cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4964), GPR_U32(ctx, 2));
    // 0x310790: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x310790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310794: 0x8c421364  lw          $v0, 0x1364($v0)
    ctx->pc = 0x310794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x310798: 0x2c4100a1  sltiu       $at, $v0, 0xA1
    ctx->pc = 0x310798u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)161) ? 1 : 0);
    // 0x31079c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x31079Cu;
    {
        const bool branch_taken_0x31079c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31079c) {
            ctx->pc = 0x3107B0u;
            goto label_3107b0;
        }
    }
    ctx->pc = 0x3107A4u;
    // 0x3107a4: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x3107a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x3107a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3107a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3107ac: 0xac431364  sw          $v1, 0x1364($v0)
    ctx->pc = 0x3107acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4964), GPR_U32(ctx, 3));
label_3107b0:
    // 0x3107b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3107b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3107b4: 0x8c421368  lw          $v0, 0x1368($v0)
    ctx->pc = 0x3107b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4968)));
    // 0x3107b8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3107b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3107bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3107BCu;
    {
        const bool branch_taken_0x3107bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3107bc) {
            ctx->pc = 0x3107D4u;
            goto label_3107d4;
        }
    }
    ctx->pc = 0x3107C4u;
    // 0x3107c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3107c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3107c8: 0x846211f2  lh          $v0, 0x11F2($v1)
    ctx->pc = 0x3107c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x3107cc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3107ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3107d0: 0xa46211f2  sh          $v0, 0x11F2($v1)
    ctx->pc = 0x3107d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4594), (uint16_t)GPR_U32(ctx, 2));
label_3107d4:
    // 0x3107d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3107d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3107d8: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x3107d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x3107dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3107dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3107e0: 0x8c531210  lw          $s3, 0x1210($v0)
    ctx->pc = 0x3107e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x3107e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3107e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3107e8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3107e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3107ec: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x3107ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x3107f0: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x3107f0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x3107f4: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x3107F4u;
    SET_GPR_U32(ctx, 31, 0x3107FCu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x3107F4u, 0x3107FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3107FCu;
label_3107fc:
    // 0x3107fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3107fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310800: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x310800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x310804: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x310804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x310808: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x310808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31080c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31080cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x310810: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x310810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x310814: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x310814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x310818: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x310818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31081c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31081cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x310820: 0x24042c00  addiu       $a0, $zero, 0x2C00
    ctx->pc = 0x310820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11264));
    // 0x310824: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x310824u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x310828: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x310828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31082c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31082Cu;
    SET_GPR_U32(ctx, 31, 0x310834u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31082Cu, 0x310834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310834u;
label_310834:
    // 0x310834: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x310834u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x310838: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x310838u;
    SET_GPR_U32(ctx, 31, 0x310840u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x310838u, 0x310840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310840u;
label_310840:
    // 0x310840: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x310840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310844: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x310844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x310848: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x310848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31084c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x31084cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x310850: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x310850u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x310854: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310858: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x31085c: 0x247006c0  addiu       $s0, $v1, 0x6C0
    ctx->pc = 0x31085cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x310860: 0x8e120034  lw          $s2, 0x34($s0)
    ctx->pc = 0x310860u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x310864: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x310864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x310868: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x310868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x31086c: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x31086cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x310870: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310874: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x310874u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x310878: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x310878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x31087c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x31087cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x310880: 0x286100c8  slti        $at, $v1, 0xC8
    ctx->pc = 0x310880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x310884: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x310884u;
    {
        const bool branch_taken_0x310884 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x310884) {
            ctx->pc = 0x3108E0u;
            goto label_3108e0;
        }
    }
    ctx->pc = 0x31088Cu;
    // 0x31088c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x31088cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310890: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x310890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x310894: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x310894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
    // 0x310898: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x310898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31089c: 0xac821338  sw          $v0, 0x1338($a0)
    ctx->pc = 0x31089cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 2));
    // 0x3108a0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3108a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3108a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3108a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3108a8: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x3108A8u;
    SET_GPR_U32(ctx, 31, 0x3108B0u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x3108A8u, 0x3108B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3108B0u;
label_3108b0:
    // 0x3108b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3108b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3108b4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3108b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3108b8: 0x24700090  addiu       $s0, $v1, 0x90
    ctx->pc = 0x3108b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x3108bc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3108bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3108c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3108c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3108c4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3108c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3108c8: 0x24701680  addiu       $s0, $v1, 0x1680
    ctx->pc = 0x3108c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5760));
    // 0x3108cc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3108ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3108d0: 0x8e120034  lw          $s2, 0x34($s0)
    ctx->pc = 0x3108d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x3108d4: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x3108d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3108d8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3108d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3108dc: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x3108dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_3108e0:
    // 0x3108e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3108e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3108e4: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x3108e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x3108e8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3108e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3108ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3108ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3108f0: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3108F0u;
    {
        const bool branch_taken_0x3108f0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3108f0) {
            ctx->pc = 0x31092Cu;
            goto label_31092c;
        }
    }
    ctx->pc = 0x3108F8u;
    // 0x3108f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3108f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3108fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3108fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310900: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x310900u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x310904: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310908: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x310908u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31090c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x31090cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310910: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x310910u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x310914: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310918: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x310918u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31091c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x31091cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310920: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x310920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x310924: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x310924u;
    {
        const bool branch_taken_0x310924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310924) {
            ctx->pc = 0x310D00u;
            goto label_310d00;
        }
    }
    ctx->pc = 0x31092Cu;
label_31092c:
    // 0x31092c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x31092cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310930: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x310930u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x310934: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x310934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x310938: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x310938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x31093c: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x31093Cu;
    {
        const bool branch_taken_0x31093c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31093c) {
            ctx->pc = 0x310978u;
            goto label_310978;
        }
    }
    ctx->pc = 0x310944u;
    // 0x310944: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310948: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x310948u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x31094c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x31094cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x310950: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x310950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x310954: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x310954u;
    {
        const bool branch_taken_0x310954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x310954) {
            ctx->pc = 0x310978u;
            goto label_310978;
        }
    }
    ctx->pc = 0x31095Cu;
    // 0x31095c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x31095cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310960: 0x846311f2  lh          $v1, 0x11F2($v1)
    ctx->pc = 0x310960u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x310964: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x310964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x310968: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x310968u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31096c: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x31096cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x310970: 0x142000e3  bnez        $at, . + 4 + (0xE3 << 2)
    ctx->pc = 0x310970u;
    {
        const bool branch_taken_0x310970 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x310970) {
            ctx->pc = 0x310D00u;
            goto label_310d00;
        }
    }
    ctx->pc = 0x310978u;
label_310978:
    // 0x310978: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31097c: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x31097cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x310980: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x310980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x310984: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x310984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x310988: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x310988u;
    {
        const bool branch_taken_0x310988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x310988) {
            ctx->pc = 0x3109A8u;
            goto label_3109a8;
        }
    }
    ctx->pc = 0x310990u;
    // 0x310990: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310994: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x310994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x310998: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x310998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31099c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x31099cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3109a0: 0x148300af  bne         $a0, $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x3109A0u;
    {
        const bool branch_taken_0x3109a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3109a0) {
            ctx->pc = 0x310C60u;
            goto label_310c60;
        }
    }
    ctx->pc = 0x3109A8u;
label_3109a8:
    // 0x3109a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3109a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3109ac: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3109acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3109b0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3109b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3109b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3109b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3109b8: 0x108300d1  beq         $a0, $v1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x3109B8u;
    {
        const bool branch_taken_0x3109b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3109b8) {
            ctx->pc = 0x310D00u;
            goto label_310d00;
        }
    }
    ctx->pc = 0x3109C0u;
    // 0x3109c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3109c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3109c4: 0x8c631364  lw          $v1, 0x1364($v1)
    ctx->pc = 0x3109c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4964)));
    // 0x3109c8: 0x2c610065  sltiu       $at, $v1, 0x65
    ctx->pc = 0x3109c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x3109cc: 0x1420007a  bnez        $at, . + 4 + (0x7A << 2)
    ctx->pc = 0x3109CCu;
    {
        const bool branch_taken_0x3109cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3109cc) {
            ctx->pc = 0x310BB8u;
            goto label_310bb8;
        }
    }
    ctx->pc = 0x3109D4u;
    // 0x3109d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3109d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3109d8: 0xac601364  sw          $zero, 0x1364($v1)
    ctx->pc = 0x3109d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4964), GPR_U32(ctx, 0));
    // 0x3109dc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3109dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3109e0: 0x8c631368  lw          $v1, 0x1368($v1)
    ctx->pc = 0x3109e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4968)));
    // 0x3109e4: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x3109e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3109e8: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3109E8u;
    {
        const bool branch_taken_0x3109e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3109e8) {
            ctx->pc = 0x310A9Cu;
            goto label_310a9c;
        }
    }
    ctx->pc = 0x3109F0u;
    // 0x3109f0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x3109f0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3109f4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3109F4u;
    {
        const bool branch_taken_0x3109f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3109f4) {
            ctx->pc = 0x310A40u;
            goto label_310a40;
        }
    }
    ctx->pc = 0x3109FCu;
label_3109fc:
    // 0x3109fc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3109fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x310a00: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x310a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x310a04: 0x246397d0  addiu       $v1, $v1, -0x6830
    ctx->pc = 0x310a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940624));
    // 0x310a08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x310a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x310a0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x310a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x310a10: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x310a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x310a14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x310a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x310a18: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x310a18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x310a1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310a20: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x310a24: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x310a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x310a28: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x310a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x310a2c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x310a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x310a30: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x310a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x310a34: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x310a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x310a38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x310a38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x310a3c: 0x0  nop
    ctx->pc = 0x310a3cu;
    // NOP
label_310a40:
    // 0x310a40: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x310a40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x310a44: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x310A44u;
    {
        const bool branch_taken_0x310a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x310a44) {
            ctx->pc = 0x3109FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3109fc;
        }
    }
    ctx->pc = 0x310A4Cu;
    // 0x310a4c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x310a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310a50: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x310a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x310a54: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x310a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x310a58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x310a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x310a5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x310a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x310a60: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x310a60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x310a64: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x310a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x310a68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310a6c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x310a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x310a70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x310a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310a74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310a78: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x310a78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x310a7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310a80: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x310a80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x310a84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310a88: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x310a88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x310a8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310a90: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x310a90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x310a94: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x310A94u;
    {
        const bool branch_taken_0x310a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310a94) {
            ctx->pc = 0x310D00u;
            goto label_310d00;
        }
    }
    ctx->pc = 0x310A9Cu;
label_310a9c:
    // 0x310a9c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x310a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310aa0: 0x8c83136c  lw          $v1, 0x136C($a0)
    ctx->pc = 0x310aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4972)));
    // 0x310aa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x310aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x310aa8: 0xac83136c  sw          $v1, 0x136C($a0)
    ctx->pc = 0x310aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4972), GPR_U32(ctx, 3));
    // 0x310aac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310ab0: 0x8c63136c  lw          $v1, 0x136C($v1)
    ctx->pc = 0x310ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4972)));
    // 0x310ab4: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x310ab4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x310ab8: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x310AB8u;
    {
        const bool branch_taken_0x310ab8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x310ab8) {
            ctx->pc = 0x310B10u;
            goto label_310b10;
        }
    }
    ctx->pc = 0x310AC0u;
    // 0x310ac0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x310ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310ac4: 0x8c831368  lw          $v1, 0x1368($a0)
    ctx->pc = 0x310ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4968)));
    // 0x310ac8: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x310ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x310acc: 0xac831368  sw          $v1, 0x1368($a0)
    ctx->pc = 0x310accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4968), GPR_U32(ctx, 3));
    // 0x310ad0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310ad4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x310ad8: 0x24701710  addiu       $s0, $v1, 0x1710
    ctx->pc = 0x310ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5904));
    // 0x310adc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x310adcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x310ae0: 0x8e120034  lw          $s2, 0x34($s0)
    ctx->pc = 0x310ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x310ae4: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x310ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x310ae8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x310ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x310aec: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x310aecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x310af0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310af4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x310af8: 0x247017a0  addiu       $s0, $v1, 0x17A0
    ctx->pc = 0x310af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 6048));
    // 0x310afc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x310afcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x310b00: 0x8e120034  lw          $s2, 0x34($s0)
    ctx->pc = 0x310b00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x310b04: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x310b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x310b08: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x310b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x310b0c: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x310b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_310b10:
    // 0x310b10: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x310b10u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x310b14: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x310B14u;
    {
        const bool branch_taken_0x310b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310b14) {
            ctx->pc = 0x310B60u;
            goto label_310b60;
        }
    }
    ctx->pc = 0x310B1Cu;
label_310b1c:
    // 0x310b1c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x310b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x310b20: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x310b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x310b24: 0x246397d0  addiu       $v1, $v1, -0x6830
    ctx->pc = 0x310b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940624));
    // 0x310b28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x310b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x310b2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x310b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x310b30: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x310b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x310b34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x310b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x310b38: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x310b38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x310b3c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310b40: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x310b44: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x310b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x310b48: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x310b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x310b4c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x310b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x310b50: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x310b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x310b54: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x310b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x310b58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x310b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x310b5c: 0x0  nop
    ctx->pc = 0x310b5cu;
    // NOP
label_310b60:
    // 0x310b60: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x310b60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x310b64: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x310B64u;
    {
        const bool branch_taken_0x310b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x310b64) {
            ctx->pc = 0x310B1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310b1c;
        }
    }
    ctx->pc = 0x310B6Cu;
    // 0x310b6c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x310b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310b70: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x310b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x310b74: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x310b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x310b78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x310b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x310b7c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x310b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x310b80: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x310b80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x310b84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x310b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x310b88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310b8c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x310b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x310b90: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310b94: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x310b94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x310b98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310b9c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x310b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x310ba0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310ba4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x310ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x310ba8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310bac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x310bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x310bb0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x310BB0u;
    {
        const bool branch_taken_0x310bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310bb0) {
            ctx->pc = 0x310D00u;
            goto label_310d00;
        }
    }
    ctx->pc = 0x310BB8u;
label_310bb8:
    // 0x310bb8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x310bb8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x310bbc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x310BBCu;
    {
        const bool branch_taken_0x310bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310bbc) {
            ctx->pc = 0x310C08u;
            goto label_310c08;
        }
    }
    ctx->pc = 0x310BC4u;
label_310bc4:
    // 0x310bc4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x310bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x310bc8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x310bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x310bcc: 0x246397d0  addiu       $v1, $v1, -0x6830
    ctx->pc = 0x310bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940624));
    // 0x310bd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x310bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x310bd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x310bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x310bd8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x310bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x310bdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x310bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x310be0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x310be0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x310be4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310be8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x310bec: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x310becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x310bf0: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x310bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x310bf4: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x310bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x310bf8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x310bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x310bfc: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x310bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x310c00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x310c00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x310c04: 0x0  nop
    ctx->pc = 0x310c04u;
    // NOP
label_310c08:
    // 0x310c08: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x310c08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x310c0c: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x310C0Cu;
    {
        const bool branch_taken_0x310c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x310c0c) {
            ctx->pc = 0x310BC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310bc4;
        }
    }
    ctx->pc = 0x310C14u;
    // 0x310c14: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x310c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310c18: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x310c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x310c1c: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x310c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x310c20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x310c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x310c24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x310c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x310c28: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x310c28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x310c2c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x310c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x310c30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310c34: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x310c34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x310c38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310c3c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x310c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x310c40: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310c44: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x310c44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x310c48: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310c4c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x310c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x310c50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310c54: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x310c54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x310c58: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x310C58u;
    {
        const bool branch_taken_0x310c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310c58) {
            ctx->pc = 0x310D00u;
            goto label_310d00;
        }
    }
    ctx->pc = 0x310C60u;
label_310c60:
    // 0x310c60: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x310c60u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x310c64: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x310C64u;
    {
        const bool branch_taken_0x310c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310c64) {
            ctx->pc = 0x310CB0u;
            goto label_310cb0;
        }
    }
    ctx->pc = 0x310C6Cu;
label_310c6c:
    // 0x310c6c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x310c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x310c70: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x310c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x310c74: 0x246397d0  addiu       $v1, $v1, -0x6830
    ctx->pc = 0x310c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940624));
    // 0x310c78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x310c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x310c7c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x310c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x310c80: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x310c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x310c84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x310c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x310c88: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x310c88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x310c8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310c90: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x310c94: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x310c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x310c98: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x310c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x310c9c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x310c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x310ca0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x310ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x310ca4: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x310ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x310ca8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x310ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x310cac: 0x0  nop
    ctx->pc = 0x310cacu;
    // NOP
label_310cb0:
    // 0x310cb0: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x310cb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x310cb4: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x310CB4u;
    {
        const bool branch_taken_0x310cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x310cb4) {
            ctx->pc = 0x310C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310c6c;
        }
    }
    ctx->pc = 0x310CBCu;
    // 0x310cbc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x310cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310cc0: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x310cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x310cc4: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x310cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x310cc8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x310cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x310ccc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x310cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x310cd0: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x310cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x310cd4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x310cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x310cd8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310cdc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x310cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x310ce0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310ce4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x310ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x310ce8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310cec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x310cecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x310cf0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310cf4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x310cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x310cf8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310cfc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x310cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_310d00:
    // 0x310d00: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x310d00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x310d04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x310d04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x310d08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x310d08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x310d0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x310d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310d10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x310d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310d14: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x310d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x310d18: 0x3e00008  jr          $ra
    ctx->pc = 0x310D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310D20u;
}
