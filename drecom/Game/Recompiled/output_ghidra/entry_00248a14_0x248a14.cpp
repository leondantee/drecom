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

// Function: entry_00248a14
// Address: 0x248a14 - 0x248bfc
void entry_00248a14_0x248a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248a14_0x248a14");
#endif

    switch (ctx->pc) {
        case 0x248a4cu: goto label_248a4c;
        case 0x248bd8u: goto label_248bd8;
        default: break;
    }

    ctx->pc = 0x248a14u;

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
}
