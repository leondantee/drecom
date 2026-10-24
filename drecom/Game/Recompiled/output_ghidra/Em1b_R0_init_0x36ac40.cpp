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

// Function: Em1b_R0_init
// Address: 0x36ac40 - 0x36b220
void Em1b_R0_init_0x36ac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_R0_init_0x36ac40");
#endif

    switch (ctx->pc) {
        case 0x36ac74u: goto label_36ac74;
        case 0x36adc4u: goto label_36adc4;
        case 0x36adecu: goto label_36adec;
        case 0x36adf8u: goto label_36adf8;
        case 0x36ae04u: goto label_36ae04;
        case 0x36aec4u: goto label_36aec4;
        case 0x36aed4u: goto label_36aed4;
        case 0x36af34u: goto label_36af34;
        case 0x36affcu: goto label_36affc;
        case 0x36b0c4u: goto label_36b0c4;
        case 0x36b0e0u: goto label_36b0e0;
        case 0x36b0fcu: goto label_36b0fc;
        case 0x36b118u: goto label_36b118;
        case 0x36b12cu: goto label_36b12c;
        case 0x36b140u: goto label_36b140;
        case 0x36b154u: goto label_36b154;
        case 0x36b168u: goto label_36b168;
        default: break;
    }

    ctx->pc = 0x36ac40u;

    // 0x36ac40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36ac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36ac44: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x36ac44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x36ac48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36ac48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x36ac4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36ac4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36ac50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36ac50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36ac54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36ac54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36ac58: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x36ac58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x36ac5c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36ac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ac60: 0x247310b0  addiu       $s3, $v1, 0x10B0
    ctx->pc = 0x36ac60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x36ac64: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x36ac64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x36ac68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36ac68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36ac6c: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x36AC6Cu;
    SET_GPR_U32(ctx, 31, 0x36AC74u);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x36AC6Cu, 0x36AC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AC74u;
label_36ac74:
    // 0x36ac74: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x36ac74u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36ac78: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x36ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x36ac7c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x36ac7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x36ac80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36ac80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ac84: 0x0  nop
    ctx->pc = 0x36ac84u;
    // NOP
    // 0x36ac88: 0xe66000d0  swc1        $f0, 0xD0($s3)
    ctx->pc = 0x36ac88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 208), bits); }
    // 0x36ac8c: 0xe66000d4  swc1        $f0, 0xD4($s3)
    ctx->pc = 0x36ac8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
    // 0x36ac90: 0x3c12457a  lui         $s2, 0x457A
    ctx->pc = 0x36ac90u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17786 << 16));
    // 0x36ac94: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x36ac94u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ac98: 0x0  nop
    ctx->pc = 0x36ac98u;
    // NOP
    // 0x36ac9c: 0xe66000d8  swc1        $f0, 0xD8($s3)
    ctx->pc = 0x36ac9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 216), bits); }
    // 0x36aca0: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x36aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x36aca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36aca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36aca8: 0x0  nop
    ctx->pc = 0x36aca8u;
    // NOP
    // 0x36acac: 0xe66000e4  swc1        $f0, 0xE4($s3)
    ctx->pc = 0x36acacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 228), bits); }
    // 0x36acb0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36acb4: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x36acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36acb8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x36acb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x36acbc: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x36acbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x36acc0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36acc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36acc4: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x36acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x36acc8: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x36acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x36accc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36acccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36acd0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36acd4: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x36acd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x36acd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36acd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36acdc: 0x0  nop
    ctx->pc = 0x36acdcu;
    // NOP
    // 0x36ace0: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x36ace0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x36ace4: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x36ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
    // 0x36ace8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36ace8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36acec: 0x0  nop
    ctx->pc = 0x36acecu;
    // NOP
    // 0x36acf0: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x36acf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x36acf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36acf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36acf8: 0x0  nop
    ctx->pc = 0x36acf8u;
    // NOP
    // 0x36acfc: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x36acfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x36ad00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36ad04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36ad04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ad08: 0x0  nop
    ctx->pc = 0x36ad08u;
    // NOP
    // 0x36ad0c: 0xe660003c  swc1        $f0, 0x3C($s3)
    ctx->pc = 0x36ad0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
    // 0x36ad10: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x36ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x36ad14: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x36ad14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x36ad18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36ad18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ad1c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ad20: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x36ad20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x36ad24: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x36ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x36ad28: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x36ad28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x36ad2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36ad2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ad30: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ad34: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x36ad34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    // 0x36ad38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36ad38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ad3c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ad40: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x36ad40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x36ad44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ad48: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x36ad48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ad4c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ad50: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x36ad50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ad54: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ad58: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x36ad58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ad5c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ad60: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x36ad60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x36ad64: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x36ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x36ad68: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x36ad68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x36ad6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x36ad70: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x36ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x36ad74: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36ad74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x36ad78: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x36ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x36ad7c: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x36ad7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x36ad80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x36ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x36ad84: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x36ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x36ad88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36ad88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36ad8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36ad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x36ad90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x36ad90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x36ad94: 0x8c230ae8  lw          $v1, 0xAE8($at)
    ctx->pc = 0x36ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x36ad98: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ad98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ad9c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36ada0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36ada0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x36ada4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x36ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x36ada8: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x36ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x36adac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36adacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x36adb0: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x36adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x36adb4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36adb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x36adb8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x36adb8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36adbc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x36ADBCu;
    {
        const bool branch_taken_0x36adbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36adbc) {
            ctx->pc = 0x36AE10u;
            goto label_36ae10;
        }
    }
    ctx->pc = 0x36ADC4u;
