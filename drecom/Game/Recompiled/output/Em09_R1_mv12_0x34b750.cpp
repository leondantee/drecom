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

// Function: Em09_R1_mv12
// Address: 0x34b750 - 0x34be84
void Em09_R1_mv12_0x34b750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv12_0x34b750");
#endif

    switch (ctx->pc) {
        case 0x34b7f8u: goto label_34b7f8;
        case 0x34b89cu: goto label_34b89c;
        case 0x34b8b8u: goto label_34b8b8;
        case 0x34b8d0u: goto label_34b8d0;
        case 0x34b918u: goto label_34b918;
        case 0x34b928u: goto label_34b928;
        case 0x34b934u: goto label_34b934;
        case 0x34b940u: goto label_34b940;
        case 0x34ba3cu: goto label_34ba3c;
        case 0x34ba50u: goto label_34ba50;
        case 0x34ba5cu: goto label_34ba5c;
        case 0x34bb58u: goto label_34bb58;
        case 0x34bb7cu: goto label_34bb7c;
        case 0x34bb9cu: goto label_34bb9c;
        case 0x34bbc4u: goto label_34bbc4;
        case 0x34bbd8u: goto label_34bbd8;
        case 0x34bbe8u: goto label_34bbe8;
        case 0x34bc00u: goto label_34bc00;
        case 0x34bc34u: goto label_34bc34;
        case 0x34bcc0u: goto label_34bcc0;
        default: break;
    }

    ctx->pc = 0x34b750u;

    // 0x34b750: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x34b750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x34b754: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x34b754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x34b758: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x34b758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x34b75c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34b75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x34b760: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34b760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34b764: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34b764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34b768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34b768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34b76c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34b76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34b770: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x34b770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x34b774: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34b774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b778: 0x8c9002d0  lw          $s0, 0x2D0($a0)
    ctx->pc = 0x34b778u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x34b77c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x34b780: 0x2475dbc0  addiu       $s5, $v1, -0x2440
    ctx->pc = 0x34b780u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x34b784: 0x8fb30098  lw          $s3, 0x98($sp)
    ctx->pc = 0x34b784u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b788: 0x26641330  addiu       $a0, $s3, 0x1330
    ctx->pc = 0x34b788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
    // 0x34b78c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x34b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x34b790: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x34b790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x34b794: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x34b794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x34b798: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34b798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b79c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x34b79cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x34b7a0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34b7a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34b7a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34b7a8: 0x108300e7  beq         $a0, $v1, . + 4 + (0xE7 << 2)
    ctx->pc = 0x34B7A8u;
    {
        const bool branch_taken_0x34b7a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34b7a8) {
            ctx->pc = 0x34BB48u;
            goto label_34bb48;
        }
    }
    ctx->pc = 0x34B7B0u;
    // 0x34b7b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b7b4: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x34B7B4u;
    {
        const bool branch_taken_0x34b7b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34b7b4) {
            ctx->pc = 0x34B858u;
            goto label_34b858;
        }
    }
    ctx->pc = 0x34B7BCu;
    // 0x34b7bc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34B7BCu;
    {
        const bool branch_taken_0x34b7bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b7bc) {
            ctx->pc = 0x34B7CCu;
            goto label_34b7cc;
        }
    }
    ctx->pc = 0x34B7C4u;
    // 0x34b7c4: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x34B7C4u;
    {
        const bool branch_taken_0x34b7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b7c4) {
            ctx->pc = 0x34BD88u;
            goto label_34bd88;
        }
    }
    ctx->pc = 0x34B7CCu;
