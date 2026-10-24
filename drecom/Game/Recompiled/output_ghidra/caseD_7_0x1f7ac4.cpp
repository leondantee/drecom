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

// Function: caseD_7
// Address: 0x1f7ac4 - 0x1f8034
void caseD_7_0x1f7ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1f7ac4");
#endif

    switch (ctx->pc) {
        case 0x1f7c28u: goto label_1f7c28;
        case 0x1f7c68u: goto label_1f7c68;
        case 0x1f7d60u: goto label_1f7d60;
        case 0x1f7d94u: goto label_1f7d94;
        case 0x1f7db8u: goto label_1f7db8;
        case 0x1f7de0u: goto label_1f7de0;
        case 0x1f7fd4u: goto label_1f7fd4;
        case 0x1f7fe8u: goto label_1f7fe8;
        case 0x1f7ff8u: goto label_1f7ff8;
        case 0x1f8030u: goto label_1f8030;
        default: break;
    }

    ctx->pc = 0x1f7ac4u;

    // 0x1f7ac4: 0x24030320  addiu       $v1, $zero, 0x320
    ctx->pc = 0x1f7ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x1f7ac8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7acc: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x1f7accu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f7ad0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7ad4: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1f7ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1f7ad8: 0x24510090  addiu       $s1, $v0, 0x90
    ctx->pc = 0x1f7ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1f7adc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7ae0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1f7ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f7ae4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7ae8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1f7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f7aec: 0x24510120  addiu       $s1, $v0, 0x120
    ctx->pc = 0x1f7aecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f7af0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7af4: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1f7af4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f7af8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7afc: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x1f7afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f7b00: 0x24820240  addiu       $v0, $a0, 0x240
    ctx->pc = 0x1f7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 576));
    // 0x1f7b04: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1f7b04u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f7b08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7b0c: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1f7b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f7b10: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7b14: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1f7b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1f7b18: 0x245102d0  addiu       $s1, $v0, 0x2D0
    ctx->pc = 0x1f7b18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x1f7b1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7b20: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1f7b20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f7b24: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7b28: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x1f7b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1f7b2c: 0x24a60480  addiu       $a2, $a1, 0x480
    ctx->pc = 0x1f7b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
    // 0x1f7b30: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x1f7b30u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1f7b34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f7b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7b38: 0xa2270000  sb          $a3, 0x0($s1)
    ctx->pc = 0x1f7b38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1f7b3c: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x1f7b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7b40: 0x8d020058  lw          $v0, 0x58($t0)
    ctx->pc = 0x1f7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x1f7b44: 0x24510510  addiu       $s1, $v0, 0x510
    ctx->pc = 0x1f7b44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x1f7b48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7b4c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1f7b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f7b50: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7b54: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x1f7b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f7b58: 0x248505a0  addiu       $a1, $a0, 0x5A0
    ctx->pc = 0x1f7b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1440));
    // 0x1f7b5c: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x1f7b5cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1f7b60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7b64: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1f7b64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f7b68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f7b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7b6c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7b70: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x1f7b70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f7b74: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f7b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7b78: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7b7c: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x1f7b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f7b80: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7b84: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f7b84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7b88: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7b8c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1f7b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7b90: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7b94: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1f7b94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1f7b98: 0x97c20140  lhu         $v0, 0x140($fp)
    ctx->pc = 0x1f7b98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 320)));
    // 0x1f7b9c: 0x3043ff5b  andi        $v1, $v0, 0xFF5B
    ctx->pc = 0x1f7b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65371);
    // 0x1f7ba0: 0xa7c30140  sh          $v1, 0x140($fp)
    ctx->pc = 0x1f7ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f7ba4: 0x97c302d0  lhu         $v1, 0x2D0($fp)
    ctx->pc = 0x1f7ba4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 720)));
    // 0x1f7ba8: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x1f7ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
    // 0x1f7bac: 0xa7c302d0  sh          $v1, 0x2D0($fp)
    ctx->pc = 0x1f7bacu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 720), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f7bb0: 0x97c30460  lhu         $v1, 0x460($fp)
    ctx->pc = 0x1f7bb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 1120)));
    // 0x1f7bb4: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x1f7bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
    // 0x1f7bb8: 0xa7c30460  sh          $v1, 0x460($fp)
    ctx->pc = 0x1f7bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 1120), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f7bbc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7bc0: 0xa4801278  sh          $zero, 0x1278($a0)
    ctx->pc = 0x1f7bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f7bc4: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7bc8: 0xa4a0127a  sh          $zero, 0x127A($a1)
    ctx->pc = 0x1f7bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f7bcc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7bd0: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x1f7bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f7bd4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7bd8: 0xa480127e  sh          $zero, 0x127E($a0)
    ctx->pc = 0x1f7bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f7bdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7bdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7be0: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7be4: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x1f7be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
    // 0x1f7be8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7be8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7bec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7bf0: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1f7bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x1f7bf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7bf8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7bfc: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x1f7bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x1f7c00: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7c04: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7c08: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f7c08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f7c0c: 0x8ca50368  lw          $a1, 0x368($a1)
    ctx->pc = 0x1f7c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x1f7c10: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f7c10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f7c14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7c18: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1f7c18u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f7c1c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f7c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f7c20: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F7C20u;
    SET_GPR_U32(ctx, 31, 0x1F7C28u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F7C20u, 0x1F7C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7C28u;
label_1f7c28:
    // 0x1f7c28: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f7c28u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f7c2c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7c30: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f7c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f7c34: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1f7c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1f7c38: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7c3c: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x1f7c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1f7c40: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1f7c40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1f7c44: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x1f7c44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7c48: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x1f7c48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x1f7c4c: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x1f7c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x1f7c50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7c50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7c54: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7c58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f7c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f7c5c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1f7c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1f7c60: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F7C60u;
    SET_GPR_U32(ctx, 31, 0x1F7C68u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F7C60u, 0x1F7C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7C68u;
label_1f7c68:
    // 0x1f7c68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f7c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f7c6c: 0x3043007f  andi        $v1, $v0, 0x7F
    ctx->pc = 0x1f7c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1f7c70: 0x2462000a  addiu       $v0, $v1, 0xA
    ctx->pc = 0x1f7c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1f7c74: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f7c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f7c78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f7c78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f7c7c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7c80: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7c84: 0xa462005c  sh          $v0, 0x5C($v1)
    ctx->pc = 0x1f7c84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f7c88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7c88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7c8c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7c90: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1f7c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7c94: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x1f7c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x1f7c98: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7c9c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f7c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f7ca0: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1f7ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1f7ca4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7ca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7ca8: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7cac: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x1f7cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1f7cb0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f7cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1f7cb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7cb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7cb8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7cbc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7cc0: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x1f7cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x1f7cc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7cc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7cc8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7ccc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7cd0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f7cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1f7cd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7cd8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7cdc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7ce0: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1f7ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1f7ce4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7ce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7ce8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7cec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7cf0: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1f7cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1f7cf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7cf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7cf8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7cfc: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f7cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f7d00: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f7d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1f7d04: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7d08: 0x246310b0  addiu       $v1, $v1, 0x10B0
    ctx->pc = 0x1f7d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x1f7d0c: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x1f7d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x1f7d10: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x1f7d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1f7d14: 0x8cc500f0  lw          $a1, 0xF0($a2)
    ctx->pc = 0x1f7d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
    // 0x1f7d18: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1f7d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1f7d1c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1f7d1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f7d20: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1f7d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1f7d24: 0xacc300f0  sw          $v1, 0xF0($a2)
    ctx->pc = 0x1f7d24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 240), GPR_U32(ctx, 3));
    // 0x1f7d28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7d2c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7d30: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f7d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f7d34: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x1f7d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x1f7d38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7d38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7d3c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7d40: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f7d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7d44: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x1f7d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x1f7d48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7d4c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7d50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7d54: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x1f7d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x1f7d58: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F7D58u;
    SET_GPR_U32(ctx, 31, 0x1F7D60u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F7D58u, 0x1F7D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D60u;
label_1f7d60:
    // 0x1f7d60: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f7d60u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f7d64: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1f7d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f7d68: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x1f7d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1f7d6c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x1f7d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1f7d70: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f7d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f7d74: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f7d74u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f7d78: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7d7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7d80: 0xa464005e  sh          $a0, 0x5E($v1)
    ctx->pc = 0x1f7d80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f7d84: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7d88: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f7d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f7d8c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F7D8Cu;
    SET_GPR_U32(ctx, 31, 0x1F7D94u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F7D8Cu, 0x1F7D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D94u;
label_1f7d94:
    // 0x1f7d94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f7d94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f7d98: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7d9c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f7d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7da0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7da4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f7da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7da8: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x1f7da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x1f7dac: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7db0: 0xc07e3b0  jal         func_1F8EC0
    ctx->pc = 0x1F7DB0u;
    SET_GPR_U32(ctx, 31, 0x1F7DB8u);
    ctx->pc = 0x1F8EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8EC0u, 0x1F7DB0u, 0x1F7DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7DB8u;
label_1f7db8:
    // 0x1f7db8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f7db8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f7dbc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7dc0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7dc4: 0x24650054  addiu       $a1, $v1, 0x54
    ctx->pc = 0x1f7dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x1f7dc8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7dcc: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1f7dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1f7dd0: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x1f7dd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f7dd4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f7dd4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f7dd8: 0xc05d328  jal         func_174CA0
    ctx->pc = 0x1F7DD8u;
    SET_GPR_U32(ctx, 31, 0x1F7DE0u);
    ctx->pc = 0x174CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174CA0u, 0x1F7DD8u, 0x1F7DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7DE0u;
label_1f7de0:
    // 0x1f7de0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f7de0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f7de4: 0xffa300a8  sd          $v1, 0xA8($sp)
    ctx->pc = 0x1f7de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 3));
    // 0x1f7de8: 0xdfa400a8  ld          $a0, 0xA8($sp)
    ctx->pc = 0x1f7de8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1f7dec: 0x10800091  beqz        $a0, . + 4 + (0x91 << 2)
    ctx->pc = 0x1F7DECu;
    {
        const bool branch_taken_0x1f7dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7dec) {
            ctx->pc = 0x1F8034u;
            return;
        }
    }
    ctx->pc = 0x1F7DF4u;
    // 0x1f7df4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7df8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7dfc: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x1f7dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1f7e00: 0x86041278  lh          $a0, 0x1278($s0)
    ctx->pc = 0x1f7e00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4728)));
    // 0x1f7e04: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7e08: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1f7e08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f7e0c: 0x8604127a  lh          $a0, 0x127A($s0)
    ctx->pc = 0x1f7e0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4730)));
    // 0x1f7e10: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7e14: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1f7e14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f7e18: 0x8604127c  lh          $a0, 0x127C($s0)
    ctx->pc = 0x1f7e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4732)));
    // 0x1f7e1c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7e20: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1f7e20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f7e24: 0x8604127e  lh          $a0, 0x127E($s0)
    ctx->pc = 0x1f7e24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4734)));
    // 0x1f7e28: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7e2c: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x1f7e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f7e30: 0x8fbe00c8  lw          $fp, 0xC8($sp)
    ctx->pc = 0x1f7e30u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7e34: 0xc7c00120  lwc1        $f0, 0x120($fp)
    ctx->pc = 0x1f7e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7e38: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7e3c: 0xe4600170  swc1        $f0, 0x170($v1)
    ctx->pc = 0x1f7e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 368), bits); }
    // 0x1f7e40: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7e44: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f7e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7e48: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7e4c: 0xe4600174  swc1        $f0, 0x174($v1)
    ctx->pc = 0x1f7e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 372), bits); }
    // 0x1f7e50: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7e54: 0xc4600128  lwc1        $f0, 0x128($v1)
    ctx->pc = 0x1f7e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7e58: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7e5c: 0xe4600178  swc1        $f0, 0x178($v1)
    ctx->pc = 0x1f7e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 376), bits); }
    // 0x1f7e60: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1f7e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7e64: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7e68: 0xe4a000d0  swc1        $f0, 0xD0($a1)
    ctx->pc = 0x1f7e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 208), bits); }
    // 0x1f7e6c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1f7e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7e70: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7e74: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x1f7e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x1f7e78: 0xc60000d8  lwc1        $f0, 0xD8($s0)
    ctx->pc = 0x1f7e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7e7c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7e80: 0xe46000d8  swc1        $f0, 0xD8($v1)
    ctx->pc = 0x1f7e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 216), bits); }
    // 0x1f7e84: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x1f7e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7e88: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7e8c: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x1f7e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x1f7e90: 0xc6000184  lwc1        $f0, 0x184($s0)
    ctx->pc = 0x1f7e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7e94: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7e98: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1f7e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x1f7e9c: 0xc6000188  lwc1        $f0, 0x188($s0)
    ctx->pc = 0x1f7e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7ea0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7ea4: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f7ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f7ea8: 0xc60001a0  lwc1        $f0, 0x1A0($s0)
    ctx->pc = 0x1f7ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7eac: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7eb0: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x1f7eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x1f7eb4: 0xc60001a4  lwc1        $f0, 0x1A4($s0)
    ctx->pc = 0x1f7eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7eb8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7ebc: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x1f7ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x1f7ec0: 0xc60001a8  lwc1        $f0, 0x1A8($s0)
    ctx->pc = 0x1f7ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7ec4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7ec8: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x1f7ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x1f7ecc: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x1f7eccu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f7ed0: 0x26621330  addiu       $v0, $s3, 0x1330
    ctx->pc = 0x1f7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
    // 0x1f7ed4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1f7ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7ed8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7edc: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1f7edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f7ee0: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1f7ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1f7ee4: 0x26661330  addiu       $a2, $s3, 0x1330
    ctx->pc = 0x1f7ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
    // 0x1f7ee8: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x1f7ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7eec: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x1f7eecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7ef0: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x1f7ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x1f7ef4: 0xe5000014  swc1        $f0, 0x14($t0)
    ctx->pc = 0x1f7ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x1f7ef8: 0x26651330  addiu       $a1, $s3, 0x1330
    ctx->pc = 0x1f7ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
    // 0x1f7efc: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x1f7efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7f00: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7f04: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f7f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f7f08: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x1f7f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x1f7f0c: 0x26631330  addiu       $v1, $s3, 0x1330
    ctx->pc = 0x1f7f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
    // 0x1f7f10: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f7f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7f14: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7f18: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f7f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f7f1c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f7f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1f7f20: 0x26631330  addiu       $v1, $s3, 0x1330
    ctx->pc = 0x1f7f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
    // 0x1f7f24: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1f7f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7f28: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7f2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7f30: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1f7f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1f7f34: 0x26631330  addiu       $v1, $s3, 0x1330
    ctx->pc = 0x1f7f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
    // 0x1f7f38: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x1f7f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7f3c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7f40: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7f44: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1f7f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1f7f48: 0x26641330  addiu       $a0, $s3, 0x1330
    ctx->pc = 0x1f7f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
    // 0x1f7f4c: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x1f7f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7f50: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7f54: 0x24741330  addiu       $s4, $v1, 0x1330
    ctx->pc = 0x1f7f54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7f58: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x1f7f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
    // 0x1f7f5c: 0x26751330  addiu       $s5, $s3, 0x1330
    ctx->pc = 0x1f7f5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
    // 0x1f7f60: 0xc6a00038  lwc1        $f0, 0x38($s5)
    ctx->pc = 0x1f7f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7f64: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7f68: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x1f7f68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7f6c: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x1f7f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x1f7f70: 0x26721330  addiu       $s2, $s3, 0x1330
    ctx->pc = 0x1f7f70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
    // 0x1f7f74: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x1f7f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7f78: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7f7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7f80: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f7f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x1f7f84: 0x26631330  addiu       $v1, $s3, 0x1330
    ctx->pc = 0x1f7f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
    // 0x1f7f88: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x1f7f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7f8c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7f90: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f7f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7f94: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x1f7f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x1f7f98: 0x960309ea  lhu         $v1, 0x9EA($s0)
    ctx->pc = 0x1f7f98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
    // 0x1f7f9c: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x1f7f9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7fa0: 0xa62309ea  sh          $v1, 0x9EA($s1)
    ctx->pc = 0x1f7fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2538), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f7fa4: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7fa8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7fac: 0x947109ea  lhu         $s1, 0x9EA($v1)
    ctx->pc = 0x1f7facu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2538)));
    // 0x1f7fb0: 0x3226ffff  andi        $a2, $s1, 0xFFFF
    ctx->pc = 0x1f7fb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1f7fb4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7fb8: 0x8cb10368  lw          $s1, 0x368($a1)
    ctx->pc = 0x1f7fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x1f7fbc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1f7fbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1f7fc0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1f7fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7fc4: 0x72403e28  paddub      $a3, $s2, $zero
    ctx->pc = 0x1f7fc4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1f7fc8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f7fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f7fcc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F7FCCu;
    SET_GPR_U32(ctx, 31, 0x1F7FD4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F7FCCu, 0x1F7FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7FD4u;
label_1f7fd4:
    // 0x1f7fd4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f7fd4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f7fd8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7fdc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f7fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f7fe0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F7FE0u;
    SET_GPR_U32(ctx, 31, 0x1F7FE8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F7FE0u, 0x1F7FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7FE8u;
label_1f7fe8:
    // 0x1f7fe8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f7fe8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f7fec: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7ff0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F7FF0u;
    SET_GPR_U32(ctx, 31, 0x1F7FF8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F7FF0u, 0x1F7FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7FF8u;
label_1f7ff8:
    // 0x1f7ff8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f7ff8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f7ffc: 0x96040a00  lhu         $a0, 0xA00($s0)
    ctx->pc = 0x1f7ffcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2560)));
    // 0x1f8000: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f8000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f8004: 0xa4640a00  sh          $a0, 0xA00($v1)
    ctx->pc = 0x1f8004u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2560), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f8008: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f8008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f800c: 0x3c1746c3  lui         $s7, 0x46C3
    ctx->pc = 0x1f800cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)18115 << 16));
    // 0x1f8010: 0x36e35000  ori         $v1, $s7, 0x5000
    ctx->pc = 0x1f8010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)20480);
    // 0x1f8014: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f8014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f8018: 0x24160522  addiu       $s6, $zero, 0x522
    ctx->pc = 0x1f8018u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x1f801c: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x1f801cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1f8020: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x1f8020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x1f8024: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f8024u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f8028: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F8028u;
    SET_GPR_U32(ctx, 31, 0x1F8030u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F8028u, 0x1F8030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8030u;
label_1f8030:
    // 0x1f8030: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f8030u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1f8034u;
}
