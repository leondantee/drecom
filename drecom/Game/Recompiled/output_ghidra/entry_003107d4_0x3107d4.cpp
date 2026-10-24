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

// Function: entry_003107d4
// Address: 0x3107d4 - 0x3108e0
void entry_003107d4_0x3107d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003107d4_0x3107d4");
#endif

    switch (ctx->pc) {
        case 0x3107fcu: goto label_3107fc;
        case 0x310834u: goto label_310834;
        case 0x310840u: goto label_310840;
        case 0x3108b0u: goto label_3108b0;
        default: break;
    }

    ctx->pc = 0x3107d4u;

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
            return;
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
    ctx->pc = 0x3108e0u;
}