label_34b7cc:
    // 0x34b7cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34b7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b7d0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b7d4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x34b7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x34b7d8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b7dc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34b7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b7e0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x34b7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x34b7e4: 0x24060f2d  addiu       $a2, $zero, 0xF2D
    ctx->pc = 0x34b7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3885));
    // 0x34b7e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34b7e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b7ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34b7ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34b7f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34B7F0u;
    SET_GPR_U32(ctx, 31, 0x34B7F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34B7F0u, 0x34B7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B7F8u;
label_34b7f8:
    // 0x34b7f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34b7f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34b7fc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b800: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34b800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b804: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34b804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34b808: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x34b808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x34b80c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x34b80cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x34b810: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34b810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b814: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x34b814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34b818: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x34b818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x34b81c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x34b81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34b820: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x34b820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34b824: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x34b824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34b828: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34b828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34b82c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x34b82cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x34b830: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34b830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b834: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x34b834u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x34b838: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34b838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b83c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x34b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x34b840: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34b840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34b844: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x34b844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b848: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x34b848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34b84c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34b84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b850: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34b850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34b854: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34b854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_34b858:
    // 0x34b858: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34b858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b85c: 0x908309db  lbu         $v1, 0x9DB($a0)
    ctx->pc = 0x34b85cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x34b860: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x34b860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34b864: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x34b864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x34b868: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x34B868u;
    {
        const bool branch_taken_0x34b868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b868) {
            ctx->pc = 0x34B8C0u;
            goto label_34b8c0;
        }
    }
    ctx->pc = 0x34B870u;
    // 0x34b870: 0x3c033dd6  lui         $v1, 0x3DD6
    ctx->pc = 0x34b870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15830 << 16));
    // 0x34b874: 0x34637750  ori         $v1, $v1, 0x7750
    ctx->pc = 0x34b874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
    // 0x34b878: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x34b878u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34b87c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34b87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b880: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34b880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b884: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x34b884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x34b888: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x34b888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34b88c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34b890: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x34b890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x34b894: 0xc05c848  jal         func_172120
    ctx->pc = 0x34B894u;
    SET_GPR_U32(ctx, 31, 0x34B89Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34B894u, 0x34B89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B89Cu;
label_34b89c:
    // 0x34b89c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x34b89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x34b8a0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b8a4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x34b8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b8a8: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x34b8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b8ac: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x34b8acu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34b8b0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34B8B0u;
    SET_GPR_U32(ctx, 31, 0x34B8B8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34B8B0u, 0x34B8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B8B8u;
label_34b8b8:
    // 0x34b8b8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b8bc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34b8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_34b8c0:
    // 0x34b8c0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b8c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b8c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b8c8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34B8C8u;
    SET_GPR_U32(ctx, 31, 0x34B8D0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34B8C8u, 0x34B8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B8D0u;
label_34b8d0:
    // 0x34b8d0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b8d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b8d8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34b8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b8dc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b8e0: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x34b8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b8e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34b8e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34b8e8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34b8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34b8ec: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b8f0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b8f4: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x34b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x34b8f8: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x34b8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x34b8fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34b8fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34b900: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x34b900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b904: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34b904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34b908: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34b908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34b90c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34b90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b910: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x34B910u;
    SET_GPR_U32(ctx, 31, 0x34B918u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x34B910u, 0x34B918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B918u;
label_34b918:
    // 0x34b918: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34b918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b91c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b91cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b920: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34B920u;
    SET_GPR_U32(ctx, 31, 0x34B928u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34B920u, 0x34B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B928u;
label_34b928:
    // 0x34b928: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34b928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b92c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34B92Cu;
    SET_GPR_U32(ctx, 31, 0x34B934u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34B92Cu, 0x34B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B934u;
label_34b934:
    // 0x34b934: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34b934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b938: 0xc06ce3c  jal         func_1B38F0
    ctx->pc = 0x34B938u;
    SET_GPR_U32(ctx, 31, 0x34B940u);
    ctx->pc = 0x1B38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38F0u, 0x34B938u, 0x34B940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B940u;
label_34b940:
    // 0x34b940: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x34b940u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34b944: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x34b944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x34b948: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x34B948u;
    {
        const bool branch_taken_0x34b948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b948) {
            ctx->pc = 0x34BA7Cu;
            goto label_34ba7c;
        }
    }
    ctx->pc = 0x34B950u;
    // 0x34b950: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34b950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b954: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x34b954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x34b958: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x34b958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34b95c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x34b95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x34b960: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x34B960u;
    {
        const bool branch_taken_0x34b960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b960) {
            ctx->pc = 0x34BA7Cu;
            goto label_34ba7c;
        }
    }
    ctx->pc = 0x34B968u;
    // 0x34b968: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x34b968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x34b96c: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x34b96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x34b970: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x34B970u;
    {
        const bool branch_taken_0x34b970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b970) {
            ctx->pc = 0x34BA7Cu;
            goto label_34ba7c;
        }
    }
    ctx->pc = 0x34B978u;
    // 0x34b978: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34b978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b97c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x34b97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b980: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x34b980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x34b984: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34b984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b988: 0x0  nop
    ctx->pc = 0x34b988u;
    // NOP
    // 0x34b98c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34b98cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b990: 0x0  nop
    ctx->pc = 0x34b990u;
    // NOP
    // 0x34b994: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x34B994u;
    {
        const bool branch_taken_0x34b994 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b994) {
            ctx->pc = 0x34BA7Cu;
            goto label_34ba7c;
        }
    }
    ctx->pc = 0x34B99Cu;
    // 0x34b99c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b9a0: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x34b9a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x34b9a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34b9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34b9a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x34b9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34b9ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x34b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x34b9b0: 0x24428fc0  addiu       $v0, $v0, -0x7040
    ctx->pc = 0x34b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938560));
    // 0x34b9b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34b9b8: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x34b9b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34b9bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b9c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x34b9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x34b9c4: 0xa022edae  sb          $v0, -0x1252($at)
    ctx->pc = 0x34b9c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDAEu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDAEu, _value); } while (0);
    // 0x34b9c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b9cc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x34b9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x34b9d0: 0xa022edaf  sb          $v0, -0x1251($at)
    ctx->pc = 0x34b9d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDAFu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDAFu, _value); } while (0);
    // 0x34b9d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x34b9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x34b9d8: 0xa420edb4  sh          $zero, -0x124C($at)
    ctx->pc = 0x34b9d8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB4u, _value); } while (0);
    // 0x34b9dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x34b9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x34b9e0: 0xa420edb2  sh          $zero, -0x124E($at)
    ctx->pc = 0x34b9e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB2u, _value); } while (0);
    // 0x34b9e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x34b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34b9e8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x34b9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x34b9ec: 0xa422edb6  sh          $v0, -0x124A($at)
    ctx->pc = 0x34b9ecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDB6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB6u, _value); } while (0);
    // 0x34b9f0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x34b9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x34b9f4: 0xa020edb0  sb          $zero, -0x1250($at)
    ctx->pc = 0x34b9f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDB0u, _value); } while (0);
    // 0x34b9f8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b9fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x34b9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x34ba00: 0xac22edd0  sw          $v0, -0x1230($at)
    ctx->pc = 0x34ba00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEDD0u, _value); } while (0);
    // 0x34ba04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ba08: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x34ba08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x34ba0c: 0xa022ec68  sb          $v0, -0x1398($at)
    ctx->pc = 0x34ba0cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEC68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEC68u, _value); } while (0);
    // 0x34ba10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34ba14: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34ba18: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34ba18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34ba1c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34ba20: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34ba20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34ba24: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34ba24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34ba28: 0x2406082e  addiu       $a2, $zero, 0x82E
    ctx->pc = 0x34ba28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2094));
    // 0x34ba2c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x34ba2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x34ba30: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34ba30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34ba34: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34BA34u;
    SET_GPR_U32(ctx, 31, 0x34BA3Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34BA34u, 0x34BA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BA3Cu;
label_34ba3c:
    // 0x34ba3c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34ba40: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34ba40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34ba44: 0x244512b0  addiu       $a1, $v0, 0x12B0
    ctx->pc = 0x34ba44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x34ba48: 0xc096c60  jal         func_25B180
    ctx->pc = 0x34BA48u;
    SET_GPR_U32(ctx, 31, 0x34BA50u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x34BA48u, 0x34BA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BA50u;
label_34ba50:
    // 0x34ba50: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34ba50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34ba54: 0xc05ce54  jal         func_173950
    ctx->pc = 0x34BA54u;
    SET_GPR_U32(ctx, 31, 0x34BA5Cu);
    ctx->pc = 0x173950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173950u, 0x34BA54u, 0x34BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BA5Cu;
label_34ba5c:
    // 0x34ba5c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34ba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34ba60: 0x247210b0  addiu       $s2, $v1, 0x10B0
    ctx->pc = 0x34ba60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x34ba64: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x34ba64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x34ba68: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x34ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x34ba6c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x34ba6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x34ba70: 0xae4300f0  sw          $v1, 0xF0($s2)
    ctx->pc = 0x34ba70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 3));
    // 0x34ba74: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x34BA74u;
    {
        const bool branch_taken_0x34ba74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ba74) {
            ctx->pc = 0x34BD88u;
            goto label_34bd88;
        }
    }
    ctx->pc = 0x34BA7Cu;