label_36adc4:
    // 0x36adc4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36adc8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x36adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36adcc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x36adccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x36add0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x36add0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x36add4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x36add4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x36add8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36add8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36addc: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x36addcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36ade0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x36ade0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x36ade4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36ADE4u;
    SET_GPR_U32(ctx, 31, 0x36ADECu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36ADE4u, 0x36ADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ADECu;
label_36adec:
    // 0x36adec: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x36adecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x36adf0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36ADF0u;
    SET_GPR_U32(ctx, 31, 0x36ADF8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36ADF0u, 0x36ADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ADF8u;
label_36adf8:
    // 0x36adf8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x36adf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x36adfc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36ADFCu;
    SET_GPR_U32(ctx, 31, 0x36AE04u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36ADFCu, 0x36AE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AE04u;
label_36ae04:
    // 0x36ae04: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x36ae04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x36ae08: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x36ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x36ae0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36ae0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_36ae10:
    // 0x36ae10: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x36ae10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x36ae14: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x36AE14u;
    {
        const bool branch_taken_0x36ae14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36ae14) {
            ctx->pc = 0x36ADC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36adc4;
        }
    }
    ctx->pc = 0x36AE1Cu;
    // 0x36ae1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ae20: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ae24: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x36ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x36ae28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36ae28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x36ae2c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x36ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x36ae30: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x36ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x36ae34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36ae34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ae38: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ae3c: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x36ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x36ae40: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x36ae40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x36ae44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ae48: 0x24421338  addiu       $v0, $v0, 0x1338
    ctx->pc = 0x36ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4920));
    // 0x36ae4c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x36ae4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x36ae50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ae54: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ae58: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x36ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x36ae5c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x36ae5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x36ae60: 0x3c0246bb  lui         $v0, 0x46BB
    ctx->pc = 0x36ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18107 << 16));
    // 0x36ae64: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x36ae64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x36ae68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36ae68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ae6c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ae70: 0xe44011e8  swc1        $f0, 0x11E8($v0)
    ctx->pc = 0x36ae70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4584), bits); }
    // 0x36ae74: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ae78: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x36ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36ae7c: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x36ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x36ae80: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36ae80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36ae84: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36ae84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x36ae88: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x36ae8c: 0x2443b1c0  addiu       $v1, $v0, -0x4E40
    ctx->pc = 0x36ae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
    // 0x36ae90: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ae94: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x36ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x36ae98: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x36ae98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x36ae9c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36aea0: 0xac43121c  sw          $v1, 0x121C($v0)
    ctx->pc = 0x36aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 3));
    // 0x36aea4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36aea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36aea8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36aeac: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x36aeacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
    // 0x36aeb0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36aeb4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x36aeb8: 0x2445b1b0  addiu       $a1, $v0, -0x4E50
    ctx->pc = 0x36aeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947248));
    // 0x36aebc: 0xc099c30  jal         func_2670C0
    ctx->pc = 0x36AEBCu;
    SET_GPR_U32(ctx, 31, 0x36AEC4u);
    ctx->pc = 0x2670C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2670C0u, 0x36AEBCu, 0x36AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AEC4u;
