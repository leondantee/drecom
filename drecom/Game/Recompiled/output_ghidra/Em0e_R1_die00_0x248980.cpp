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

// Function: Em0e_R1_die00
// Address: 0x248980 - 0x2491b4
void Em0e_R1_die00_0x248980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_R1_die00_0x248980");
#endif

    switch (ctx->pc) {
        case 0x248a4cu: goto label_248a4c;
        case 0x248bd8u: goto label_248bd8;
        case 0x248bfcu: goto label_248bfc;
        case 0x248c0cu: goto label_248c0c;
        case 0x248c18u: goto label_248c18;
        case 0x248c54u: goto label_248c54;
        case 0x248c78u: goto label_248c78;
        case 0x248c8cu: goto label_248c8c;
        case 0x248eb8u: goto label_248eb8;
        case 0x248ec4u: goto label_248ec4;
        case 0x248ef4u: goto label_248ef4;
        case 0x248efcu: goto label_248efc;
        default: break;
    }

    ctx->pc = 0x248980u;

    // 0x248980: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x248980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x248984: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x248984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x248988: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x248988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x24898c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24898cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x248990: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x248990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x248994: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x248994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x248998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x248998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24899c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24899cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2489a0: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x2489a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x2489a4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2489a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2489a8: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x2489a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x2489ac: 0x24723520  addiu       $s2, $v1, 0x3520
    ctx->pc = 0x2489acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 13600));
    // 0x2489b0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2489b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2489b4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2489b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2489b8: 0x24730880  addiu       $s3, $v1, 0x880
    ctx->pc = 0x2489b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x2489bc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2489bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2489c0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2489c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2489c4: 0x24740480  addiu       $s4, $v1, 0x480
    ctx->pc = 0x2489c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x2489c8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2489c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2489cc: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2489ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2489d0: 0x24750510  addiu       $s5, $v1, 0x510
    ctx->pc = 0x2489d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x2489d4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2489d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2489d8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2489d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2489dc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2489dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2489e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2489e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2489e4: 0x10a401e0  beq         $a1, $a0, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x2489E4u;
    {
        const bool branch_taken_0x2489e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2489e4) {
            ctx->pc = 0x249168u;
            goto label_249168;
        }
    }
    ctx->pc = 0x2489ECu;
    // 0x2489ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2489ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2489f0: 0x10a3012d  beq         $a1, $v1, . + 4 + (0x12D << 2)
    ctx->pc = 0x2489F0u;
    {
        const bool branch_taken_0x2489f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2489f0) {
            ctx->pc = 0x248EA8u;
            goto label_248ea8;
        }
    }
    ctx->pc = 0x2489F8u;
    // 0x2489f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2489f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2489fc: 0x10a3007f  beq         $a1, $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x2489FCu;
    {
        const bool branch_taken_0x2489fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2489fc) {
            ctx->pc = 0x248BFCu;
            goto label_248bfc;
        }
    }
    ctx->pc = 0x248A04u;
    // 0x248a04: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x248A04u;
    {
        const bool branch_taken_0x248a04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x248a04) {
            ctx->pc = 0x248A14u;
            goto label_248a14;
        }
    }
    ctx->pc = 0x248A0Cu;
    // 0x248a0c: 0x100001df  b           . + 4 + (0x1DF << 2)
    ctx->pc = 0x248A0Cu;
    {
        const bool branch_taken_0x248a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248a0c) {
            ctx->pc = 0x24918Cu;
            goto label_24918c;
        }
    }
    ctx->pc = 0x248A14u;