label_34ba7c:
    // 0x34ba7c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34ba80: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34ba80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34ba84: 0x106000c0  beqz        $v1, . + 4 + (0xC0 << 2)
    ctx->pc = 0x34BA84u;
    {
        const bool branch_taken_0x34ba84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ba84) {
            ctx->pc = 0x34BD88u;
            goto label_34bd88;
        }
    }
    ctx->pc = 0x34BA8Cu;
    // 0x34ba8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34ba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ba90: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34ba90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34ba94: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34ba94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34ba98: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x34ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34ba9c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34baa0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34baa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34baa4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34baa8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34baa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34baac: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34baacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bab0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34bab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bab4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bab8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34bab8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34babc: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x34babcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34bac0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bac4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bac8: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x34bac8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x34bacc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34baccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bad0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bad4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x34bad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34bad8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x34bad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x34badc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34BADCu;
    {
        const bool branch_taken_0x34badc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34badc) {
            ctx->pc = 0x34BB18u;
            goto label_34bb18;
        }
    }
    ctx->pc = 0x34BAE4u;
    // 0x34bae4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bae8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34baec: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x34baecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34baf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34baf4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34baf8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34baf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bafc: 0xa064006f  sb          $a0, 0x6F($v1)
    ctx->pc = 0x34bafcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 4));
    // 0x34bb00: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34bb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34bb04: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bb08: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bb0c: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x34bb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    // 0x34bb10: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x34BB10u;
    {
        const bool branch_taken_0x34bb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bb10) {
            ctx->pc = 0x34BD88u;
            goto label_34bd88;
        }
    }
    ctx->pc = 0x34BB18u;