label_36aec4:
    // 0x36aec4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x36aec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36aec8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36aec8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36aecc: 0xc099794  jal         func_265E50
    ctx->pc = 0x36AECCu;
    SET_GPR_U32(ctx, 31, 0x36AED4u);
    ctx->pc = 0x265E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265E50u, 0x36AECCu, 0x36AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AED4u;
label_36aed4:
    // 0x36aed4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36aed8: 0xac621348  sw          $v0, 0x1348($v1)
    ctx->pc = 0x36aed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4936), GPR_U32(ctx, 2));
    // 0x36aedc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36aedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36aee0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36aee4: 0x8c421348  lw          $v0, 0x1348($v0)
    ctx->pc = 0x36aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4936)));
    // 0x36aee8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36aeec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x36aef0: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x36aef4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36aef8: 0x8c421390  lw          $v0, 0x1390($v0)
    ctx->pc = 0x36aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x36aefc: 0xa444000e  sh          $a0, 0xE($v0)
    ctx->pc = 0x36aefcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x36af00: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36af00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36af04: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x36af04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x36af08: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36af08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36af0c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36af10: 0xac431340  sw          $v1, 0x1340($v0)
    ctx->pc = 0x36af10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4928), GPR_U32(ctx, 3));
    // 0x36af14: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36af14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36af18: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36af18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36af1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36af1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36af20: 0x24065a03  addiu       $a2, $zero, 0x5A03
    ctx->pc = 0x36af20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23043));
    // 0x36af24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36af24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36af28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36af28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36af2c: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x36AF2Cu;
    SET_GPR_U32(ctx, 31, 0x36AF34u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x36AF2Cu, 0x36AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AF34u;
label_36af34:
    // 0x36af34: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36af34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36af38: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x36af38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x36af3c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x36af3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36af40: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x36af40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x36af44: 0x10200058  beqz        $at, . + 4 + (0x58 << 2)
    ctx->pc = 0x36AF44u;
    {
        const bool branch_taken_0x36af44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36af44) {
            ctx->pc = 0x36B0A8u;
            goto label_36b0a8;
        }
    }
    ctx->pc = 0x36AF4Cu;
    // 0x36af4c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x36af4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x36af50: 0xa0204f11  sb          $zero, 0x4F11($at)
    ctx->pc = 0x36af50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
    // 0x36af54: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x36af54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x36af58: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36af58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36af5c: 0x8c22f9e0  lw          $v0, -0x620($at)
    ctx->pc = 0x36af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x36af60: 0xac43128c  sw          $v1, 0x128C($v0)
    ctx->pc = 0x36af60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 3));
    // 0x36af64: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x36af64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x36af68: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36af68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36af6c: 0x8c22f9e4  lw          $v0, -0x61C($at)
    ctx->pc = 0x36af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x36af70: 0xac43128c  sw          $v1, 0x128C($v0)
    ctx->pc = 0x36af70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 3));
    // 0x36af74: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36af74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36af78: 0x8c23f9e0  lw          $v1, -0x620($at)
    ctx->pc = 0x36af78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x36af7c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36af80: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36af80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x36af84: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36af84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x36af88: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36af88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36af8c: 0x8c23f9e4  lw          $v1, -0x61C($at)
    ctx->pc = 0x36af8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x36af90: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36af94: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36af94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x36af98: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36af98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x36af9c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x36af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x36afa0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36afa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36afa4: 0x8c22f9e8  lw          $v0, -0x618($at)
    ctx->pc = 0x36afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61F9E8u));
    // 0x36afa8: 0xac43128c  sw          $v1, 0x128C($v0)
    ctx->pc = 0x36afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 3));
    // 0x36afac: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x36afacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x36afb0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36afb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36afb4: 0x8c22f9ec  lw          $v0, -0x614($at)
    ctx->pc = 0x36afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61F9ECu));
    // 0x36afb8: 0xac43128c  sw          $v1, 0x128C($v0)
    ctx->pc = 0x36afb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 3));
    // 0x36afbc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36afbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36afc0: 0x8c23f9e8  lw          $v1, -0x618($at)
    ctx->pc = 0x36afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61F9E8u));
    // 0x36afc4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36afc8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36afc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x36afcc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36afccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x36afd0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36afd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36afd4: 0x8c23f9ec  lw          $v1, -0x614($at)
    ctx->pc = 0x36afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61F9ECu));
    // 0x36afd8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36afdc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36afdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x36afe0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36afe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x36afe4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36afe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36afe8: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36afe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x36afec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36afecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36aff0: 0x2450000b  addiu       $s0, $v0, 0xB
    ctx->pc = 0x36aff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
    // 0x36aff4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x36AFF4u;
    {
        const bool branch_taken_0x36aff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36aff4) {
            ctx->pc = 0x36B028u;
            goto label_36b028;
        }
    }
    ctx->pc = 0x36AFFCu;