label_248a14:
    // 0x248a14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x248a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248a18: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248a1c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x248a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x248a20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248a20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248a24: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248a28: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x248a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x248a2c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248a30: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248a34: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x248a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x248a38: 0x24060416  addiu       $a2, $zero, 0x416
    ctx->pc = 0x248a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1046));
    // 0x248a3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x248a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248a40: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x248a40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x248a44: 0xc0965d0  jal         func_259740
    ctx->pc = 0x248A44u;
    SET_GPR_U32(ctx, 31, 0x248A4Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x248A44u, 0x248A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A4Cu;
label_248a4c:
    // 0x248a4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x248a4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x248a50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248a50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248a54: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248a58: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x248a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x248a5c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x248a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x248a60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248a60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248a64: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248a68: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248a6c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x248a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x248a70: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x248a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x248a74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248a74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248a78: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248a7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248a80: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x248a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x248a84: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x248a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x248a88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248a88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248a8c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248a90: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248a94: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x248a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x248a98: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248a9c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x248a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248aa0: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x248aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x248aa4: 0x34630018  ori         $v1, $v1, 0x18
    ctx->pc = 0x248aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
    // 0x248aa8: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x248aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x248aac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248ab0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x248ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x248ab4: 0x24700120  addiu       $s0, $v1, 0x120
    ctx->pc = 0x248ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x248ab8: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x248ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x248abc: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x248abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x248ac0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x248ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x248ac4: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x248ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x248ac8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x248ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x248acc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248ad0: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x248ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x248ad4: 0x245001b0  addiu       $s0, $v0, 0x1B0
    ctx->pc = 0x248ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x248ad8: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x248ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x248adc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x248adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x248ae0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x248ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x248ae4: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x248ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x248ae8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x248ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x248aec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x248aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248af0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x248af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x248af4: 0x245003f0  addiu       $s0, $v0, 0x3F0
    ctx->pc = 0x248af4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x248af8: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x248af8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x248afc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x248afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x248b00: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x248b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x248b04: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x248b04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x248b08: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x248b08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x248b0c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x248b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248b10: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x248b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x248b14: 0x245005a0  addiu       $s0, $v0, 0x5A0
    ctx->pc = 0x248b14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x248b18: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x248b18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x248b1c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x248b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x248b20: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x248b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x248b24: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x248b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x248b28: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x248b28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x248b2c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x248b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248b30: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x248b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x248b34: 0x24500090  addiu       $s0, $v0, 0x90
    ctx->pc = 0x248b34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x248b38: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x248b38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x248b3c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x248b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248b40: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x248b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x248b44: 0x24500240  addiu       $s0, $v0, 0x240
    ctx->pc = 0x248b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x248b48: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x248b48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x248b4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248b4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248b50: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x248b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248b54: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x248b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x248b58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248b58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248b5c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x248b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248b60: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x248b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x248b64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248b64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248b68: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x248b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248b6c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x248b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x248b70: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x248b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x248b74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x248b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248b78: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x248b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248b7c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x248b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x248b80: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x248b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x248b84: 0x26430150  addiu       $v1, $s2, 0x150
    ctx->pc = 0x248b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x248b88: 0x9462002e  lhu         $v0, 0x2E($v1)
    ctx->pc = 0x248b88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x248b8c: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x248b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x248b90: 0xa462002e  sh          $v0, 0x2E($v1)
    ctx->pc = 0x248b90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x248b94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x248b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248b98: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x248b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248b9c: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x248b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x248ba0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248ba4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x248ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x248ba8: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x248ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x248bac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x248bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x248bb0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x248bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x248bb4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248bb8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x248bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x248bbc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x248bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x248bc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x248bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x248bc4: 0x2404051e  addiu       $a0, $zero, 0x51E
    ctx->pc = 0x248bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1310));
    // 0x248bc8: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x248bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x248bcc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x248bccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x248bd0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x248BD0u;
    SET_GPR_U32(ctx, 31, 0x248BD8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x248BD0u, 0x248BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248BD8u;
label_248bd8:
    // 0x248bd8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x248bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x248bdc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x248bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x248be0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x248be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x248be4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x248be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248be8: 0x24040517  addiu       $a0, $zero, 0x517
    ctx->pc = 0x248be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1303));
    // 0x248bec: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x248becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x248bf0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x248bf0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x248bf4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x248BF4u;
    SET_GPR_U32(ctx, 31, 0x248BFCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x248BF4u, 0x248BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248BFCu;
label_248bfc:
    // 0x248bfc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c00: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x248c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x248c04: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x248C04u;
    SET_GPR_U32(ctx, 31, 0x248C0Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x248C04u, 0x248C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C0Cu;
label_248c0c:
    // 0x248c0c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c10: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x248C10u;
    SET_GPR_U32(ctx, 31, 0x248C18u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x248C10u, 0x248C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C18u;
label_248c18:
    // 0x248c18: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c1c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x248c1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x248c20: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x248C20u;
    {
        const bool branch_taken_0x248c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x248c20) {
            ctx->pc = 0x248C8Cu;
            goto label_248c8c;
        }
    }
    ctx->pc = 0x248C28u;
    // 0x248c28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x248c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x248c2c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x248c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c30: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x248c30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x248c34: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x248c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c38: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c3c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x248c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x248c40: 0x24063c16  addiu       $a2, $zero, 0x3C16
    ctx->pc = 0x248c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15382));
    // 0x248c44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x248c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248c48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x248c48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x248c4c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x248C4Cu;
    SET_GPR_U32(ctx, 31, 0x248C54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x248C4Cu, 0x248C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C54u;
label_248c54:
    // 0x248c54: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x248c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x248c58: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x248c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x248c5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x248c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x248c60: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x248c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c64: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x248c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x248c68: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x248c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x248c6c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x248c6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x248c70: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x248C70u;
    SET_GPR_U32(ctx, 31, 0x248C78u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x248C70u, 0x248C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C78u;
label_248c78:
    // 0x248c78: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x248c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c7c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x248c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x248c80: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x248c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c84: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x248C84u;
    SET_GPR_U32(ctx, 31, 0x248C8Cu);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x248C84u, 0x248C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C8Cu;
label_248c8c:
    // 0x248c8c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c90: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248c94: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x248c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248c98: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c9c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x248c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248ca0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x248ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x248ca4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x248ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x248ca8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248cac: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x248cacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x248cb0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x248cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x248cb4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x248cb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x248cb8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x248cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x248cbc: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x248CBCu;
    {
        const bool branch_taken_0x248cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x248cbc) {
            ctx->pc = 0x248DB4u;
            goto label_248db4;
        }
    }
    ctx->pc = 0x248CC4u;
    // 0x248cc4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248cc8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x248cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248ccc: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x248cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248cd0: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x248cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x248cd4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x248cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x248cd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248cd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248cdc: 0x0  nop
    ctx->pc = 0x248cdcu;
    // NOP
    // 0x248ce0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x248ce0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x248ce4: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x248ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x248ce8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248cec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248cf0: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x248cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248cf4: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x248cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x248cf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248cf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248cfc: 0x0  nop
    ctx->pc = 0x248cfcu;
    // NOP
    // 0x248d00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x248d00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248d04: 0x0  nop
    ctx->pc = 0x248d04u;
    // NOP
    // 0x248d08: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x248D08u;
    {
        const bool branch_taken_0x248d08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x248d08) {
            ctx->pc = 0x248D20u;
            goto label_248d20;
        }
    }
    ctx->pc = 0x248D10u;
    // 0x248d10: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248d14: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x248d14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x248d18: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x248d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x248d1c: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x248d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
