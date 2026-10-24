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

// Function: entry_0034ebe0
// Address: 0x34ebe0 - 0x34eed8
void entry_0034ebe0_0x34ebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034ebe0_0x34ebe0");
#endif

    switch (ctx->pc) {
        case 0x34ec0cu: goto label_34ec0c;
        case 0x34ec4cu: goto label_34ec4c;
        case 0x34ec70u: goto label_34ec70;
        case 0x34ee48u: goto label_34ee48;
        case 0x34ee68u: goto label_34ee68;
        case 0x34ee70u: goto label_34ee70;
        case 0x34ee98u: goto label_34ee98;
        default: break;
    }

    ctx->pc = 0x34ebe0u;

    // 0x34ebe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ebe4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ebe8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34ebe8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34ebec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ebf0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x34ebf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ebf4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34ebf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34ebf8: 0x24061e32  addiu       $a2, $zero, 0x1E32
    ctx->pc = 0x34ebf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7730));
    // 0x34ebfc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34ebfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ec00: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34ec00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34ec04: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34EC04u;
    SET_GPR_U32(ctx, 31, 0x34EC0Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34EC04u, 0x34EC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EC0Cu;
label_34ec0c:
    // 0x34ec0c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34ec0cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ec10: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ec14: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34ec14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34ec18: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34ec1c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x34ec1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x34ec20: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x34ec20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x34ec24: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ec28: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34ec2c: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34ec2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34ec30: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34ec30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34ec34: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34ec34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34ec38: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x34ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34ec3c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x34ec3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34ec40: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x34ec40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x34ec44: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34EC44u;
    SET_GPR_U32(ctx, 31, 0x34EC4Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34EC44u, 0x34EC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EC4Cu;
label_34ec4c:
    // 0x34ec4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34ec4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34ec50: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x34ec50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x34ec54: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x34ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x34ec58: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x34ec58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x34ec5c: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x34ec5cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x34ec60: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34ec60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ec64: 0xa4701278  sh          $s0, 0x1278($v1)
    ctx->pc = 0x34ec64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 16));
    // 0x34ec68: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34EC68u;
    SET_GPR_U32(ctx, 31, 0x34EC70u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34EC68u, 0x34EC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EC70u;
label_34ec70:
    // 0x34ec70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34ec70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34ec74: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x34ec74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x34ec78: 0x24440005  addiu       $a0, $v0, 0x5
    ctx->pc = 0x34ec78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x34ec7c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x34ec7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x34ec80: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x34ec80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x34ec84: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ec88: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x34ec88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x34ec8c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ec90: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x34ec90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x34ec94: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x34ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x34ec98: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x34ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x34ec9c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x34ec9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x34eca0: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x34eca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x34eca4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x34eca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34eca8: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x34eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34ecac: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x34ecacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34ecb0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x34ecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34ecb4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ecb8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34ecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ecbc: 0xa0830029  sb          $v1, 0x29($a0)
    ctx->pc = 0x34ecbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x34ecc0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x34ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x34ecc4: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x34ecc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34ecc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34ecc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34eccc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ecd0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ecd4: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x34ecd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x34ecd8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ecdc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ece0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34ece4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x34ece4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x34ece8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34ece8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34ecec: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34ececu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ecf0: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x34ecf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x34ecf4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x34ecf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x34ecf8: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x34ecf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x34ecfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34ecfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ed00: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34ed00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ed04: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x34ed04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x34ed08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34ed08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ed0c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ed10: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34ed10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34ed14: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ed18: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ed1c: 0xa060008e  sb          $zero, 0x8E($v1)
    ctx->pc = 0x34ed1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 142), (uint8_t)GPR_U32(ctx, 0));
    // 0x34ed20: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ed24: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ed28: 0xa4400090  sh          $zero, 0x90($v0)
    ctx->pc = 0x34ed28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x34ed2c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x34ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x34ed30: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34ed30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34ed34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ed34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ed38: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ed3c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ed40: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x34ed40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x34ed44: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x34ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x34ed48: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x34ed48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34ed4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34ed4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ed50: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ed54: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ed58: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x34ed58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x34ed5c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x34ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x34ed60: 0x3472d70a  ori         $s2, $v1, 0xD70A
    ctx->pc = 0x34ed60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x34ed64: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x34ed64u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ed68: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ed6c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ed70: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x34ed70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x34ed74: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x34ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x34ed78: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34ed78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34ed7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ed7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ed80: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ed84: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ed88: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x34ed88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x34ed8c: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x34ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x34ed90: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34ed90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34ed94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ed94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ed98: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ed9c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34eda0: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x34eda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x34eda4: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x34eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x34eda8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34eda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34edac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34edacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34edb0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34edb4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34edb8: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x34edb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x34edbc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x34edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x34edc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34edc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34edc4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34edc8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34edcc: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x34edccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x34edd0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x34edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x34edd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34edd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34edd8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34eddc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ede0: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x34ede0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x34ede4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x34ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x34ede8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ede8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34edec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34edecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34edf0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34edf4: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x34edf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x34edf8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x34edf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34edfc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ee00: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ee04: 0xa4430036  sh          $v1, 0x36($v0)
    ctx->pc = 0x34ee04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x34ee08: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x34ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34ee0c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ee10: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ee14: 0xa4430038  sh          $v1, 0x38($v0)
    ctx->pc = 0x34ee14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x34ee18: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x34ee18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34ee1c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ee20: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ee24: 0xa443003a  sh          $v1, 0x3A($v0)
    ctx->pc = 0x34ee24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x34ee28: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x34ee28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34ee2c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ee30: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ee34: 0xa443003c  sh          $v1, 0x3C($v0)
    ctx->pc = 0x34ee34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 3));
    // 0x34ee38: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x34ee38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ee3c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34ee3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34ee40: 0xc0d58b0  jal         func_3562C0
    ctx->pc = 0x34EE40u;
    SET_GPR_U32(ctx, 31, 0x34EE48u);
    ctx->pc = 0x3562C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3562C0u, 0x34EE40u, 0x34EE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EE48u;
label_34ee48:
    // 0x34ee48: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x34ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x34ee4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34ee4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34ee50: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x34ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x34ee54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34ee54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34ee58: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x34ee58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ee5c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34ee5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34ee60: 0xc0d5874  jal         func_3561D0
    ctx->pc = 0x34EE60u;
    SET_GPR_U32(ctx, 31, 0x34EE68u);
    ctx->pc = 0x3561D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3561D0u, 0x34EE60u, 0x34EE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EE68u;
label_34ee68:
    // 0x34ee68: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34EE68u;
    SET_GPR_U32(ctx, 31, 0x34EE70u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34EE68u, 0x34EE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EE70u;
label_34ee70:
    // 0x34ee70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34ee70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34ee74: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x34ee74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x34ee78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34ee7c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x34ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x34ee80: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x34ee80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ee84: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ee88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ee8c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x34ee8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x34ee90: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34EE90u;
    SET_GPR_U32(ctx, 31, 0x34EE98u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34EE90u, 0x34EE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EE98u;
label_34ee98:
    // 0x34ee98: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34ee98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34ee9c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x34ee9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x34eea0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34eea4: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x34eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x34eea8: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x34eea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34eeac: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34eeb0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34eeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34eeb4: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x34eeb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x34eeb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34eeb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34eebc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34eec0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34eec4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34eec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x34eec8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34eec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34eecc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34eed0: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x34eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34eed4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x34eed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x34eed8u;
}