label_34bb18:
    // 0x34bb18: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bb1c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bb20: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x34bb20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bb24: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bb28: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bb2c: 0xa060006f  sb          $zero, 0x6F($v1)
    ctx->pc = 0x34bb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bb30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34bb34: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bb38: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bb3c: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x34bb3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    // 0x34bb40: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x34BB40u;
    {
        const bool branch_taken_0x34bb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bb40) {
            ctx->pc = 0x34BD88u;
            goto label_34bd88;
        }
    }
    ctx->pc = 0x34BB48u;
label_34bb48:
    // 0x34bb48: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34bb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bb4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34bb4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34bb50: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34BB50u;
    SET_GPR_U32(ctx, 31, 0x34BB58u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34BB50u, 0x34BB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB58u;
label_34bb58:
    // 0x34bb58: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34bb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bb5c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bb60: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x34bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
    // 0x34bb64: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x34bb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x34bb68: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x34bb68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x34bb6c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x34bb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34bb70: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x34bb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x34bb74: 0xc058f50  jal         func_163D40
    ctx->pc = 0x34BB74u;
    SET_GPR_U32(ctx, 31, 0x34BB7Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x34BB74u, 0x34BB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB7Cu;
label_34bb7c:
    // 0x34bb7c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bb80: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34bb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x34bb84: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x34bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x34bb88: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x34bb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x34bb8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34bb8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34bb90: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34bb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bb94: 0xc05ce88  jal         func_173A20
    ctx->pc = 0x34BB94u;
    SET_GPR_U32(ctx, 31, 0x34BB9Cu);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x34BB94u, 0x34BB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB9Cu;
label_34bb9c:
    // 0x34bb9c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bba0: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x34bba0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x34bba4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x34bba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34bba8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34BBA8u;
    {
        const bool branch_taken_0x34bba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bba8) {
            ctx->pc = 0x34BBC4u;
            goto label_34bbc4;
        }
    }
    ctx->pc = 0x34BBB0u;
    // 0x34bbb0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bbb4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34bbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bbb8: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x34bbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34bbbc: 0xc05cd58  jal         func_173560
    ctx->pc = 0x34BBBCu;
    SET_GPR_U32(ctx, 31, 0x34BBC4u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x34BBBCu, 0x34BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BBC4u;
label_34bbc4:
    // 0x34bbc4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bbc8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34bbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34bbcc: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x34bbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x34bbd0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x34BBD0u;
    SET_GPR_U32(ctx, 31, 0x34BBD8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x34BBD8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x34BBD8u) { return; }
    ctx->pc = 0x34BBD8u;
label_34bbd8:
    // 0x34bbd8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34bbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bbdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34bbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bbe0: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34BBE0u;
    SET_GPR_U32(ctx, 31, 0x34BBE8u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34BBE0u, 0x34BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BBE8u;
label_34bbe8:
    // 0x34bbe8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bbec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34bbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34bbf0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x34bbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x34bbf4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x34bbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34bbf8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x34BBF8u;
    SET_GPR_U32(ctx, 31, 0x34BC00u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x34BBF8u, 0x34BC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BC00u;
label_34bc00:
    // 0x34bc00: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc04: 0xc44112a0  lwc1        $f1, 0x12A0($v0)
    ctx->pc = 0x34bc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34bc08: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x34bc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34bc0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34bc0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34bc10: 0xe44012a0  swc1        $f0, 0x12A0($v0)
    ctx->pc = 0x34bc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4768), bits); }
    // 0x34bc14: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc18: 0xc44112a8  lwc1        $f1, 0x12A8($v0)
    ctx->pc = 0x34bc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34bc1c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x34bc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34bc20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34bc20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34bc24: 0xe44012a8  swc1        $f0, 0x12A8($v0)
    ctx->pc = 0x34bc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4776), bits); }
    // 0x34bc28: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34bc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc2c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34BC2Cu;
    SET_GPR_U32(ctx, 31, 0x34BC34u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34BC2Cu, 0x34BC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BC34u;
label_34bc34:
    // 0x34bc34: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc38: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34bc38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34bc3c: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x34BC3Cu;
    {
        const bool branch_taken_0x34bc3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bc3c) {
            ctx->pc = 0x34BD88u;
            goto label_34bd88;
        }
    }
    ctx->pc = 0x34BC44u;
    // 0x34bc44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bc48: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc4c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x34bc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x34bc50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bc54: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc58: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x34bc58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x34bc5c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc60: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x34bc60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bc64: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc68: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x34bc68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bc6c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc70: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34bc70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34bc74: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x34bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34bc78: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc7c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34bc80: 0xa4430068  sh          $v1, 0x68($v0)
    ctx->pc = 0x34bc80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x34bc84: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bc88: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34bc8c: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34bc8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34bc90: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34bc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34bc94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34bc98: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34bc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34bc9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34bc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34bca0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bca4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34bca8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34bcac: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x34bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34bcb0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34bcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34bcb4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x34bcb8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34BCB8u;
    SET_GPR_U32(ctx, 31, 0x34BCC0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34BCB8u, 0x34BCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BCC0u;
label_34bcc0:
    // 0x34bcc0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34bcc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34bcc4: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x34bcc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x34bcc8: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x34bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x34bccc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x34bcccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x34bcd0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x34bcd0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x34bcd4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bcd8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bcdc: 0xa4640034  sh          $a0, 0x34($v1)
    ctx->pc = 0x34bcdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x34bce0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bce4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34bce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bce8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34bcec: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x34bcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x34bcf0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34bcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34bcf4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34bcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x34bcf8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bcfc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bd00: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x34bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34bd04: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x34bd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x34bd08: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34BD08u;
    {
        const bool branch_taken_0x34bd08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bd08) {
            ctx->pc = 0x34BD44u;
            goto label_34bd44;
        }
    }
    ctx->pc = 0x34BD10u;
    // 0x34bd10: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bd14: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bd18: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x34bd18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bd1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34bd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bd20: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bd24: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bd28: 0xa064006f  sb          $a0, 0x6F($v1)
    ctx->pc = 0x34bd28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 4));
    // 0x34bd2c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34bd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34bd30: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bd34: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bd38: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x34bd38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    // 0x34bd3c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34BD3Cu;
    {
        const bool branch_taken_0x34bd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bd3c) {
            ctx->pc = 0x34BD6Cu;
            goto label_34bd6c;
        }
    }
    ctx->pc = 0x34BD44u;