label_248d20:
    // 0x248d20: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248d24: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x248d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248d28: 0x3c033c37  lui         $v1, 0x3C37
    ctx->pc = 0x248d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15415 << 16));
    // 0x248d2c: 0x3463d3fb  ori         $v1, $v1, 0xD3FB
    ctx->pc = 0x248d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54267);
    // 0x248d30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248d30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248d34: 0x0  nop
    ctx->pc = 0x248d34u;
    // NOP
    // 0x248d38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x248d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x248d3c: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x248d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x248d40: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248d44: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x248d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248d48: 0x3c033bdf  lui         $v1, 0x3BDF
    ctx->pc = 0x248d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15327 << 16));
    // 0x248d4c: 0x3463ca6a  ori         $v1, $v1, 0xCA6A
    ctx->pc = 0x248d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51818);
    // 0x248d50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248d54: 0x0  nop
    ctx->pc = 0x248d54u;
    // NOP
    // 0x248d58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x248d58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x248d5c: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x248d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x248d60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248d60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248d64: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248d68: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248d6c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x248d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x248d70: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x248d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x248d74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248d74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248d78: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248d7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248d80: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x248d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x248d84: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x248d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x248d88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248d88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248d8c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248d90: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248d94: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x248d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x248d98: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x248d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x248d9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248da0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248da4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248da8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x248da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x248dac: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x248DACu;
    {
        const bool branch_taken_0x248dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248dac) {
            ctx->pc = 0x24918Cu;
            goto label_24918c;
        }
    }
    ctx->pc = 0x248DB4u;