label_36affc:
    // 0x36affc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36affcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36b000: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x36b004: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x36b008: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36b00c: 0x8c441390  lw          $a0, 0x1390($v0)
    ctx->pc = 0x36b00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x36b010: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x36b010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36b014: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x36b014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x36b018: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36b018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36b01c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36b01cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x36b020: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36b020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36b024: 0x0  nop
    ctx->pc = 0x36b024u;
    // NOP
label_36b028:
    // 0x36b028: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36b02c: 0x9022e651  lbu         $v0, -0x19AF($at)
    ctx->pc = 0x36b02cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E651u));
    // 0x36b030: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b034: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x36b034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x36b038: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x36B038u;
    {
        const bool branch_taken_0x36b038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36b038) {
            ctx->pc = 0x36AFFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36affc;
        }
    }
    ctx->pc = 0x36B040u;
    // 0x36b040: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36b044: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x36b048: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b04c: 0x24420022  addiu       $v0, $v0, 0x22
    ctx->pc = 0x36b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
    // 0x36b050: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36b054: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x36b058: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x36b05c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36b060: 0x8c441390  lw          $a0, 0x1390($v0)
    ctx->pc = 0x36b060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x36b064: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x36b064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36b068: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x36b068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x36b06c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36b06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36b070: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36b070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x36b074: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36b078: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x36b07c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b080: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x36b080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x36b084: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36b088: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x36b08c: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x36b090: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36b094: 0x8c441390  lw          $a0, 0x1390($v0)
    ctx->pc = 0x36b094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x36b098: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x36b098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36b09c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x36b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x36b0a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36b0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36b0a4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36b0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_36b0a8:
    // 0x36b0a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b0ac: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x36b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x36b0b0: 0x24520510  addiu       $s2, $v0, 0x510
    ctx->pc = 0x36b0b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x36b0b4: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x36b0b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x36b0b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b0bc: 0xc0963b8  jal         func_258EE0
    ctx->pc = 0x36B0BCu;
    SET_GPR_U32(ctx, 31, 0x36B0C4u);
    ctx->pc = 0x258EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258EE0u, 0x36B0BCu, 0x36B0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B0C4u;
label_36b0c4:
    // 0x36b0c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b0c8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x36b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x36b0cc: 0x24520240  addiu       $s2, $v0, 0x240
    ctx->pc = 0x36b0ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x36b0d0: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x36b0d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x36b0d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b0d8: 0xc0963b8  jal         func_258EE0
    ctx->pc = 0x36B0D8u;
    SET_GPR_U32(ctx, 31, 0x36B0E0u);
    ctx->pc = 0x258EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258EE0u, 0x36B0D8u, 0x36B0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B0E0u;
label_36b0e0:
    // 0x36b0e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b0e4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x36b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x36b0e8: 0x24520360  addiu       $s2, $v0, 0x360
    ctx->pc = 0x36b0e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x36b0ec: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x36b0ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x36b0f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b0f4: 0xc0963b8  jal         func_258EE0
    ctx->pc = 0x36B0F4u;
    SET_GPR_U32(ctx, 31, 0x36B0FCu);
    ctx->pc = 0x258EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258EE0u, 0x36B0F4u, 0x36B0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B0FCu;
