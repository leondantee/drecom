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

// Function: entry_0023ebe8
// Address: 0x23ebe8 - 0x23edec
void entry_0023ebe8_0x23ebe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ebe8_0x23ebe8");
#endif

    switch (ctx->pc) {
        case 0x23ec14u: goto label_23ec14;
        case 0x23eda8u: goto label_23eda8;
        case 0x23edb0u: goto label_23edb0;
        case 0x23ede4u: goto label_23ede4;
        default: break;
    }

    ctx->pc = 0x23ebe8u;

    // 0x23ebe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ebec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ebf0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23ebf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23ebf4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ebf8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ebf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ebfc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23ebfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23ec00: 0x2406372a  addiu       $a2, $zero, 0x372A
    ctx->pc = 0x23ec00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14122));
    // 0x23ec04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23ec04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ec08: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23ec08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23ec0c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23EC0Cu;
    SET_GPR_U32(ctx, 31, 0x23EC14u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23EC0Cu, 0x23EC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC14u;
label_23ec14:
    // 0x23ec14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ec14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ec18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ec1c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ec20: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23ec20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23ec24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ec24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ec28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ec2c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ec30: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23ec30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23ec34: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x23ec34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x23ec38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x23ec38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ec3c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x23ec3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ec40: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x23ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x23ec44: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23ec44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23ec48: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23ec4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ec4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ec50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ec54: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ec58: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x23ec58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x23ec5c: 0x3c043d49  lui         $a0, 0x3D49
    ctx->pc = 0x23ec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15689 << 16));
    // 0x23ec60: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x23ec60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x23ec64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ec64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ec68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ec6c: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x23ec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ec70: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x23ec70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x23ec74: 0x3c023b49  lui         $v0, 0x3B49
    ctx->pc = 0x23ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15177 << 16));
    // 0x23ec78: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23ec78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23ec7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ec7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ec80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ec80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ec84: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x23ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ec88: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23ec88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23ec8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ec90: 0xa480127c  sh          $zero, 0x127C($a0)
    ctx->pc = 0x23ec90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x23ec94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23ec94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ec98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ec9c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x23ec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23eca0: 0xa0850072  sb          $a1, 0x72($a0)
    ctx->pc = 0x23eca0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 114), (uint8_t)GPR_U32(ctx, 5));
    // 0x23eca4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23eca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23eca8: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x23eca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ecac: 0xa0a00070  sb          $zero, 0x70($a1)
    ctx->pc = 0x23ecacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ecb0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ecb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ecb4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x23ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x23ecb8: 0xa0600071  sb          $zero, 0x71($v1)
    ctx->pc = 0x23ecb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 113), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ecbc: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x23ecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x23ecc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ecc4: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x23ecc4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x23ecc8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ecc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23eccc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x23ecccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x23ecd0: 0x24700120  addiu       $s0, $v1, 0x120
    ctx->pc = 0x23ecd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23ecd4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23ecd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ecd8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ecdc: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x23ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x23ece0: 0x247001b0  addiu       $s0, $v1, 0x1B0
    ctx->pc = 0x23ece0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
    // 0x23ece4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23ece4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ece8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ecec: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x23ececu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x23ecf0: 0x247005a0  addiu       $s0, $v1, 0x5A0
    ctx->pc = 0x23ecf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1440));
    // 0x23ecf4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23ecf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ecf8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ecfc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x23ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x23ed00: 0x24700630  addiu       $s0, $v1, 0x630
    ctx->pc = 0x23ed00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1584));
    // 0x23ed04: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23ed04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ed08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ed08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ed0c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x23ed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x23ed10: 0x247006c0  addiu       $s0, $v1, 0x6C0
    ctx->pc = 0x23ed10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x23ed14: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23ed14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ed18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ed1c: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x23ed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x23ed20: 0x24900090  addiu       $s0, $a0, 0x90
    ctx->pc = 0x23ed20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x23ed24: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23ed24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ed28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ed2c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x23ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x23ed30: 0x24700240  addiu       $s0, $v1, 0x240
    ctx->pc = 0x23ed30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x23ed34: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23ed34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ed38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ed38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ed3c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x23ed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x23ed40: 0x247003f0  addiu       $s0, $v1, 0x3F0
    ctx->pc = 0x23ed40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1008));
    // 0x23ed44: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23ed44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ed48: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ed48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ed4c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x23ed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x23ed50: 0x24700480  addiu       $s0, $v1, 0x480
    ctx->pc = 0x23ed50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x23ed54: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23ed54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ed58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ed58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ed5c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x23ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x23ed60: 0x24700510  addiu       $s0, $v1, 0x510
    ctx->pc = 0x23ed60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x23ed64: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23ed64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ed68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ed6c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ed6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ed70: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x23ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x23ed74: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x23ed74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x23ed78: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x23ed78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x23ed7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ed80: 0xac40121c  sw          $zero, 0x121C($v0)
    ctx->pc = 0x23ed80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 0));
    // 0x23ed84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ed84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ed88: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23ed8c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23ed8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23ed90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23ed90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23ed94: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x23ed94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x23ed98: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23ed98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23ed9c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23ed9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23eda0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23EDA0u;
    SET_GPR_U32(ctx, 31, 0x23EDA8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23EDA0u, 0x23EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDA8u;
label_23eda8:
    // 0x23eda8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23EDA8u;
    SET_GPR_U32(ctx, 31, 0x23EDB0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23EDA8u, 0x23EDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDB0u;
label_23edb0:
    // 0x23edb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23edb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23edb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23edb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23edb8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23EDB8u;
    {
        const bool branch_taken_0x23edb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23edb8) {
            ctx->pc = 0x23EDECu;
            return;
        }
    }
    ctx->pc = 0x23EDC0u;
    // 0x23edc0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23edc4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23edc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23edc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23edc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23edcc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23edccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23edd0: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x23edd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x23edd4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23edd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23edd8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23edd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23eddc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23EDDCu;
    SET_GPR_U32(ctx, 31, 0x23EDE4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23EDDCu, 0x23EDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDE4u;
label_23ede4:
    // 0x23ede4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23EDE4u;
    {
        const bool branch_taken_0x23ede4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ede4) {
            ctx->pc = 0x23EE10u;
            return;
        }
    }
    ctx->pc = 0x23EDECu;
}