label_248db4:
    // 0x248db4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248db8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x248db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248dbc: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x248dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248dc0: 0x3c033e75  lui         $v1, 0x3E75
    ctx->pc = 0x248dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15989 << 16));
    // 0x248dc4: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x248dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x248dc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248dc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248dcc: 0x0  nop
    ctx->pc = 0x248dccu;
    // NOP
    // 0x248dd0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x248dd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x248dd4: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x248dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x248dd8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248ddc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248de0: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x248de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248de4: 0x3c03c220  lui         $v1, 0xC220
    ctx->pc = 0x248de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49696 << 16));
    // 0x248de8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248de8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248dec: 0x0  nop
    ctx->pc = 0x248decu;
    // NOP
    // 0x248df0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x248df0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248df4: 0x0  nop
    ctx->pc = 0x248df4u;
    // NOP
    // 0x248df8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x248DF8u;
    {
        const bool branch_taken_0x248df8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x248df8) {
            ctx->pc = 0x248E14u;
            goto label_248e14;
        }
    }
    ctx->pc = 0x248E00u;
    // 0x248e00: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x248e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248e04: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x248e04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x248e08: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x248e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x248e0c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x248e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x248e10: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x248e10u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
label_248e14:
    // 0x248e14: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248e18: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x248e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248e1c: 0x3c033bb7  lui         $v1, 0x3BB7
    ctx->pc = 0x248e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15287 << 16));
    // 0x248e20: 0x3463d3fb  ori         $v1, $v1, 0xD3FB
    ctx->pc = 0x248e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54267);
    // 0x248e24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248e24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248e28: 0x0  nop
    ctx->pc = 0x248e28u;
    // NOP
    // 0x248e2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x248e2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x248e30: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x248e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x248e34: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248e38: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x248e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248e3c: 0x3c033c37  lui         $v1, 0x3C37
    ctx->pc = 0x248e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15415 << 16));
    // 0x248e40: 0x3463d3fb  ori         $v1, $v1, 0xD3FB
    ctx->pc = 0x248e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54267);
    // 0x248e44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248e44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248e48: 0x0  nop
    ctx->pc = 0x248e48u;
    // NOP
    // 0x248e4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x248e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x248e50: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x248e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x248e54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248e58: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248e5c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248e60: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x248e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x248e64: 0x3c03c1a4  lui         $v1, 0xC1A4
    ctx->pc = 0x248e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49572 << 16));
    // 0x248e68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248e68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248e6c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248e70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248e74: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x248e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x248e78: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x248e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x248e7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248e7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248e80: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248e84: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248e88: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x248e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x248e8c: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x248e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x248e90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248e94: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248e98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248e9c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x248e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x248ea0: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x248EA0u;
    {
        const bool branch_taken_0x248ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248ea0) {
            ctx->pc = 0x24918Cu;
            goto label_24918c;
        }
    }
    ctx->pc = 0x248EA8u;
label_248ea8:
    // 0x248ea8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248eac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x248eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x248eb0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x248EB0u;
    SET_GPR_U32(ctx, 31, 0x248EB8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x248EB0u, 0x248EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248EB8u;
label_248eb8:
    // 0x248eb8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248ebc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x248EBCu;
    SET_GPR_U32(ctx, 31, 0x248EC4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x248EBCu, 0x248EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248EC4u;
label_248ec4:
    // 0x248ec4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248ec8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x248ec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x248ecc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x248ECCu;
    {
        const bool branch_taken_0x248ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x248ecc) {
            ctx->pc = 0x248F10u;
            goto label_248f10;
        }
    }
    ctx->pc = 0x248ED4u;
    // 0x248ed4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x248ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248ed8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248edc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x248edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x248ee0: 0x24063c16  addiu       $a2, $zero, 0x3C16
    ctx->pc = 0x248ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15382));
    // 0x248ee4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x248ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248ee8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x248ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x248eec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x248EECu;
    SET_GPR_U32(ctx, 31, 0x248EF4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x248EECu, 0x248EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248EF4u;
label_248ef4:
    // 0x248ef4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x248EF4u;
    SET_GPR_U32(ctx, 31, 0x248EFCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x248EF4u, 0x248EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248EFCu;
label_248efc:
    // 0x248efc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x248efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x248f00: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x248f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x248f04: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x248f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x248f08: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248f0c: 0xa46409ee  sh          $a0, 0x9EE($v1)
    ctx->pc = 0x248f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2542), (uint16_t)GPR_U32(ctx, 4));
