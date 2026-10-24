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

// Function: Em0c_R1_br_mv0a
// Address: 0x228760 - 0x2288b8
void Em0c_R1_br_mv0a_0x228760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_br_mv0a_0x228760");
#endif

    switch (ctx->pc) {
        case 0x2287d4u: goto label_2287d4;
        case 0x2287f8u: goto label_2287f8;
        default: break;
    }

    ctx->pc = 0x228760u;

    // 0x228760: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x228760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x228764: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x228764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x228768: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x228768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22876c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22876cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x228770: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x228770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x228774: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x228774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x228778: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x228778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22877c: 0x2452dbc0  addiu       $s2, $v0, -0x2440
    ctx->pc = 0x22877cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x228780: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x228780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x228784: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x228784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x228788: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x228788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x22878c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x22878cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x228790: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x228790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x228794: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x228794u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x228798: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x228798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22879c: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x22879cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x2287a0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2287a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2287a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2287a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2287a8: 0x0  nop
    ctx->pc = 0x2287a8u;
    // NOP
    // 0x2287ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2287acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2287b0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2287b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2287b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2287b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2287b8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2287b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2287bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2287bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2287c0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2287c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2287c4: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x2287c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2287c8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2287c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2287cc: 0xc059e1c  jal         func_167870
    ctx->pc = 0x2287CCu;
    SET_GPR_U32(ctx, 31, 0x2287D4u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x2287CCu, 0x2287D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2287D4u;
label_2287d4:
    // 0x2287d4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2287d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2287d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2287d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2287dc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2287dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2287e0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2287e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2287e4: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x2287e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2287e8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2287e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2287ec: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2287ecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2287f0: 0xc059e1c  jal         func_167870
    ctx->pc = 0x2287F0u;
    SET_GPR_U32(ctx, 31, 0x2287F8u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x2287F0u, 0x2287F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2287F8u;
label_2287f8:
    // 0x2287f8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2287f8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2287fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2287fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x228800: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x228800u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x228804: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x228804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x228808: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x228808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x22880c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22880cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x228810: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x228810u;
    {
        const bool branch_taken_0x228810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x228810) {
            ctx->pc = 0x22889Cu;
            goto label_22889c;
        }
    }
    ctx->pc = 0x228818u;
    // 0x228818: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x228818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22881c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x22881cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x228820: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x228820u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x228824: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x228824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x228828: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x228828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x22882c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x22882cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x228830: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x228830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x228834: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x228834u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x228838: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x228838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x22883c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x22883cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x228840: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x228840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x228844: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x228844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x228848: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x228848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x22884c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22884cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228850: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x228850u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x228854: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x228854u;
    {
        const bool branch_taken_0x228854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x228854) {
            ctx->pc = 0x22889Cu;
            goto label_22889c;
        }
    }
    ctx->pc = 0x22885Cu;
    // 0x22885c: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x22885Cu;
    {
        const bool branch_taken_0x22885c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22885c) {
            ctx->pc = 0x22889Cu;
            goto label_22889c;
        }
    }
    ctx->pc = 0x228864u;
    // 0x228864: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x228864u;
    {
        const bool branch_taken_0x228864 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x228864) {
            ctx->pc = 0x22889Cu;
            goto label_22889c;
        }
    }
    ctx->pc = 0x22886Cu;
    // 0x22886c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22886cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228870: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x228870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x228874: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x228874u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x228878: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x228878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22887c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x22887cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x228880: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x228880u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x228884: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x228884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x228888: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x228888u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22888c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x22888cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x228890: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x228890u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x228894: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x228894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x228898: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x228898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_22889c:
    // 0x22889c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x22889cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2288a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2288a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2288a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2288a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2288a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2288a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2288ac: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2288acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2288b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2288B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2288B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2288B8u;
}