label_36b0fc:
    // 0x36b0fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b100: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x36b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x36b104: 0x24520120  addiu       $s2, $v0, 0x120
    ctx->pc = 0x36b104u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36b108: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x36b108u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x36b10c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b110: 0xc0963b8  jal         func_258EE0
    ctx->pc = 0x36B110u;
    SET_GPR_U32(ctx, 31, 0x36B118u);
    ctx->pc = 0x258EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258EE0u, 0x36B110u, 0x36B118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B118u;
label_36b118:
    // 0x36b118: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36b118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b11c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x36b11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36b120: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x36b120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x36b124: 0xc096450  jal         func_259140
    ctx->pc = 0x36B124u;
    SET_GPR_U32(ctx, 31, 0x36B12Cu);
    ctx->pc = 0x259140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259140u, 0x36B124u, 0x36B12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B12Cu;
label_36b12c:
    // 0x36b12c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b130: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x36b130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36b134: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x36b134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x36b138: 0xc096450  jal         func_259140
    ctx->pc = 0x36B138u;
    SET_GPR_U32(ctx, 31, 0x36B140u);
    ctx->pc = 0x259140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259140u, 0x36B138u, 0x36B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B140u;
label_36b140:
    // 0x36b140: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36b140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b144: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x36b144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36b148: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x36b148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x36b14c: 0xc096450  jal         func_259140
    ctx->pc = 0x36B14Cu;
    SET_GPR_U32(ctx, 31, 0x36B154u);
    ctx->pc = 0x259140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259140u, 0x36B14Cu, 0x36B154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B154u;
label_36b154:
    // 0x36b154: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36b154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b158: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x36b158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36b15c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x36b15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36b160: 0xc096450  jal         func_259140
    ctx->pc = 0x36B160u;
    SET_GPR_U32(ctx, 31, 0x36B168u);
    ctx->pc = 0x259140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259140u, 0x36B160u, 0x36B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B168u;
label_36b168:
    // 0x36b168: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36b168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b16c: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x36b16cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x36b170: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x36b170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x36b174: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36b174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b178: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x36B178u;
    {
        const bool branch_taken_0x36b178 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x36b178) {
            ctx->pc = 0x36B200u;
            goto label_36b200;
        }
    }
    ctx->pc = 0x36B180u;
    // 0x36b180: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36b180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b184: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x36b184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x36b188: 0x24720510  addiu       $s2, $v1, 0x510
    ctx->pc = 0x36b188u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x36b18c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x36b18cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36b190: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36b190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b194: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x36b194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x36b198: 0x24720240  addiu       $s2, $v1, 0x240
    ctx->pc = 0x36b198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x36b19c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x36b19cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36b1a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b1a4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x36b1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x36b1a8: 0x24720360  addiu       $s2, $v1, 0x360
    ctx->pc = 0x36b1a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 864));
    // 0x36b1ac: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x36b1acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36b1b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b1b4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x36b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x36b1b8: 0x24720120  addiu       $s2, $v1, 0x120
    ctx->pc = 0x36b1b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x36b1bc: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x36b1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36b1c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b1c4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x36b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x36b1c8: 0x24720ea0  addiu       $s2, $v1, 0xEA0
    ctx->pc = 0x36b1c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3744));
    // 0x36b1cc: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x36b1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36b1d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36b1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b1d4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x36b1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x36b1d8: 0x24720f30  addiu       $s2, $v1, 0xF30
    ctx->pc = 0x36b1d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3888));
    // 0x36b1dc: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x36b1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36b1e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b1e4: 0x8c730058  lw          $s3, 0x58($v1)
    ctx->pc = 0x36b1e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x36b1e8: 0x26720fc0  addiu       $s2, $s3, 0xFC0
    ctx->pc = 0x36b1e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4032));
    // 0x36b1ec: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x36b1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36b1f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b1f4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x36b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x36b1f8: 0x24720480  addiu       $s2, $v1, 0x480
    ctx->pc = 0x36b1f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x36b1fc: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x36b1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_36b200:
    // 0x36b200: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x36b200u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36b204: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36b204u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36b208: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36b208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36b20c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36b20cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36b210: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36b210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b214: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x36b214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x36b218: 0x3e00008  jr          $ra
    ctx->pc = 0x36B218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B220u;
}