label_248f10:
    // 0x248f10: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248f14: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248f18: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x248f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248f1c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248f20: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x248f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248f24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x248f24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x248f28: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x248f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x248f2c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248f30: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x248f30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x248f34: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x248f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x248f38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x248f38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x248f3c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x248f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x248f40: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x248F40u;
    {
        const bool branch_taken_0x248f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x248f40) {
            ctx->pc = 0x249038u;
            goto label_249038;
        }
    }
    ctx->pc = 0x248F48u;
    // 0x248f48: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248f4c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x248f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248f50: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x248f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248f54: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x248f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x248f58: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x248f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x248f5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248f5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248f60: 0x0  nop
    ctx->pc = 0x248f60u;
    // NOP
    // 0x248f64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x248f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x248f68: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x248f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x248f6c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248f70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248f74: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x248f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248f78: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x248f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x248f7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248f7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248f80: 0x0  nop
    ctx->pc = 0x248f80u;
    // NOP
    // 0x248f84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x248f84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248f88: 0x0  nop
    ctx->pc = 0x248f88u;
    // NOP
    // 0x248f8c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x248F8Cu;
    {
        const bool branch_taken_0x248f8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x248f8c) {
            ctx->pc = 0x248FA4u;
            goto label_248fa4;
        }
    }
    ctx->pc = 0x248F94u;
    // 0x248f94: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248f98: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x248f98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x248f9c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x248f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x248fa0: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x248fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
label_248fa4:
    // 0x248fa4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248fa8: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x248fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248fac: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x248facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
    // 0x248fb0: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x248fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x248fb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248fb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248fb8: 0x0  nop
    ctx->pc = 0x248fb8u;
    // NOP
    // 0x248fbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x248fbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x248fc0: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x248fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x248fc4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248fc8: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x248fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248fcc: 0x3c123c0e  lui         $s2, 0x3C0E
    ctx->pc = 0x248fccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)15374 << 16));
    // 0x248fd0: 0x3643fa35  ori         $v1, $s2, 0xFA35
    ctx->pc = 0x248fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)64053);
    // 0x248fd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248fd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248fd8: 0x0  nop
    ctx->pc = 0x248fd8u;
    // NOP
    // 0x248fdc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x248fdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x248fe0: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x248fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x248fe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248fe8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248fec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248ff0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x248ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x248ff4: 0x3c1341a0  lui         $s3, 0x41A0
    ctx->pc = 0x248ff4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16800 << 16));
    // 0x248ff8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x248ff8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248ffc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x249000: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x249000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x249004: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x249004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x249008: 0x3c144020  lui         $s4, 0x4020
    ctx->pc = 0x249008u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16416 << 16));
    // 0x24900c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x24900cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249010: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x249010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x249014: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x249014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x249018: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x249018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x24901c: 0x3c154020  lui         $s5, 0x4020
    ctx->pc = 0x24901cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16416 << 16));
    // 0x249020: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x249020u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249024: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x249024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x249028: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x249028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24902c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x24902cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x249030: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x249030u;
    {
        const bool branch_taken_0x249030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249030) {
            ctx->pc = 0x249124u;
            goto label_249124;
        }
    }
    ctx->pc = 0x249038u;