label_34bd44:
    // 0x34bd44: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bd48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bd4c: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x34bd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bd50: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bd54: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bd58: 0xa060006f  sb          $zero, 0x6F($v1)
    ctx->pc = 0x34bd58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bd5c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34bd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34bd60: 0x8fb00098  lw          $s0, 0x98($sp)
    ctx->pc = 0x34bd60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bd64: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x34bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x34bd68: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x34bd68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
label_34bd6c:
    // 0x34bd6c: 0x8fb50098  lw          $s5, 0x98($sp)
    ctx->pc = 0x34bd6cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bd70: 0x26b310b0  addiu       $s3, $s5, 0x10B0
    ctx->pc = 0x34bd70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4272));
    // 0x34bd74: 0x8e6400f0  lw          $a0, 0xF0($s3)
    ctx->pc = 0x34bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x34bd78: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x34bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x34bd7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x34bd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x34bd80: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34bd80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34bd84: 0xae6300f0  sw          $v1, 0xF0($s3)
    ctx->pc = 0x34bd84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 3));
label_34bd88:
    // 0x34bd88: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bd8c: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x34bd8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x34bd90: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x34bd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34bd94: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x34bd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x34bd98: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34BD98u;
    {
        const bool branch_taken_0x34bd98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bd98) {
            ctx->pc = 0x34BDD4u;
            goto label_34bdd4;
        }
    }
    ctx->pc = 0x34BDA0u;
    // 0x34bda0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34bda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bda4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34bda8: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x34bda8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bdac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x34bdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34bdb0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34bdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bdb4: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34bdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34bdb8: 0xa0a30029  sb          $v1, 0x29($a1)
    ctx->pc = 0x34bdb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x34bdbc: 0x3c073ccc  lui         $a3, 0x3CCC
    ctx->pc = 0x34bdbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15564 << 16));
    // 0x34bdc0: 0x34e6cccd  ori         $a2, $a3, 0xCCCD
    ctx->pc = 0x34bdc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x34bdc4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x34bdc4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34bdc8: 0x8fa80098  lw          $t0, 0x98($sp)
    ctx->pc = 0x34bdc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bdcc: 0x25031330  addiu       $v1, $t0, 0x1330
    ctx->pc = 0x34bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x34bdd0: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x34bdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_34bdd4:
    // 0x34bdd4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bdd8: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x34bdd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x34bddc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x34bddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34bde0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x34bde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x34bde4: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x34BDE4u;
    {
        const bool branch_taken_0x34bde4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bde4) {
            ctx->pc = 0x34BE5Cu;
            goto label_34be5c;
        }
    }
    ctx->pc = 0x34BDECu;
    // 0x34bdec: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bdf0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bdf4: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x34bdf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bdf8: 0x8fb00098  lw          $s0, 0x98($sp)
    ctx->pc = 0x34bdf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bdfc: 0x26051330  addiu       $a1, $s0, 0x1330
    ctx->pc = 0x34bdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x34be00: 0xa0a00029  sb          $zero, 0x29($a1)
    ctx->pc = 0x34be00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x34be04: 0x3c033ccc  lui         $v1, 0x3CCC
    ctx->pc = 0x34be04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15564 << 16));
    // 0x34be08: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x34be08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34be0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34be0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34be10: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34be10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34be14: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34be14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34be18: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x34be18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x34be1c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34be1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34be20: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x34be20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x34be24: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34be24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34be28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34be28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34be2c: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x34BE2Cu;
    {
        const bool branch_taken_0x34be2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34be2c) {
            ctx->pc = 0x34BE5Cu;
            goto label_34be5c;
        }
    }
    ctx->pc = 0x34BE34u;
    // 0x34be34: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x34be34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34be38: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34be38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34be3c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34be40: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x34be40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x34be44: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x34be44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x34be48: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34be48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34be4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34be4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34be50: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34be50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34be54: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34be54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34be58: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x34be58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_34be5c:
    // 0x34be5c: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x34be5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34be60: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x34be60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34be64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34be64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34be68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34be68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34be6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34be6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34be70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34be70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34be74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34be74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34be78: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x34be78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x34be7c: 0x3e00008  jr          $ra
    ctx->pc = 0x34BE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BE84u;
}