label_249038:
    // 0x249038: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x249038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24903c: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x24903cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x249040: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x249040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249044: 0x3c033e75  lui         $v1, 0x3E75
    ctx->pc = 0x249044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15989 << 16));
    // 0x249048: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x249048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x24904c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24904cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249050: 0x0  nop
    ctx->pc = 0x249050u;
    // NOP
    // 0x249054: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x249054u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x249058: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x249058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x24905c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x24905cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x249060: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x249060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x249064: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x249064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249068: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x249068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
    // 0x24906c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24906cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249070: 0x0  nop
    ctx->pc = 0x249070u;
    // NOP
    // 0x249074: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x249074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x249078: 0x0  nop
    ctx->pc = 0x249078u;
    // NOP
    // 0x24907c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x24907Cu;
    {
        const bool branch_taken_0x24907c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24907c) {
            ctx->pc = 0x249098u;
            goto label_249098;
        }
    }
    ctx->pc = 0x249084u;
    // 0x249084: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x249084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x249088: 0x8464127e  lh          $a0, 0x127E($v1)
    ctx->pc = 0x249088u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x24908c: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x24908cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x249090: 0x853024  and         $a2, $a0, $a1
    ctx->pc = 0x249090u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x249094: 0xa466127e  sh          $a2, 0x127E($v1)
    ctx->pc = 0x249094u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 6));
label_249098:
    // 0x249098: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x249098u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24909c: 0xc4e100d0  lwc1        $f1, 0xD0($a3)
    ctx->pc = 0x24909cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2490a0: 0x3c033bdf  lui         $v1, 0x3BDF
    ctx->pc = 0x2490a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15327 << 16));
    // 0x2490a4: 0x3468ca6a  ori         $t0, $v1, 0xCA6A
    ctx->pc = 0x2490a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51818);
    // 0x2490a8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2490a8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2490ac: 0x0  nop
    ctx->pc = 0x2490acu;
    // NOP
    // 0x2490b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2490b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2490b4: 0xe4e000d0  swc1        $f0, 0xD0($a3)
    ctx->pc = 0x2490b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 208), bits); }
    // 0x2490b8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2490b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2490bc: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x2490bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2490c0: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x2490c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
    // 0x2490c4: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x2490c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2490c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2490c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2490cc: 0x0  nop
    ctx->pc = 0x2490ccu;
    // NOP
    // 0x2490d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2490d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2490d4: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x2490d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x2490d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2490d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2490dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2490dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2490e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2490e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2490e4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2490e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2490e8: 0x3c03c1a4  lui         $v1, 0xC1A4
    ctx->pc = 0x2490e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49572 << 16));
    // 0x2490ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2490ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2490f0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2490f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2490f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2490f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2490f8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2490f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2490fc: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x2490fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x249100: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x249100u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249104: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x249104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x249108: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x249108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24910c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x24910cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x249110: 0x3c044020  lui         $a0, 0x4020
    ctx->pc = 0x249110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16416 << 16));
    // 0x249114: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x249114u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249118: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x249118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24911c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x24911cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x249120: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x249120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_249124:
    // 0x249124: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x249124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x249128: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x249128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24912c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24912cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x249130: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x249130u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249134: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x249134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x249138: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x249138u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24913c: 0x0  nop
    ctx->pc = 0x24913cu;
    // NOP
    // 0x249140: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x249140u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x249144: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x249144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x249148: 0x0  nop
    ctx->pc = 0x249148u;
    // NOP
    // 0x24914c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x24914Cu;
    {
        const bool branch_taken_0x24914c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24914c) {
            ctx->pc = 0x24918Cu;
            goto label_24918c;
        }
    }
    ctx->pc = 0x249154u;
    // 0x249154: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x249154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x249158: 0x8fb10078  lw          $s1, 0x78($sp)
    ctx->pc = 0x249158u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24915c: 0xa2300002  sb          $s0, 0x2($s1)
    ctx->pc = 0x24915cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x249160: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x249160u;
    {
        const bool branch_taken_0x249160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249160) {
            ctx->pc = 0x24918Cu;
            goto label_24918c;
        }
    }
    ctx->pc = 0x249168u;
label_249168:
    // 0x249168: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x249168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24916c: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x24916cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249170: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x249170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x249174: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x249174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x249178: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x249178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24917c: 0x0  nop
    ctx->pc = 0x24917cu;
    // NOP
    // 0x249180: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x249180u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x249184: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x249184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x249188: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x249188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_24918c:
    // 0x24918c: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x24918cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x249190: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x249190u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x249194: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x249194u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x249198: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x249198u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24919c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24919cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2491a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2491a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2491a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2491a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2491a8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2491a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2491ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2491ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2491ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2491B4u;
}
